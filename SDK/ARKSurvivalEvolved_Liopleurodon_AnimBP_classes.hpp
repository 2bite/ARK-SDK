#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Liopleurodon_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Liopleurodon_AnimBP.Liopleurodon_AnimBP_C
// 0x0000 (0x1178 - 0x1178)
class ULiopleurodon_AnimBP_C : public UDinoBlueprintBase_RootTransform_Swimming_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Liopleurodon_AnimBP.Liopleurodon_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Liopleurodon_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
