#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TaxidermyBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_TaxidermyBase.Structure_TaxidermyBase_C
// 0x0030 (0x0E08 - 0x0DD8)
class AStructure_TaxidermyBase_C : public AStructureItemContainerBaseBP_C
{
public:
	class UStaticMeshComponent*                        Pedestal;                                                 // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_TaxidermyBase_C*          PrimalInventoryBP_TaxidermyBase_C1;                       // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     LocalSnapshot;                                            // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PoseIdx;                                                  // 0x0DF0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0DF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Extent;                                                   // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PedestalScale;                                            // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_TaxidermyBase.Structure_TaxidermyBase_C");
		return ptr;
	}


	void ApplyEquippedSnapshot();
	void OnRep_PoseIdx();
	void RefreshSnapshot();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void RemoveSnapshot();
	void ApplySnapshot(class UPrimalItem* Snapshot);
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ClientApplySnapshot();
	void ClientRemoveSnapshot();
	void ExecuteUbergraph_Structure_TaxidermyBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
