#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekGrenadeLauncherHelper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C
// 0x0B78 (0x14D8 - 0x0960)
class ABuff_TekGrenadeLauncherHelper_C : public APrimalBuff
{
public:
	struct FHUDElement                                 ProjectileHUDTemplate;                                    // 0x0960(0x0150) (Edit, BlueprintVisible)
	struct FHUDElement                                 ProjectileBackgroundHUDTemplate;                          // 0x0AB0(0x0150) (Edit, BlueprintVisible)
	struct FLinearColor                                SlotBackgroundColor_Active;                               // 0x0C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SlotBackgroundColor_Normal;                               // 0x0C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ProjectileHUDScreenLocation;                              // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileHUDElementSpacing;                              // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C2C(0x0004) MISSED OFFSET
	class AWeapTekGrenadeLauncher_C*                   weapon;                                                   // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHUDElement>                         ProjectileHUDSlots;                                       // 0x0C38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FHUDElement>                         ProjectileHUDSlots_Backgrounds;                           // 0x0C48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                BaseMultiUseIndex;                                        // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BaseMultiUseCategory;                                     // 0x0C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 ProjectileCursorHUDIndicator;                             // 0x0C60(0x0150) (Edit, BlueprintVisible)
	struct FCustomWheelSettings                        SlotSelectionWheelSettings;                               // 0x0DB0(0x0040) (Edit, BlueprintVisible)
	struct FCustomWheelEntry                           SlotSelectionWheelEntryTemplate;                          // 0x0DF0(0x0068) (Edit, BlueprintVisible)
	struct FCustomWheelSettings                        AmmoSelectionWheelSettings;                               // 0x0E58(0x0040) (Edit, BlueprintVisible)
	struct FCustomWheelEntry                           AmmoSelectionWheelEntryTemplate;                          // 0x0E98(0x0068) (Edit, BlueprintVisible)
	int                                                CurrentSlot;                                              // 0x0F00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OpenedWheelWithGamepad;                                   // 0x0F04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0F05(0x0003) MISSED OFFSET
	struct FHUDElement                                 OverheatHUDElement;                                       // 0x0F08(0x0150) (Edit, BlueprintVisible)
	struct FHUDElement                                 OverheatHUDElementBackground;                             // 0x1058(0x0150) (Edit, BlueprintVisible)
	float                                              CurrentHeatLevelSmoothedValue;                            // 0x11A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastInventoryUpdatedFrame;                                // 0x11AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileCursorOffsetY;                                  // 0x11B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileCursorOffsetX;                                  // 0x11B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SlotEmptyIconColor;                                       // 0x11B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              ValidAmmoTypes;                                           // 0x11C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastUpdatedValidAmmoTypes;                                // 0x11D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCustomWheelEntry>                   CallFunc_Generate_Slot_Wheel_Entries_Entries;             // 0x11E0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FCustomWheelEntry>                   CallFunc_GenerateAmmoWheelEntries_AmmoEntries;            // 0x11F0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x1200(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x1208(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1210(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1211(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHud_ReturnValue;                       // 0x1218(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x1220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCustomWheelEntry                           CallFunc_GetSelectedCustomWheelEntry_SelectedEntry;       // 0x1228(0x0068) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetSelectedCustomWheelEntry_ReturnValue;         // 0x1290(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1291(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x1298(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x12A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x12A1(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue2;                      // 0x12A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x12B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x12B1(0x0007) MISSED OFFSET
	class UClass*                                      CallFunc_AmmoNameToType_AmmoType;                         // 0x12B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue;                 // 0x12C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x12C1(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x12C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController3;            // 0x12D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x12D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x12D9(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue3;                      // 0x12E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_StartCustomWheelRadialSelector_ReturnValue;      // 0x12E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x12E9(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue4;                      // 0x12F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController4;            // 0x12F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1300(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x1301(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue4;                      // 0x1308(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue5;                      // 0x1310(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_StartCustomWheelRadialSelector_ReturnValue2;     // 0x1318(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x1319(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController5;            // 0x1320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x1328(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x1329(0x0007) MISSED OFFSET
	struct FCustomWheelEntry                           CallFunc_GetSelectedCustomWheelEntry_SelectedEntry2;      // 0x1330(0x0068) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetSelectedCustomWheelEntry_ReturnValue2;        // 0x1398(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x1399(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue5;                      // 0x13A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCustomWheelEntry                           CallFunc_GetSelectedCustomWheelEntry_SelectedEntry3;      // 0x13A8(0x0068) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetSelectedCustomWheelEntry_ReturnValue3;        // 0x1410(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1411(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x1414(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue;                      // 0x1418(0x0028) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x1440(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x1490(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x14A0(0x0028) (Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue;                   // 0x14C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C");
		return ptr;
	}


	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void Generate_Slot_Wheel_Entries(TArray<struct FCustomWheelEntry>* Entries);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void ReceiveDestroyed();
	void BPInstigatorDied();
	void BPHandleOnStartFire(bool* bFromGamepad);
	void ShouldUpdateAmmoCount(class APrimalCharacter* ForShooterChar, bool* bShouldUpdate);
	void InitWeapon();
	void AmmoNameToType(const struct FName& AmmoTypeName, class UClass** AmmoType);
	void GenerateAmmoWheelEntries(TArray<struct FCustomWheelEntry>* AmmoEntries);
	void Generate_Slot_Wheel_EntriesMU(TArray<struct FMultiUseEntry>* MuEntries);
	struct FVector2D CalcAmmoWidgetLocation(int InInt);
	class FString GetItemShortName(class UClass* FromClass);
	void GetValidAmmoTypes(TArray<class UClass*>* TypesInInventory);
	void STATIC_SyncHUDElementSlots();
	void ReceiveBeginPlay();
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void UserConstructionScript();
	void OnSlotSelected();
	void OnAmmoTypeSelected();
	void ShowSlotSelectWheel();
	void HideSlotSelectWheel();
	void OnAmmoTypeUnloaded();
	void ExecuteUbergraph_Buff_TekGrenadeLauncherHelper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
