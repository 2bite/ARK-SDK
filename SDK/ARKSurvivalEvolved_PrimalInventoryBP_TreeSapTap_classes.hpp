#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TreeSapTap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C
// 0x000C (0x059C - 0x0590)
class UPrimalInventoryBP_TreeSapTap_C : public UPrimalInventoryComponent
{
public:
	double                                             LastGaveSapTime;                                          // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              GiveSapInterval;                                          // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C");
		return ptr;
	}


	void FindNearbySapTaps(int* NumOutTaps);
	void BPInventoryRefresh();
	void ExecuteUbergraph_PrimalInventoryBP_TreeSapTap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
