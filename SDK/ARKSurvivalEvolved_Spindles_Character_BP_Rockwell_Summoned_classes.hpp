#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spindles_Character_BP_Rockwell_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Spindles_Character_BP_Rockwell_Summoned.Spindles_Character_BP_Rockwell_Summoned_C
// 0x0000 (0x29B5 - 0x29B5)
class ASpindles_Character_BP_Rockwell_Summoned_C : public ASpindles_Character_BP_Rockwell_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Spindles_Character_BP_Rockwell_Summoned.Spindles_Character_BP_Rockwell_Summoned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Spindles_Character_BP_Rockwell_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
