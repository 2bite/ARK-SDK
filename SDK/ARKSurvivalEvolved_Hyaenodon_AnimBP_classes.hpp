#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Hyaenodon_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Hyaenodon_AnimBP.Hyaenodon_AnimBP_C
// 0x0000 (0x1630 - 0x1630)
class UHyaenodon_AnimBP_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Hyaenodon_AnimBP.Hyaenodon_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Hyaenodon_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
