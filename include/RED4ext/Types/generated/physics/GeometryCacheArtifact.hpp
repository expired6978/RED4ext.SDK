#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/CResource.hpp>
#include <RED4ext/Types/generated/physics/CacheEntry.hpp>
#include <RED4ext/Types/generated/physics/CacheKey.hpp>

namespace RED4ext
{
namespace physics { 
struct GeometryCacheArtifact : CResource
{
    static constexpr const char* NAME = "physicsGeometryCacheArtifact";
    static constexpr const char* ALIAS = NAME;

    DynArray<DeferredDataBuffer> bufferTable; // 40
    DynArray<physics::CacheKey> entryKeys; // 50
    DynArray<physics::CacheEntry> entryTable; // 60
};
RED4EXT_ASSERT_SIZE(GeometryCacheArtifact, 0x70);
} // namespace physics
} // namespace RED4ext
