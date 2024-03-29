#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CactusUseHarvestComponent_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CactusUseHarvestComponent_Base.CactusUseHarvestComponent_Base_C
// 0x0008 (0x0258 - 0x0250)
class UCactusUseHarvestComponent_Base_C : public UUseHarvestComponent_Base_C
{
public:
	float                                              PlayerGiveWaterAmount;                                    // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerGiveWaterSpeed;                                     // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CactusUseHarvestComponent_Base.CactusUseHarvestComponent_Base_C");
		return ptr;
	}


	int BPCustomHarvestResource(class UPrimalInventoryComponent** invComp, int* NumToGive, class UClass** DamageTypeClass, class AActor** ToActor);
	void ExecuteUbergraph_CactusUseHarvestComponent_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
