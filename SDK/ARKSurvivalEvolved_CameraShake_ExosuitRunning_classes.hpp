#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CameraShake_ExosuitRunning_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraShake_ExosuitRunning.CameraShake_ExosuitRunning_C
// 0x0000 (0x00B0 - 0x00B0)
class UCameraShake_ExosuitRunning_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CameraShake_ExosuitRunning.CameraShake_ExosuitRunning_C");
		return ptr;
	}


	void ExecuteUbergraph_CameraShake_ExosuitRunning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
