#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChargedTekCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChargedTekCameraShake.ChargedTekCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UChargedTekCameraShake_C : public UBowPullCameraShake_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChargedTekCameraShake.ChargedTekCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_ChargedTekCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
