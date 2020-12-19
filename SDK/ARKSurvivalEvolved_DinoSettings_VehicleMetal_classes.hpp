#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_VehicleMetal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_VehicleMetal.DinoSettings_VehicleMetal_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_VehicleMetal_C : public UPrimalDinoSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_VehicleMetal.DinoSettings_VehicleMetal_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_VehicleMetal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
