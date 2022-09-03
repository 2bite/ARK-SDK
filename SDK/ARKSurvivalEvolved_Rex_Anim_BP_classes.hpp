#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rex_Anim_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Rex_Anim_BP.Rex_Anim_BP_C
// 0x0000 (0x133E - 0x133E)
class URex_Anim_BP_C : public UDinoBlueprintBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Rex_Anim_BP.Rex_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_Rex_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
