#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_GasBag_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_GasBag.DinoTamedInventoryComponent_GasBag_C
// 0x0000 (0x0538 - 0x0538)
class UDinoTamedInventoryComponent_GasBag_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_GasBag.DinoTamedInventoryComponent_GasBag_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_GasBag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
