#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVMeleeHitCameraShakeMobile_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FPVMeleeHitCameraShakeMobile.FPVMeleeHitCameraShakeMobile_C
// 0x0000 (0x00B0 - 0x00B0)
class UFPVMeleeHitCameraShakeMobile_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FPVMeleeHitCameraShakeMobile.FPVMeleeHitCameraShakeMobile_C");
		return ptr;
	}


	void ExecuteUbergraph_FPVMeleeHitCameraShakeMobile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
