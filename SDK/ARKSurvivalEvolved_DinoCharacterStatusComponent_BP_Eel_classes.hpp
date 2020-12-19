#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Eel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Eel.DinoCharacterStatusComponent_BP_Eel_C
// 0x0004 (0x1094 - 0x1090)
class UDinoCharacterStatusComponent_BP_Eel_C : public UDinoCharacterStatusComponent_BP_C
{
public:
	float                                              HealthWhileInWaterRegenMultiplier;                        // 0x1090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Eel.DinoCharacterStatusComponent_BP_Eel_C");
		return ptr;
	}


	float BPAdjustStatusValueModification(TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* amount, class UClass** DamageTypeClass, bool* bManualModification);
	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_Eel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
