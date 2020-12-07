#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0111 (0x0EE9 - 0x0DD8)
class ABP_DedicatedStorage_C : public AStructureItemContainerBaseBP_C
{
public:
	class UStaticMeshComponent*                        RangeMesh;                                                // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DisplayMesh4;                                             // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DisplayMesh3;                                             // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DisplayMesh2;                                             // 0x0DF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DisplayMesh1;                                             // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DisplayMeshes;                                            // 0x0E00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender4;                                              // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender3;                                              // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender2;                                              // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender1;                                              // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             NumberTextRenders;                                        // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BottomMesh;                                               // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TopMesh;                                                  // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SideMesh4;                                                // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SideMesh3;                                                // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SideMesh2;                                                // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SideMesh1;                                                // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SideMeshes;                                               // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventory_DedicatedStorage_C*         PrimalInventory_DedicatedStorage_C1;                      // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableSnaps;                                             // 0x0E70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E71(0x0007) MISSED OFFSET
	class UClass*                                      SelectedResourceClass;                                    // 0x0E78(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                ResourceCount;                                            // 0x0E80(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              RangeMeshRadius;                                          // 0x0E84(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ItemHUDTextColor;                                         // 0x0E88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsingWithdrawPriority;                                    // 0x0E98(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x0E99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0E9A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0E9B(0x0001) MISSED OFFSET
	float                                              K2Node_Event_KillingDamage;                               // 0x0E9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FDamageEvent                                K2Node_Event_DamageEvent;                                 // 0x0EA0(0x0020) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AController*                                 K2Node_Event_Killer;                                      // 0x0EC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x0EC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_Event_PlayerController;                            // 0x0ED0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_Event_ItemType;                                    // 0x0ED8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem*                                 K2Node_Event_NewlyPickedUpItem;                           // 0x0EE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bIsQuickPickup;                              // 0x0EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DedicatedStorage.BP_DedicatedStorage_C");
		return ptr;
	}


	void IsPlayerControllerValid(class APlayerController* thePC, bool* bValid);
	void DropAllInventoryOnGround();
	bool BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed);
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
