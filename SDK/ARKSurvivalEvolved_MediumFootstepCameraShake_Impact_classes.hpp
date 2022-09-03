#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MediumFootstepCameraShake_Impact_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MediumFootstepCameraShake_Impact.MediumFootstepCameraShake_Impact_C
// 0x0000 (0x00B0 - 0x00B0)
class UMediumFootstepCameraShake_Impact_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MediumFootstepCameraShake_Impact.MediumFootstepCameraShake_Impact_C");
		return ptr;
	}


	void ExecuteUbergraph_MediumFootstepCameraShake_Impact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
