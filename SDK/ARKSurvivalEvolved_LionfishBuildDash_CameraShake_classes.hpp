#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishBuildDash_CameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LionfishBuildDash_CameraShake.LionfishBuildDash_CameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class ULionfishBuildDash_CameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LionfishBuildDash_CameraShake.LionfishBuildDash_CameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_LionfishBuildDash_CameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
