#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSpear_FireCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSpear_FireCameraShake.WeapSpear_FireCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UWeapSpear_FireCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSpear_FireCameraShake.WeapSpear_FireCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_WeapSpear_FireCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
