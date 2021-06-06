#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVMeleeHitCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FPVMeleeHitCameraShake.FPVMeleeHitCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UFPVMeleeHitCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FPVMeleeHitCameraShake.FPVMeleeHitCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_FPVMeleeHitCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
