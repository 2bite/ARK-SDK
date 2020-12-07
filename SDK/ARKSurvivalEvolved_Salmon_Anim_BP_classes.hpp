#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Salmon_Anim_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Salmon_Anim_BP.Salmon_Anim_BP_C
// 0x0000 (0x1198 - 0x1198)
class USalmon_Anim_BP_C : public UDinoBlueprintBase_RootTransform_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Salmon_Anim_BP.Salmon_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_Salmon_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
