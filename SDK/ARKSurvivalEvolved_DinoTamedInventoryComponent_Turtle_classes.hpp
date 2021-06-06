#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Turtle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Turtle.DinoTamedInventoryComponent_Turtle_C
// 0x0000 (0x0590 - 0x0590)
class UDinoTamedInventoryComponent_Turtle_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Turtle.DinoTamedInventoryComponent_Turtle_C");
		return ptr;
	}


	float BPOverrideItemMinimumUseInterval(class UPrimalItem** theItem);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Turtle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
