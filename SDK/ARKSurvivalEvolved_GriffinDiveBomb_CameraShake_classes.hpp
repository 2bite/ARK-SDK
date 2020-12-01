#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GriffinDiveBomb_CameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GriffinDiveBomb_CameraShake.GriffinDiveBomb_CameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UGriffinDiveBomb_CameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GriffinDiveBomb_CameraShake.GriffinDiveBomb_CameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_GriffinDiveBomb_CameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
