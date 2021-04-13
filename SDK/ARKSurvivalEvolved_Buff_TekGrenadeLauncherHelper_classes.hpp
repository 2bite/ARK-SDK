#pragma once

// ARKSurvivalEvolved (320.18) SDK

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
// 0x09A1 (0x12F1 - 0x0950)
class ABuff_TekGrenadeLauncherHelper_C : public APrimalBuff
{
public:
	struct FHUDElement                                 ProjectileHUDTemplate;                                    // 0x0950(0x00F8) (Edit, BlueprintVisible)
	struct FHUDElement                                 ProjectileBackgroundHUDTemplate;                          // 0x0A48(0x00F8) (Edit, BlueprintVisible)
	struct FLinearColor                                SlotBackgroundColor_Active;                               // 0x0B40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SlotBackgroundColor_Normal;                               // 0x0B50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ProjectileHUDScreenLocation;                              // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileHUDElementSpacing;                              // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B6C(0x0004) MISSED OFFSET
	class AWeapTekGrenadeLauncher_C*                   weapon;                                                   // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHUDElement>                         ProjectileHUDSlots;                                       // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FHUDElement>                         ProjectileHUDSlots_Backgrounds;                           // 0x0B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                BaseMultiUseIndex;                                        // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BaseMultiUseCategory;                                     // 0x0B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 ProjectileCursorHUDIndicator;                             // 0x0BA0(0x00F8) (Edit, BlueprintVisible)
	struct FCustomWheelSettings                        SlotSelectionWheelSettings;                               // 0x0C98(0x0040) (Edit, BlueprintVisible)
	struct FCustomWheelEntry                           SlotSelectionWheelEntryTemplate;                          // 0x0CD8(0x0068) (Edit, BlueprintVisible)
	struct FCustomWheelSettings                        AmmoSelectionWheelSettings;                               // 0x0D40(0x0040) (Edit, BlueprintVisible)
	struct FCustomWheelEntry                           AmmoSelectionWheelEntryTemplate;                          // 0x0D80(0x0068) (Edit, BlueprintVisible)
	int                                                CurrentSlot;                                              // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OpenedWheelWithGamepad;                                   // 0x0DEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0DED(0x0003) MISSED OFFSET
	struct FHUDElement                                 OverheatHUDElement;                                       // 0x0DF0(0x00F8) (Edit, BlueprintVisible)
	struct FHUDElement                                 OverheatHUDElementBackground;                             // 0x0EE8(0x00F8) (Edit, BlueprintVisible)
	float                                              CurrentHeatLevelSmoothedValue;                            // 0x0FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastInventoryUpdatedFrame;                                // 0x0FE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileCursorOffsetY;                                  // 0x0FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileCursorOffsetX;                                  // 0x0FEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SlotEmptyIconColor;                                       // 0x0FF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCustomWheelEntry>                   CallFunc_GenerateSlotWheelEntries_Entries;                // 0x1000(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x1010(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x1018(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1020(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1021(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue;                       // 0x1028(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCustomWheelEntry                           CallFunc_GetSelectedCustomWheelEntry_SelectedEntry;       // 0x1030(0x0068) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetSelectedCustomWheelEntry_ReturnValue;         // 0x1098(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1099(0x0007) MISSED OFFSET
	TArray<struct FCustomWheelEntry>                   CallFunc_GenerateAmmoWheelEntries_AmmoEntries;            // 0x10A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x10B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x10B4(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue;                      // 0x10B8(0x0028) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x10E0(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x1130(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x1140(0x0028) (Transient, DuplicateTransient)
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x1168(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue;                   // 0x1170(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x1180(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1188(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x1189(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue2;                      // 0x1190(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCustomWheelEntry                           CallFunc_GetSelectedCustomWheelEntry_SelectedEntry2;      // 0x1198(0x0068) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetSelectedCustomWheelEntry_ReturnValue2;        // 0x1200(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x1201(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x1202(0x0006) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x1208(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController3;            // 0x1210(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1218(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x1219(0x0007) MISSED OFFSET
	class UClass*                                      CallFunc_AmmoNameToType_AmmoType;                         // 0x1220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue3;                      // 0x1228(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue;                 // 0x1230(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1231(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTime;                                   // 0x1234(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bFromGamepad2;                               // 0x1238(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bFromGamepad;                                // 0x1239(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_StartCustomWheelRadialSelector_ReturnValue;      // 0x123A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_StartCustomWheelRadialSelector_ReturnValue2;     // 0x123B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue;                            // 0x123C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue4;                      // 0x1240(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x1248(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x124C(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController4;            // 0x1250(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1258(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x1259(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue4;                      // 0x1260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue5;                      // 0x1268(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController5;            // 0x1270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x1278(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x1279(0x0007) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue5;                      // 0x1280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCustomWheelEntry                           CallFunc_GetSelectedCustomWheelEntry_SelectedEntry3;      // 0x1288(0x0068) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetSelectedCustomWheelEntry_ReturnValue3;        // 0x12F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C");
		return ptr;
	}


	void GetValidAmmoTypes_1(TArray<class UClass*>* TypesInInventory);
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
