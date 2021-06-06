#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_IndustrialGrinder_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C
// 0x003C (0x0E4C - 0x0E10)
class AStorageBox_IndustrialGrinder_C : public ABaseFuelBurner_GasOnly_C
{
public:
	class UPrimalInventoryBP_IndustrialGrinder_C*      PrimalInventoryBP_IndustrialGrinder_C1;                   // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              GrindGiveItemFrom;                                        // 0x0E20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              GrindGiveItemTo;                                          // 0x0E30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxQuantityToGrind;                                       // 0x0E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxItemsToGivePerGrind;                                   // 0x0E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrindGiveItemsPercent;                                    // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C");
		return ptr;
	}


	void GrindAllItems(class APlayerController* ForPC);
	void IsValidForGrindingAll(bool* IsValid);
	void BPPreGetMultiUseEntries(class APlayerController** ForPC);
	void STATIC_HasCraftingRequirementsGreaterThanOne(class UPrimalItem* InItem, bool* TRUE);
	void GetReplacementItem(class UClass* InItemClass, class UClass** OutItemClass);
	void IsValidGrindingItem(class UPrimalItem* ItemToCheck, bool* IsValid);
	void GrindItem(class UPrimalItem* ItemToGrind, class AShooterPlayerController* ForPC, bool grindStack, bool MuteSound);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void ExecuteUbergraph_StorageBox_IndustrialGrinder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
