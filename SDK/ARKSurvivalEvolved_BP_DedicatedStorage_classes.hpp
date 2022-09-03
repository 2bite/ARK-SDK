#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_DedicatedStorage_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DedicatedStorage.BP_DedicatedStorage_C
// 0x0161 (0x0F71 - 0x0E10)
class ABP_DedicatedStorage_C : public AStructureItemContainerBaseBP_C
{
public:
	class UStaticMeshComponent*                        DisplayMesh6;                                             // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender6;                                              // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             BotScene;                                                 // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DisplayMesh5;                                             // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender5;                                              // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TopScene;                                                 // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TopAndBotScene;                                           // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        RangeMesh;                                                // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DisplayMesh4;                                             // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DisplayMesh3;                                             // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DisplayMesh2;                                             // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DisplayMesh1;                                             // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DisplayMeshes;                                            // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender4;                                              // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender3;                                              // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender2;                                              // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender1;                                              // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             NumberTextRenders;                                        // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BottomMesh;                                               // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TopMesh;                                                  // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SideMesh4;                                                // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SideMesh3;                                                // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SideMesh2;                                                // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SideMesh1;                                                // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SideMeshes;                                               // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventory_DedicatedStorage_C*         PrimalInventory_DedicatedStorage_C1;                      // 0x0ED8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableSnaps;                                             // 0x0EE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0EE1(0x0007) MISSED OFFSET
	class UClass*                                      SelectedResourceClass;                                    // 0x0EE8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                ResourceCount;                                            // 0x0EF0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              RangeMeshRadius;                                          // 0x0EF4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ItemHUDTextColor;                                         // 0x0EF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsingWithdrawPriority;                                    // 0x0F08(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               HideTopAndBottom;                                         // 0x0F09(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0F0A(0x0002) MISSED OFFSET
	float                                              TopAndBottomRotation;                                     // 0x0F0C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                SavedDedicatedStorageVersion;                             // 0x0F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bIsUpdateItemCountTimerSet;                               // 0x0F14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0F15(0x0003) MISSED OFFSET
	int                                                MaxResourceStacks;                                        // 0x0F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SavedItemVersion;                                         // 0x0F1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x0F1D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0F1E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0F1F(0x0001) MISSED OFFSET
	float                                              K2Node_Event_KillingDamage;                               // 0x0F20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0F24(0x0004) MISSED OFFSET
	struct FDamageEvent                                K2Node_Event_DamageEvent;                                 // 0x0F28(0x0020) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AController*                                 K2Node_Event_Killer;                                      // 0x0F48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x0F50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_Event_PlayerController;                            // 0x0F58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_Event_ItemType;                                    // 0x0F60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem*                                 K2Node_Event_NewlyPickedUpItem;                           // 0x0F68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bIsQuickPickup;                              // 0x0F70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DedicatedStorage.BP_DedicatedStorage_C");
		return ptr;
	}


	void WithdrawAmount(class APlayerController* PC, int amount);
	void BPOnTransferAll(class UPrimalInventoryComponent** toInventory);
	void UpdateItemCount();
	void BPPostLoadedFromSaveGame();
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void AddTopAndBottomMenuEntries(TArray<struct FMultiUseEntry>* Entries);
	void OnRep_TopAndBottomRotation();
	void OnRep_HideTopAndBottom();
	bool CanMakeDeposit(class APlayerController* PC, class APrimalCharacter* Character);
	void IsPlayerControllerValid(class APlayerController* thePC, bool* bValid);
	void DropAllInventoryOnGround();
	bool BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed, bool* bForInventoryOnly);
	void GetResourceStackSize(int* StackSize);
	void BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser);
	void FillInventory();
	void BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	void IsFuel(class UPrimalInventoryComponent* inventory, class UClass* ItemClass, bool* Fuel);
	void DropRestrictedItems();
	void BPUnstasis();
	void HandleConsolidate(class APlayerController* PC);
	void HandleWithdraw(class APlayerController* PC);
	void HandleDeposit(class APlayerController* PC, class APrimalCharacter* Character);
	void OnRep_ResourceCount();
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void OnRep_SelectedResourceClass();
	void ReceiveBeginPlay();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void MultiClearResourceClass();
	void BPDied(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void BPOnStructurePickup(class APlayerController** PlayerController, class UClass** ItemType, class UPrimalItem** NewlyPickedUpItem, bool* bIsQuickPickup);
	void ExecuteUbergraph_BP_DedicatedStorage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
