#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/IInventoryManager.hpp>

namespace RED4ext
{
namespace game { 
struct InventoryManager : game::IInventoryManager
{
    static constexpr const char* NAME = "gameInventoryManager";
    static constexpr const char* ALIAS = "InventoryManager";

    uint8_t unk48[0xC0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(InventoryManager, 0xC0);
} // namespace game
using InventoryManager = game::InventoryManager;
} // namespace RED4ext
