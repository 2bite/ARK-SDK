#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GreenhouseDoor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_GreenhouseDoor.EngramEntry_GreenhouseDoor_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_GreenhouseDoor_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_GreenhouseDoor.EngramEntry_GreenhouseDoor_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_GreenhouseDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
