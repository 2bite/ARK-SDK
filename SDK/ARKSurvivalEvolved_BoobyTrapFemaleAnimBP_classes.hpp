#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoobyTrapFemaleAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BoobyTrapFemaleAnimBP.BoobyTrapFemaleAnimBP_C
// 0x0000 (0x37A5 - 0x37A5)
class UBoobyTrapFemaleAnimBP_C : public UTPV_Female_NoWeapon_AnimBlueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BoobyTrapFemaleAnimBP.BoobyTrapFemaleAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_BoobyTrapFemaleAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
