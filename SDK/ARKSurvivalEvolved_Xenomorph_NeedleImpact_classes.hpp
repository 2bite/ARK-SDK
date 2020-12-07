#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_NeedleImpact_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_NeedleImpact.Xenomorph_NeedleImpact_C
// 0x0000 (0x0518 - 0x0518)
class AXenomorph_NeedleImpact_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_NeedleImpact.Xenomorph_NeedleImpact_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Xenomorph_NeedleImpact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
