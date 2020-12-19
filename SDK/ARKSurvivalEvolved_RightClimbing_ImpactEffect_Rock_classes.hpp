#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RightClimbing_ImpactEffect_Rock_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RightClimbing_ImpactEffect_Rock.RightClimbing_ImpactEffect_Rock_C
// 0x0000 (0x04E8 - 0x04E8)
class ARightClimbing_ImpactEffect_Rock_C : public AClimbing_ImpactEffect_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RightClimbing_ImpactEffect_Rock.RightClimbing_ImpactEffect_Rock_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RightClimbing_ImpactEffect_Rock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
