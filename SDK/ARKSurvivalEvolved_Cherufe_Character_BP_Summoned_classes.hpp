#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cherufe_Character_BP_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cherufe_Character_BP_Summoned.Cherufe_Character_BP_Summoned_C
// 0x0000 (0x2B88 - 0x2B88)
class ACherufe_Character_BP_Summoned_C : public ACherufe_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cherufe_Character_BP_Summoned.Cherufe_Character_BP_Summoned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Cherufe_Character_BP_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
