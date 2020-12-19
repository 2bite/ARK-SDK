#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVClimbPickHitCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FPVClimbPickHitCameraShake.FPVClimbPickHitCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UFPVClimbPickHitCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FPVClimbPickHitCameraShake.FPVClimbPickHitCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_FPVClimbPickHitCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
