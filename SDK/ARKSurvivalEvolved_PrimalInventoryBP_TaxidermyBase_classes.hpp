#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0001 (0x0591 - 0x0590)
class UPrimalInventoryBP_TaxidermyBase_C : public UPrimalInventoryComponent
{
public:
	bool                                               bOnlyHumanDermisPermitted;                                // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C");
		return ptr;
	}


	bool BPPreventEquipItem(class UPrimalItem** theItem);
	bool STATIC_BPPreventEquipItemType(TEnumAsByte<EPrimalEquipmentType>* equipmentType);
	void ExecuteUbergraph_PrimalInventoryBP_TaxidermyBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
