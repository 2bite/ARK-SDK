#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_RockDrake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_RockDrake.DinoTamedInventoryComponent_RockDrake_C
// 0x0000 (0x0590 - 0x0590)
class UDinoTamedInventoryComponent_RockDrake_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_RockDrake.DinoTamedInventoryComponent_RockDrake_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_RockDrake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
