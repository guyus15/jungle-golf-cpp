workspace "jungle-golf"
    architecture "x86_64"
    configurations { "Debug", "Release", "Dist" }

    project "game"
        kind "ConsoleApp"
        language "C++"
        cppdialect "C++20"

        targetdir "bin/%{cfg.buildcfg}"
        objdir "lib/%{cfg.buildcfg}"

        files {
            "src/**.cpp",
            "src/**.h"
        }

        filter "configurations:Debug"
            defines { "JGDEBUG" }
            symbols "On"

        filter "configurations:Release"
            defines { "JGRELEASE" }

        filter "configurations:Dist"
            defines { "JGDIST" }
            optimize "On"