#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MediumFootstepCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MediumFootstepCameraShake.MediumFootstepCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UMediumFootstepCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MediumFootstepCameraShake.MediumFootstepCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_MediumFootstepCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
