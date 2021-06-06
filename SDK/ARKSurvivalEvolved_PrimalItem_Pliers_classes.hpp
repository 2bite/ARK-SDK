#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Pliers_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_Pliers.PrimalItem_Pliers_C
// 0x0024 (0x0B04 - 0x0AE0)
class UPrimalItem_Pliers_C : public UPrimalItem_GenericMisc_C
{
public:
	float                                              DurabilityLossForMaxRepair;                               // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AE4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              AllowRepairingForInventoryClasses;                        // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bFoundClass;                                              // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AF9(0x0003) MISSED OFFSET
	float                                              RepairToPercent;                                          // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepairSpeedMult;                                          // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Pliers.PrimalItem_Pliers_C");
		return ptr;
	}


	void BPUsedOntoItem(class UPrimalItem** DestinationItem, int* AdditionalData);
	bool BPSupportUseOntoItem(class UPrimalItem** DestinationItem);
	void ExecuteUbergraph_PrimalItem_Pliers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
