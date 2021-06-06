#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Gasoline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemResource_Gasoline_C : public UPrimalItemResource_Craftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C");
		return ptr;
	}


	void STATIC_CheckForGasolineData(class UPrimalItem* DestinationItem, bool* SupportsDragOn);
	void RefillGasoline(class UPrimalItem* DestinationItem);
	void BPUsedOntoItem(class UPrimalItem** DestinationItem, int* AdditionalData);
	bool BPSupportUseOntoItem(class UPrimalItem** DestinationItem);
	void ExecuteUbergraph_PrimalItemResource_Gasoline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
