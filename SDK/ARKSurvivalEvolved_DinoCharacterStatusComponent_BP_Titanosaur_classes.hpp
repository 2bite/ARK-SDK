#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Titanosaur_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Titanosaur.DinoCharacterStatusComponent_BP_Titanosaur_C
// 0x0001 (0x1091 - 0x1090)
class UDinoCharacterStatusComponent_BP_Titanosaur_C : public UDinoCharacterStatusComponent_BP_C
{
public:
	bool                                               bAllowTorpidityIncrease;                                  // 0x1090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Titanosaur.DinoCharacterStatusComponent_BP_Titanosaur_C");
		return ptr;
	}


	float BPAdjustStatusValueModification(TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* amount, class UClass** DamageTypeClass, bool* bManualModification);
	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_Titanosaur(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
