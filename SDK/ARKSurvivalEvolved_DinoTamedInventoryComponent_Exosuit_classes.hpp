#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Exosuit_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Exosuit.DinoTamedInventoryComponent_Exosuit_C
// 0x0000 (0x0590 - 0x0590)
class UDinoTamedInventoryComponent_Exosuit_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Exosuit.DinoTamedInventoryComponent_Exosuit_C");
		return ptr;
	}


	void BPPreInitDefaultInventory();
	void ExecuteUbergraph_DinoTamedInventoryComponent_Exosuit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
