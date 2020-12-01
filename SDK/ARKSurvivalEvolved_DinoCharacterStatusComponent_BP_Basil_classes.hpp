#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Basil_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Basil.DinoCharacterStatusComponent_BP_Basil_C
// 0x000C (0x1094 - 0x1088)
class UDinoCharacterStatusComponent_BP_Basil_C : public UDinoCharacterStatusComponent_BP_C
{
public:
	float                                              HealthMultiplierNearSurface;                              // 0x1088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthMultiplierInDeepWater;                              // 0x108C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromSurfaceToBeInShallowWater;                    // 0x1090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Basil.DinoCharacterStatusComponent_BP_Basil_C");
		return ptr;
	}


	float BPAdjustStatusValueModification(TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* amount, class UClass** DamageTypeClass, bool* bManualModification);
	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_Basil(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
