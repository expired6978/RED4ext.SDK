#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Types/generated/game/ui/CharacterCustomizationOption.hpp>

namespace RED4ext
{
namespace game::ui
{
    struct CharacterCustomizationInfo;
    struct MorphInfo;
    struct AppearanceInfo;
    struct SwitcherInfo;

    struct CharacterCustomizationOptionImpl : CharacterCustomizationOption
    {
        virtual void GetMorphInfo(Handle<MorphInfo>& info) = 0;           // 110
        virtual void GetAppearanceInfo(Handle<AppearanceInfo>& info) = 0; // 118
        virtual void GetSwitcherInfo(Handle<SwitcherInfo>& info) = 0;     // 120
        virtual void SetCurrentIndex(int32_t curIndex) = 0;               // 128
    };
    RED4EXT_ASSERT_SIZE(CharacterCustomizationOptionImpl, 0x60);
} // namespace game::ui
} // namespace RED4ext
