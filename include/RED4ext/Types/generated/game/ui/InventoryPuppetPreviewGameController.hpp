#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/PuppetPreviewGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct InventoryPuppetPreviewGameController : game::ui::PuppetPreviewGameController
{
    static constexpr const char* NAME = "gameuiInventoryPuppetPreviewGameController";
    static constexpr const char* ALIAS = "inkInventoryPuppetPreviewGameController";

};
RED4EXT_ASSERT_SIZE(InventoryPuppetPreviewGameController, 0x1B0);
} // namespace game::ui
using inkInventoryPuppetPreviewGameController = game::ui::InventoryPuppetPreviewGameController;
} // namespace RED4ext
