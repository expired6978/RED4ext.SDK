#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct OnInventoryEmptyEvent : red::Event
{
    static constexpr const char* NAME = "gameOnInventoryEmptyEvent";
    static constexpr const char* ALIAS = "OnInventoryEmptyEvent";

};
RED4EXT_ASSERT_SIZE(OnInventoryEmptyEvent, 0x40);
} // namespace game
using OnInventoryEmptyEvent = game::OnInventoryEmptyEvent;
} // namespace RED4ext
