workspace "Hazel"
    arcitecture "x64"

configurations:
{
    "Debug",
    "Release",
    "Dist"
}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Hazel"
    location "Hazel"
    kind "SharedLib"
    language "C++"

targetdir ("bin/" .. outputdir .. "/%{prj.name}")
objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

files
{
   "%{prj.name}/src/**.hpp"
   "%{prj.name}/src/**.cpp"
}

include
{
    "%{prj.name}vendor/spdlog/include"
}

filter "system:windows"
    cppdialect "C++17"
    staticruntime "On"
    systemversion "latest"

defines
{
    "HZ_PLATFORM_WINDOWS",
    "HZ_BUILD_DLL",
}

postbuildcommands
{
({COPY} "%{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox" )
}

filter "configurations:Debug"
    defines "HZ_DEBUG",
    symbols "On",
