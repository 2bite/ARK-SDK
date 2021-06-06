#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishMaxDash_CameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LionfishMaxDash_CameraShake.LionfishMaxDash_CameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class ULionfishMaxDash_CameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LionfishMaxDash_CameraShake.LionfishMaxDash_CameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_LionfishMaxDash_CameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
