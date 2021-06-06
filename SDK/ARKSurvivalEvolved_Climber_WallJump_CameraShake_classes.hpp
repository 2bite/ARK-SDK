#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Climber_WallJump_CameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Climber_WallJump_CameraShake.Climber_WallJump_CameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UClimber_WallJump_CameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Climber_WallJump_CameraShake.Climber_WallJump_CameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_Climber_WallJump_CameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
