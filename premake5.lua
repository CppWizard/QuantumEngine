workspace "QuantumEngine"
	architecture "x64"
	startproject "Sandbox"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

disablewarnings "4996"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "QuantumEngine/vendor/GLFW/include"
IncludeDir["Glad"] = "QuantumEngine/vendor/Glad/include"
IncludeDir["ImGui"] = "QuantumEngine/vendor/imgui"

group "Dependencies"
	include "QuantumEngine/vendor/GLFW"
	include "QuantumEngine/vendor/Glad"
	include "QuantumEngine/vendor/imgui"

group ""

project "QuantumEngine"
	location "QuantumEngine"
	kind "SharedLib"
	language "C++"
	staticruntime "off"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "qtpch.h"
	pchsource "QuantumEngine/src/qtpch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}",
		"%{IncludeDir.Glad}",
		"%{IncludeDir.ImGui}"
	}

	links
	{
		"GLFW",
		"Glad",
		"ImGui",
		"opengl32.lib"
	}

	filter "system:windows"
		cppdialect "C++20"
		systemversion "latest"

		defines
		{
			"QT_PLATFORM_WINDOWS",
			"QT_BUILD_DLL",
			"GLFW_INCLUDE_NONE"
		}

	postbuildcommands
	{
		("{COPY} %{cfg.buildtarget.relpath} \"../bin/" .. outputdir .. "/Sandbox/\"")
	}

	filter "configurations:Debug"
		defines "QT_DEBUG"
		runtime "Debug"
		symbols "On"

	filter "configurations:Release"
		defines "QT_RELEASE"
		runtime "Release"
		optimize "On"

	filter "configurations:Dist"
		defines "QT_DIST"
		runtime "Release"
		optimize "On"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"
	staticruntime "off"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"QuantumEngine/vendor/spdlog/include",
		"QuantumEngine/src"
	}

	links
	{
		"QuantumEngine"
	}

	filter "system:windows"
		cppdialect "C++20"
		systemversion "latest"

		defines
		{
			"QT_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "QT_DEBUG"
		runtime "Debug"
		symbols "On"

	filter "configurations:Release"
		defines "QT_RELEASE"
		runtime "Release"
		optimize "On"

	filter "configurations:Dist"
		defines "QT_DIST"
		runtime "Release"

		optimize "On"