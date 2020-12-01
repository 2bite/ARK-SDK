#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternBird_Anim_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass LanternBird_Anim_BP.LanternBird_Anim_BP_C
// 0x0000 (0x1308 - 0x1308)
class ULanternBird_Anim_BP_C : public UDinoBlueprintBase_RootTransform_FlySwimming_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass LanternBird_Anim_BP.LanternBird_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_LanternBird_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
