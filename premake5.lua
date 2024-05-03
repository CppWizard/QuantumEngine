include "./vendor/premake/premake_customization/solution_items.lua"

workspace "QuantumEngine"
	architecture "x86_64"
	startproject "Hazelnut"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	solution_items
	{
		".editorconfig"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "%{wks.location}/QuantumEngine/vendor/GLFW/include"
IncludeDir["Glad"] = "%{wks.location}/QuantumEngine/vendor/Glad/include"
IncludeDir["ImGui"] = "%{wks.location}/QuantumEngine/vendor/imgui"
IncludeDir["glm"] = "%{wks.location}/QuantumEngine/vendor/glm"
IncludeDir["stb_image"] = "%{wks.location}/QuantumEngine/vendor/stb_image"
IncludeDir["entt"] = "%{wks.location}/QuantumEngine/vendor/entt/include"
IncludeDir["yaml_cpp"] = "%{wks.location}/QuantumEngine/vendor/yaml-cpp/include"
IncludeDir["ImGuizmo"] = "%{wks.location}/QuantumEngine/vendor/ImGuizmo"

group "Dependencies"
	include "vendor/premake"
	include "QuantumEngine/vendor/GLFW"
	include "QuantumEngine/vendor/Glad"
	include "QuantumEngine/vendor/imgui"
	include "QuantumEngine/vendor/yaml-cpp"
group ""

include "QuantumEngine"
include "Sandbox"
include "Hazelnut"
