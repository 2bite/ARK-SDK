#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodElevatorPlatform_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_WoodElevatorPlatform_Large.EngramEntry_WoodElevatorPlatform_Large_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_WoodElevatorPlatform_Large_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_WoodElevatorPlatform_Large.EngramEntry_WoodElevatorPlatform_Large_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_WoodElevatorPlatform_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
