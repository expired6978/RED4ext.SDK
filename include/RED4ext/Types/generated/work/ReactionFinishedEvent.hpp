#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace work { 
struct ReactionFinishedEvent : red::Event
{
    static constexpr const char* NAME = "workReactionFinishedEvent";
    static constexpr const char* ALIAS = "ReactionFinishedEvent";

};
RED4EXT_ASSERT_SIZE(ReactionFinishedEvent, 0x40);
} // namespace work
using ReactionFinishedEvent = work::ReactionFinishedEvent;
} // namespace RED4ext
