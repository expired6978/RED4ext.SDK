#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/AI/CombatRelatedCommand.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace AI { 
struct InjectLookatTargetCommand : AI::CombatRelatedCommand
{
    static constexpr const char* NAME = "AIInjectLookatTargetCommand";
    static constexpr const char* ALIAS = NAME;

    NodeRef targetNodeRef; // 68
    game::EntityReference targetPuppetRef; // 70
    float duration; // A8
    uint8_t unkAC[0xB0 - 0xAC]; // AC
};
RED4EXT_ASSERT_SIZE(InjectLookatTargetCommand, 0xB0);
} // namespace AI
} // namespace RED4ext
