#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_C4Female_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass C4Female_AnimBP.C4Female_AnimBP_C
// 0x0000 (0x3A14 - 0x3A14)
class UC4Female_AnimBP_C : public UTPV_Female_NoWeapon_AnimBlueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass C4Female_AnimBP.C4Female_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_C4Female_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
