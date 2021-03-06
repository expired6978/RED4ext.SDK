#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ITransactionSystem.hpp>

namespace RED4ext
{
namespace game { 
struct TransactionSystem : game::ITransactionSystem
{
    static constexpr const char* NAME = "gameTransactionSystem";
    static constexpr const char* ALIAS = "TransactionSystem";

    uint8_t unk48[0xD0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TransactionSystem, 0xD0);
} // namespace game
using TransactionSystem = game::TransactionSystem;
} // namespace RED4ext
