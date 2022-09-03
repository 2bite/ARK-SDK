#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CompoundBowPullCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CompoundBowPullCameraShake.CompoundBowPullCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UCompoundBowPullCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CompoundBowPullCameraShake.CompoundBowPullCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_CompoundBowPullCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
