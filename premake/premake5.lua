require("premake", ">=5.0.0-alpha15")

-- Disable premake.downloadModule, see https://github.com/premake/premake-core/issues/1381.
premake.downloadModule = function(modname, versions)
    return false
end

red4ext = require("extensions/red4ext")

workspace("RED4ext.SDK")
    location("project")

    architecture("x86_64")
    configurations({ "Debug", "Release" })
    characterset("Unicode")
    symbols("Full")
    systemversion("latest")

    filter({ "configurations:Release" })
        optimize("On")

    filter({})

    project("RED4ext.SDK")
        targetname("RED4ext.SDK")
        targetdir(red4ext.paths.build())

        kind("StaticLib")
        language("C++")
        cppdialect("C++17")

        defines(
        {
            "WINVER=0x0601",
            "_WIN32_WINNT=0x0601",
            "WIN32_LEAN_AND_MEAN",
            "_CRT_SECURE_NO_WARNINGS",
            "RED4EXT_STATIC_LIB"
        })

        includedirs(
        {
            red4ext.paths.include()
        })

        files(
        {
            red4ext.paths.src("**.cpp"),
            red4ext.paths.include("RED4ext", "**.hpp")
        })

        vpaths(
        {
            ["*"] = {
                red4ext.paths.src(),
                red4ext.paths.include("RED4ext")
            }
        })