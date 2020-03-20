workspace "Composer"
	architecture "x64"
	startproject "Sandbox"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"


project "Composer"
	location "Composer"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/**.h",
		"%{prj.name}/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/source/composer/"
	}

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Debug"
		defines "COMPOSER_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "COMPOSER_RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		defines "COMPOSER_DIST"
		runtime "Release"
		optimize "on"
