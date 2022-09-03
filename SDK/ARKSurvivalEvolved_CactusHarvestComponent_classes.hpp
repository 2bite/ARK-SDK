#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CactusHarvestComponent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CactusHarvestComponent.CactusHarvestComponent_C
// 0x000C (0x025C - 0x0250)
class UCactusHarvestComponent_C : public UAttackHarvestComponent_Base_C
{
public:
	float                                              PlayerGiveWaterAmount;                                    // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerGiveWaterSpeed;                                     // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MorellatopsGiveWaterAmount;                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CactusHarvestComponent.CactusHarvestComponent_C");
		return ptr;
	}


	int BPCustomHarvestResource(class UPrimalInventoryComponent** invComp, int* NumToGive, class UClass** DamageTypeClass, class AActor** ToActor);
	void ExecuteUbergraph_CactusHarvestComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
