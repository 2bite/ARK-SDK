#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RightClimbing_ImpactEffect_Leaves_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RightClimbing_ImpactEffect_Leaves.RightClimbing_ImpactEffect_Leaves_C
// 0x0000 (0x04E8 - 0x04E8)
class ARightClimbing_ImpactEffect_Leaves_C : public AClimbing_ImpactEffect_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RightClimbing_ImpactEffect_Leaves.RightClimbing_ImpactEffect_Leaves_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RightClimbing_ImpactEffect_Leaves(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
