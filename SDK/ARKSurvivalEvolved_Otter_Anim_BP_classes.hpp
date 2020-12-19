#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Otter_Anim_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Otter_Anim_BP.Otter_Anim_BP_C
// 0x0000 (0x1A20 - 0x1A20)
class UOtter_Anim_BP_C : public UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Otter_Anim_BP.Otter_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_Otter_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
