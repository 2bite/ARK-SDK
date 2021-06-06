#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_VehicleWood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_VehicleWood.DinoSettings_VehicleWood_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_VehicleWood_C : public UPrimalDinoSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_VehicleWood.DinoSettings_VehicleWood_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_VehicleWood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
