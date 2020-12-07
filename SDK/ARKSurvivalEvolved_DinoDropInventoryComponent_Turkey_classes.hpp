#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Turkey_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Turkey.DinoDropInventoryComponent_Turkey_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_Turkey_C : public UDinoDropInventoryComponent_Carnivore_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Turkey.DinoDropInventoryComponent_Turkey_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Turkey(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
