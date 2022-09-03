#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Fjordhawk_Retrieval_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C
// 0x0000 (0x0590 - 0x0590)
class UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C");
		return ptr;
	}


	bool BPAllowAddInventoryItem(class UPrimalItem** Item, int* RequestedQuantity, bool* bOnlyAddAll);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif