#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChargeLanternCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChargeLanternCameraShake.ChargeLanternCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UChargeLanternCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChargeLanternCameraShake.ChargeLanternCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_ChargeLanternCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
