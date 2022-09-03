#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sarco_Character_BP_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sarco_Character_BP_Summoned.Sarco_Character_BP_Summoned_C
// 0x0000 (0x276F - 0x276F)
class ASarco_Character_BP_Summoned_C : public ASarco_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sarco_Character_BP_Summoned.Sarco_Character_BP_Summoned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Sarco_Character_BP_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
