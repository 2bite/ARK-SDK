#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Andrewsarchus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Andrewsarchus.DinoCharacterStatusComponent_BP_Andrewsarchus_C
// 0x0000 (0x1090 - 0x1090)
class UDinoCharacterStatusComponent_BP_Andrewsarchus_C : public UDinoCharacterStatusComponent_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Andrewsarchus.DinoCharacterStatusComponent_BP_Andrewsarchus_C");
		return ptr;
	}


	float STATIC_BPAdjustStatusValueModification(TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* amount, class UClass** DamageTypeClass, bool* bManualModification);
	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_Andrewsarchus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
