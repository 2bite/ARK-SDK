#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0899 (0x11C9 - 0x0930)
class ABuff_TekGrenadeLauncherHelper_C : public APrimalBuff
{
public:
	struct FHUDElement                                 ProjectileHUDTemplate;                                    // 0x0930(0x00C8) (Edit, BlueprintVisible)
	struct FHUDElement                                 ProjectileBackgroundHUDTemplate;                          // 0x09F8(0x00C8) (Edit, BlueprintVisible)
	struct FLinearColor                                SlotBackgroundColor_Active;                               // 0x0AC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SlotBackgroundColor_Normal;                               // 0x0AD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ProjectileHUDScreenLocation;                              // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileHUDElementSpacing;                              // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	class AWeapTekGrenadeLauncher_C*                   weapon;                                                   // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHUDElement>                         ProjectileHUDSlots;                                       // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FHUDElement>                         ProjectileHUDSlots_Backgrounds;                           // 0x0B08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                BaseMultiUseIndex;                                        // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BaseMultiUseCategory;                                     // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 ProjectileCursorHUDIndicator;                             // 0x0B20(0x00C8) (Edit, BlueprintVisible)
	struct FCustomWheelSettings                        SlotSelectionWheelSettings;                               // 0x0BE8(0x0040) (Edit, BlueprintVisible)
	struct FCustomWheelEntry                           SlotSelectionWheelEntryTemplate;                          // 0x0C28(0x0068) (Edit, BlueprintVisible)
	struct FCustomWheelSettings                        AmmoSelectionWheelSettings;                               // 0x0C90(0x0040) (Edit, BlueprintVisible)
	struct FCustomWheelEntry                           AmmoSelectionWheelEntryTemplate;                          // 0x0CD0(0x0068) (Edit, BlueprintVisible)
	int                                                CurrentSlot;                                              // 0x0D38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OpenedWheelWithGamepad;                                   // 0x0D3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D3D(0x0003) MISSED OFFSET
	struct FHUDElement                                 OverheatHUDElement;                                       // 0x0D40(0x00C8) (Edit, BlueprintVisible)
	struct FHUDElement                                 OverheatHUDElementBackground;                             // 0x0E08(0x00C8) (Edit, BlueprintVisible)
	float                                              CurrentHeatLevelSmoothedValue;                            // 0x0ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastInventoryUpdatedFrame;                                // 0x0ED4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCustomWheelEntry>                   CallFunc_GenerateSlotWheelEntries_Entries;                // 0x0ED8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x0EE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0EF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0EF9(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue;                       // 0x0F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCustomWheelEntry                           CallFunc_GetSelectedCustomWheelEntry_SelectedEntry;       // 0x0F08(0x0068) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetSelectedCustomWheelEntry_ReturnValue;         // 0x0F70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0F71(0x0007) MISSED OFFSET
	TArray<struct FCustomWheelEntry>                   CallFunc_GenerateAmmoWheelEntries_AmmoEntries;            // 0x0F78(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0F88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0F8C(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue;                      // 0x0F90(0x0028) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x0FB8(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x1008(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x1018(0x0028) (Transient, DuplicateTransient)
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x1040(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue;                   // 0x1048(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x1058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1060(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x1061(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue2;                      // 0x1068(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCustomWheelEntry                           CallFunc_GetSelectedCustomWheelEntry_SelectedEntry2;      // 0x1070(0x0068) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetSelectedCustomWheelEntry_ReturnValue2;        // 0x10D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x10D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x10DA(0x0006) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x10E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController3;            // 0x10E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x10F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x10F1(0x0007) MISSED OFFSET
	class UClass*                                      CallFunc_AmmoNameToType_AmmoType;                         // 0x10F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue3;                      // 0x1100(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue;                 // 0x1108(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1109(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTime;                                   // 0x110C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bFromGamepad2;                               // 0x1110(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bFromGamepad;                                // 0x1111(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_StartCustomWheelRadialSelector_ReturnValue;      // 0x1112(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_StartCustomWheelRadialSelector_ReturnValue2;     // 0x1113(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue;                            // 0x1114(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue4;                      // 0x1118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x1120(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x1124(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController4;            // 0x1128(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1130(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x1131(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue4;                      // 0x1138(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue5;                      // 0x1140(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController5;            // 0x1148(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x1150(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x1151(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue5;                      // 0x1158(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCustomWheelEntry                           CallFunc_GetSelectedCustomWheelEntry_SelectedEntry3;      // 0x1160(0x0068) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetSelectedCustomWheelEntry_ReturnValue3;        // 0x11C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C");
		return ptr;
	}


	void ReceiveDestroyed();
	void BPInstigatorDied();
	void BPHandleOnStartFire(bool* bFromGamepad);
	void ShouldUpdateAmmoCount(class APrimalCharacter* ForShooterChar, bool* bShouldUpdate);
	void InitWeapon();
	void AmmoNameToType(const struct FName& AmmoTypeName, class UClass** AmmoType);
	void GenerateAmmoWheelEntries(TArray<struct FCustomWheelEntry>* AmmoEntries);
	void STATIC_GenerateSlotWheelEntries(TArray<struct FCustomWheelEntry>* Entries);
	struct FVector2D CalcAmmoWidgetLocation(int InInt);
	class FString GetItemShortName(class UClass* FromClass);
	void GetValidAmmoTypes(TArray<class UClass*>* TypesInInventory);
	void STATIC_SyncHUDElementSlots();
	void ReceiveBeginPlay();
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void UserConstructionScript();
	void BuffTickClient(float* DeltaTime);
	void OnSlotSelected();
	void OnAmmoTypeSelected();
	void BPHandleOnStartAltFire(bool* bFromGamepad);
	void BPHandleOnStopAltFire(bool* bFromGamepad);
	void ShowSlotSelectWheel();
	void HideSlotSelectWheel();
	void OnAmmoTypeUnloaded();
	void ExecuteUbergraph_Buff_TekGrenadeLauncherHelper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
