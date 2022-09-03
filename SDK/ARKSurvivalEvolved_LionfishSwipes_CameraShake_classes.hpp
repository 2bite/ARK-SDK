#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishSwipes_CameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LionfishSwipes_CameraShake.LionfishSwipes_CameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class ULionfishSwipes_CameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LionfishSwipes_CameraShake.LionfishSwipes_CameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_LionfishSwipes_CameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
