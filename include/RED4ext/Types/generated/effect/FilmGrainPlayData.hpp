#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/effect/PlacedTrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect { 
struct FilmGrainPlayData : effect::PlacedTrackItemPlayData
{
    static constexpr const char* NAME = "effectFilmGrainPlayData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(FilmGrainPlayData, 0x38);
} // namespace effect
} // namespace RED4ext
