#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/FullScreenLayer.hpp>

namespace RED4ext
{
namespace ink { 
struct VideoLayer : ink::FullScreenLayer
{
    static constexpr const char* NAME = "inkVideoLayer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VideoLayer, 0x148);
} // namespace ink
} // namespace RED4ext
