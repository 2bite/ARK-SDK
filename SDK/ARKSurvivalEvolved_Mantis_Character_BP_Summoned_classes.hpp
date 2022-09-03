#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mantis_Character_BP_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mantis_Character_BP_Summoned.Mantis_Character_BP_Summoned_C
// 0x0000 (0x2628 - 0x2628)
class AMantis_Character_BP_Summoned_C : public AMantis_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mantis_Character_BP_Summoned.Mantis_Character_BP_Summoned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Mantis_Character_BP_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
