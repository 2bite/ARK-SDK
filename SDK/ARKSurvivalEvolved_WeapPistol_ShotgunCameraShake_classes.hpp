#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPistol_ShotgunCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapPistol_ShotgunCameraShake.WeapPistol_ShotgunCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UWeapPistol_ShotgunCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapPistol_ShotgunCameraShake.WeapPistol_ShotgunCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_WeapPistol_ShotgunCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
