#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/scn/ActorId.hpp>
#include <RED4ext/Types/generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace anim { struct AnimFeature; }

namespace scn::events { 
struct SetAnimFeatureEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsSetAnimFeatureEvent";
    static constexpr const char* ALIAS = NAME;

    scn::ActorId actorId; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    CName animFeatureName; // 60
    Handle<anim::AnimFeature> animFeature; // 68
};
RED4EXT_ASSERT_SIZE(SetAnimFeatureEvent, 0x78);
} // namespace scn::events
} // namespace RED4ext
