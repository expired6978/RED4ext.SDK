#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Box.hpp>
#include <RED4ext/Types/generated/tools/IMessageLocation.hpp>

namespace RED4ext
{
namespace tools { 
struct MessageLocation_BoundingBox : tools::IMessageLocation
{
    static constexpr const char* NAME = "toolsMessageLocation_BoundingBox";
    static constexpr const char* ALIAS = NAME;

    MessageResourcePath resourcePath; // 30
    uint8_t unk38[0x40 - 0x38]; // 38
    Box box; // 40
};
RED4EXT_ASSERT_SIZE(MessageLocation_BoundingBox, 0x60);
} // namespace tools
} // namespace RED4ext
