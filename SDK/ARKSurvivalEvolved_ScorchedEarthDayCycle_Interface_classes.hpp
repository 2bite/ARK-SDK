#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ScorchedEarthDayCycle_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UScorchedEarthDayCycle_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C");
		return ptr;
	}


	void GetIsElectricalStorm(bool* Return);
	void GetElectricalStormValues(TArray<class AActor*>* LocationRegions, int* CurrentRegion, float* Radius);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
