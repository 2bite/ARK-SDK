#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dilo_Character_BP_Rockwell_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dilo_Character_BP_Rockwell_Summoned.Dilo_Character_BP_Rockwell_Summoned_C
// 0x0000 (0x2290 - 0x2290)
class ADilo_Character_BP_Rockwell_Summoned_C : public ADilo_Character_BP_Rockwell_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dilo_Character_BP_Rockwell_Summoned.Dilo_Character_BP_Rockwell_Summoned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dilo_Character_BP_Rockwell_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
