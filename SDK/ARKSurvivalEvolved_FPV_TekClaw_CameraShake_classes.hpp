#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_TekClaw_CameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FPV_TekClaw_CameraShake.FPV_TekClaw_CameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UFPV_TekClaw_CameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FPV_TekClaw_CameraShake.FPV_TekClaw_CameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_TekClaw_CameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
