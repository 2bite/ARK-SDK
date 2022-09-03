#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Direwolf_Character_BP_Eden_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Direwolf_Character_BP_Eden_Summoned.Direwolf_Character_BP_Eden_Summoned_C
// 0x0000 (0x2450 - 0x2450)
class ADirewolf_Character_BP_Eden_Summoned_C : public ADirewolf_Character_BP_Eden_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Direwolf_Character_BP_Eden_Summoned.Direwolf_Character_BP_Eden_Summoned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Direwolf_Character_BP_Eden_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
