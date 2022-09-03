#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_ClawHit_CameraShakeMobile_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FPV_ClawHit_CameraShakeMobile.FPV_ClawHit_CameraShakeMobile_C
// 0x0000 (0x00B0 - 0x00B0)
class UFPV_ClawHit_CameraShakeMobile_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FPV_ClawHit_CameraShakeMobile.FPV_ClawHit_CameraShakeMobile_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_ClawHit_CameraShakeMobile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
