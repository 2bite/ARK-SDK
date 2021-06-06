#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TaxidermyBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_TaxidermyBase_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C");
		return ptr;
	}


	void BPInitializeInventory();
	bool BPPreventEquipItemType(TEnumAsByte<EPrimalEquipmentType>* equipmentType);
	void ExecuteUbergraph_PrimalInventoryBP_TaxidermyBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
