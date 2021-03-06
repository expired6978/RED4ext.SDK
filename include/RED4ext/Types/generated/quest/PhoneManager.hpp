#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/quest/IPhoneManager.hpp>

namespace RED4ext
{
namespace quest { 
struct PhoneManager : quest::IPhoneManager
{
    static constexpr const char* NAME = "questPhoneManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PhoneManager, 0x78);
} // namespace quest
} // namespace RED4ext
