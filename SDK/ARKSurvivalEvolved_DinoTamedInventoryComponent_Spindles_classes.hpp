#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Spindles_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Spindles.DinoTamedInventoryComponent_Spindles_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Spindles_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Spindles.DinoTamedInventoryComponent_Spindles_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Spindles(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
