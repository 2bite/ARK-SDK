#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_CaveCrab_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_CaveCrab.DinoCharacterStatusComponent_BP_CaveCrab_C
// 0x0001 (0x1091 - 0x1090)
class UDinoCharacterStatusComponent_BP_CaveCrab_C : public UDinoCharacterStatusComponent_BP_C
{
public:
	bool                                               AllowTorpidityIncrease;                                   // 0x1090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_CaveCrab.DinoCharacterStatusComponent_BP_CaveCrab_C");
		return ptr;
	}


	float BPAdjustStatusValueModification(TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* amount, class UClass** DamageTypeClass, bool* bManualModification);
	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_CaveCrab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
