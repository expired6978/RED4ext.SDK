#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ink/InputHintHoldIndicationType.hpp>
#include <RED4ext/Types/generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct ShowCustomTooltip_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questShowCustomTooltip_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool setTooltip; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    LocalizationString text; // 40
    CString inputAction; // 68
    ink::InputHintHoldIndicationType holdIndicationType; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
};
RED4EXT_ASSERT_SIZE(ShowCustomTooltip_NodeType, 0x90);
} // namespace quest
} // namespace RED4ext
