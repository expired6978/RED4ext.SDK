#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/effect/PlacedTrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect { 
struct SoundPlayData : effect::PlacedTrackItemPlayData
{
    static constexpr const char* NAME = "effectSoundPlayData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x58 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(SoundPlayData, 0x58);
} // namespace effect
} // namespace RED4ext
