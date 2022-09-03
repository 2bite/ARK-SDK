#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasBags_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GasBags_Interface.GasBags_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UGasBags_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GasBags_Interface.GasBags_Interface_C");
		return ptr;
	}


	void ModifyInflationValue(float Delta, bool DeltaIsPercent, bool Subtract, float* NewInflationPercent);
	void GetInflationValue(float* Value, float* Percent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
