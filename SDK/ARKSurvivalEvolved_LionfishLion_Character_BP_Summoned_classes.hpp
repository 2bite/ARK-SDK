#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishLion_Character_BP_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C
// 0x0000 (0x4638 - 0x4638)
class ALionfishLion_Character_BP_Summoned_C : public ALionfishLion_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C");
		return ptr;
	}


	bool BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label);
	void UserConstructionScript();
	void ExecuteUbergraph_LionfishLion_Character_BP_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
