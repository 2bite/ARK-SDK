#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_MilkGlider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_MilkGlider.DinoCharacterStatusComponent_BP_MilkGlider_C
// 0x0000 (0x1090 - 0x1090)
class UDinoCharacterStatusComponent_BP_MilkGlider_C : public UDinoCharacterStatusComponent_BP_FlyerRide_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_MilkGlider.DinoCharacterStatusComponent_BP_MilkGlider_C");
		return ptr;
	}


	float BPAdjustStatusValueModification(TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* amount, class UClass** DamageTypeClass, bool* bManualModification);
	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_MilkGlider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
