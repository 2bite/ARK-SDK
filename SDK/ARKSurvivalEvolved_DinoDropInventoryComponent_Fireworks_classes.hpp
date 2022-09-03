#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Fireworks_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Fireworks.DinoDropInventoryComponent_Fireworks_C
// 0x0000 (0x0590 - 0x0590)
class UDinoDropInventoryComponent_Fireworks_C : public UDinoDropInventoryComponent_Carnivore_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Fireworks.DinoDropInventoryComponent_Fireworks_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Fireworks(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
