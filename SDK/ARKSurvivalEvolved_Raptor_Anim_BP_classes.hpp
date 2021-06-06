#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Raptor_Anim_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Raptor_Anim_BP.Raptor_Anim_BP_C
// 0x0000 (0x133E - 0x133E)
class URaptor_Anim_BP_C : public UDinoBlueprintBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Raptor_Anim_BP.Raptor_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_Raptor_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
