#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldBuff_Mutagen_SpawnDelay_Down_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C
// 0x0010 (0x0040 - 0x0030)
class UWorldBuff_Mutagen_SpawnDelay_Down_C : public UPrimalWorldBuffCustomImplement
{
public:
	struct FName                                       ActorListTag;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnDelayModifierToApply;                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastSpawnDelayModifier;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C");
		return ptr;
	}


	void PreDeconstruction();
	void PostConstruction();
	void ExecuteUbergraph_WorldBuff_Mutagen_SpawnDelay_Down(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
