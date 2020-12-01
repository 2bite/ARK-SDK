#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekRifle_FireCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapTekRifle_FireCameraShake.WeapTekRifle_FireCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UWeapTekRifle_FireCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekRifle_FireCameraShake.WeapTekRifle_FireCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_WeapTekRifle_FireCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
