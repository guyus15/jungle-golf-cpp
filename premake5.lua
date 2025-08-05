workspace "jungle-golf"
    architecture "x86_64"
    configurations { "Debug", "Release", "Dist" }

    project "game"
        kind "ConsoleApp"
        language "C++"
        cppdialect "C++20"

        targetdir "bin/%{cfg.buildcfg}"
        objdir "libs/%{cfg.buildcfg}"

        files {
            "src/**.cpp",
            "src/**.h"
        }

        includedirs {
            "thirdparty/assimp/include"
        }

        links {
            "assimp"
        }

        filter "configurations:Debug"
            defines { "JGDEBUG" }
            symbols "On"

        filter "configurations:Release"
            defines { "JGRELEASE" }

        filter "configurations:Dist"
            defines { "JGDIST" }
            optimize "On"

include "thirdparty/assimp/premake5"