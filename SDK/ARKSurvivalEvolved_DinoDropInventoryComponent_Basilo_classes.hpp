#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Basilo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Basilo.DinoDropInventoryComponent_Basilo_C
// 0x0000 (0x0538 - 0x0538)
class UDinoDropInventoryComponent_Basilo_C : public UDinoDropInventoryComponent_Carnivore_Large_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Basilo.DinoDropInventoryComponent_Basilo_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Basilo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif