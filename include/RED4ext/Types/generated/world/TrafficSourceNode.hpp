#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/SplineNode.hpp>

namespace RED4ext
{
namespace world { 
struct TrafficSourceNode : world::SplineNode
{
    static constexpr const char* NAME = "worldTrafficSourceNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TrafficSourceNode, 0x70);
} // namespace world
} // namespace RED4ext
