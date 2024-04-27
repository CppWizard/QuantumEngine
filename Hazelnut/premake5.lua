project "Hazelnut"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++20"
	staticruntime "on"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"src/**.h",
		"src/**.cpp"
	}

	includedirs
	{
		"%{wks.location}/QuantumEngine/vendor/spdlog/include",
		"%{wks.location}/QuantumEngine/src",
		"%{wks.location}/QuantumEngine/vendor",
		"%{IncludeDir.glm}",
		"%{IncludeDir.entt}"
	}

	links
	{
		"QuantumEngine"
	}

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Debug"
		defines "QT_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "QT_RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		defines "QT_DIST"
		runtime "Release"
		optimize "on"
