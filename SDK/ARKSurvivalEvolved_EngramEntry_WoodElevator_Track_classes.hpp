#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodElevator_Track_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_WoodElevator_Track.EngramEntry_WoodElevator_Track_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_WoodElevator_Track_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_WoodElevator_Track.EngramEntry_WoodElevator_Track_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_WoodElevator_Track(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
