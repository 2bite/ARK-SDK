#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CameraShake_ExosuitLanding_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraShake_ExosuitLanding.CameraShake_ExosuitLanding_C
// 0x0000 (0x00B0 - 0x00B0)
class UCameraShake_ExosuitLanding_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CameraShake_ExosuitLanding.CameraShake_ExosuitLanding_C");
		return ptr;
	}


	void ExecuteUbergraph_CameraShake_ExosuitLanding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
