#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EarthquakeCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EarthquakeCameraShake.EarthquakeCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UEarthquakeCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EarthquakeCameraShake.EarthquakeCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_EarthquakeCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
