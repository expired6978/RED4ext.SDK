#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/quest/CustomQuestNotificationData.hpp>
#include <RED4ext/Types/generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct ShowCustomQuestNotification_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questShowCustomQuestNotification_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::CustomQuestNotificationData customQuestNotificationData; // 38
};
RED4EXT_ASSERT_SIZE(ShowCustomQuestNotification_NodeType, 0xA0);
} // namespace quest
} // namespace RED4ext
