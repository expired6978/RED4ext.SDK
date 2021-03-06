#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/quest/ActorOverrideEntry.hpp>
#include <RED4ext/Types/generated/quest/IAudioNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct AnimationEventsOverrideNode : quest::IAudioNodeType
{
    static constexpr const char* NAME = "questAnimationEventsOverrideNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::ActorOverrideEntry> perActorOverrides; // 40
    CName GlobalMetadata; // 50
    uint8_t unk58[0x78 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AnimationEventsOverrideNode, 0x78);
} // namespace quest
} // namespace RED4ext
