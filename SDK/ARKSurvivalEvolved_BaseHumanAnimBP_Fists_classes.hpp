#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseHumanAnimBP_Fists_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C
// 0x0000 (0x37A5 - 0x37A5)
class UBaseHumanAnimBP_Fists_C : public UBaseHumanAnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C");
		return ptr;
	}


	void ExecuteUbergraph_BaseHumanAnimBP_Fists(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
