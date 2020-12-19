#pragma once

// ARKSurvivalEvolved (320.18) SDK

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
// 0x0010 (0x10A0 - 0x1090)
class UDinoCharacterStatusComponent_BP_Basil_C : public UDinoCharacterStatusComponent_BP_C
{
public:
	float                                              HealthMultiplierNearSurface;                              // 0x1090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthMultiplierInDeepWater;                              // 0x1094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromSurfaceToBeInShallowWater;                    // 0x1098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddedDepthBeforeHealthLoss;                               // 0x109C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
