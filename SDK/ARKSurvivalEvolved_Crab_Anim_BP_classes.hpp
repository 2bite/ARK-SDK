#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Crab_Anim_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Crab_Anim_BP.Crab_Anim_BP_C
// 0x0000 (0x1990 - 0x1990)
class UCrab_Anim_BP_C : public UDinoBlueprintBase_RootBoneName_Crab_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Crab_Anim_BP.Crab_Anim_BP_C");
		return ptr;
	}


	void UpdateGrabIdle(class APrimalCharacter** OwningChar);
	void ExecuteUbergraph_Crab_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
