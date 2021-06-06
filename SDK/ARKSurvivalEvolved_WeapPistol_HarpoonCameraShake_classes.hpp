#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPistol_HarpoonCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapPistol_HarpoonCameraShake.WeapPistol_HarpoonCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UWeapPistol_HarpoonCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapPistol_HarpoonCameraShake.WeapPistol_HarpoonCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_WeapPistol_HarpoonCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
