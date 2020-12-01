#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Angler_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Angler.DinoTamedInventoryComponent_Angler_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Angler_C : public UDinoTamedInventoryComponent_BP_NoSaddle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Angler.DinoTamedInventoryComponent_Angler_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Angler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
