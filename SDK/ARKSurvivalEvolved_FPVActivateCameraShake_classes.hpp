#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVActivateCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FPVActivateCameraShake.FPVActivateCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UFPVActivateCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FPVActivateCameraShake.FPVActivateCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_FPVActivateCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
