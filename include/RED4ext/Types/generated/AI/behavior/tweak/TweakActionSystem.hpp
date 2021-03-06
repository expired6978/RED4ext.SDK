#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak { 
struct TweakActionSystem : game::IGameSystem
{
    static constexpr const char* NAME = "AIbehaviortweakTweakActionSystem";
    static constexpr const char* ALIAS = "AITweakActionSystem";

    uint8_t unk48[0x3E0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TweakActionSystem, 0x3E0);
} // namespace AI::behavior::tweak
using AITweakActionSystem = AI::behavior::tweak::TweakActionSystem;
} // namespace RED4ext
