#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSniper_FireCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSniper_FireCameraShake.WeapSniper_FireCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UWeapSniper_FireCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSniper_FireCameraShake.WeapSniper_FireCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_WeapSniper_FireCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
