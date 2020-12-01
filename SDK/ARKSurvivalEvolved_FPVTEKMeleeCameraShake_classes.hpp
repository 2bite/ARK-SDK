#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVTEKMeleeCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FPVTEKMeleeCameraShake.FPVTEKMeleeCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UFPVTEKMeleeCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FPVTEKMeleeCameraShake.FPVTEKMeleeCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_FPVTEKMeleeCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
