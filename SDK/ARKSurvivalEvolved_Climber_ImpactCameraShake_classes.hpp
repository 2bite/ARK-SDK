#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Climber_ImpactCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Climber_ImpactCameraShake.Climber_ImpactCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UClimber_ImpactCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Climber_ImpactCameraShake.Climber_ImpactCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_Climber_ImpactCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
