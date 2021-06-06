#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Manta_Anim_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Manta_Anim_BP.Manta_Anim_BP_C
// 0x0000 (0x1178 - 0x1178)
class UManta_Anim_BP_C : public UDinoBlueprintBase_RootTransform_Swimming_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Manta_Anim_BP.Manta_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_Manta_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
