#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/IGodModeSystem.hpp>

namespace RED4ext
{
namespace game { 
struct GodModeSystem : game::IGodModeSystem
{
    static constexpr const char* NAME = "gameGodModeSystem";
    static constexpr const char* ALIAS = "GodModeSystem";

    uint8_t unk58[0x1E0 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(GodModeSystem, 0x1E0);
} // namespace game
using GodModeSystem = game::GodModeSystem;
} // namespace RED4ext
