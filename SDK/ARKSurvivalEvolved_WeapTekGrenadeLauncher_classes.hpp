#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekGrenadeLauncher_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C
// 0x03F9 (0x1229 - 0x0E30)
class AWeapTekGrenadeLauncher_C : public AShooterWeapon_Projectile
{
public:
	class UParticleSystemComponent*                    TPV_ChamberLoaderBott_3;                                  // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_ChamberLoaderBott_2;                                  // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_Guide_L;                                              // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_Guide_R;                                              // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_ChamberCoil_3;                                        // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_ChamberCoil_2;                                        // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_ChamberLoaderTop2;                                    // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_ChamberLoaderTop1;                                    // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_ChamberHalf_02;                                       // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_ChamberHalf_01;                                       // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_ChamberRailing_4;                                     // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_ChamberRailing_3;                                     // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_ChamberRailing_2;                                     // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTickingHelperComponent*                     TickingHelper1;                                           // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_Guide_L;                                              // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_Guide_r;                                              // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChamberLoaderTop1;                                    // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChamberLoaderTop2;                                    // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChamberRailing_02;                                    // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChamberRailing;                                       // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChamberLoaderUnder2;                                  // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChamberCoil_02;                                       // 0x0ED8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChamberHalf_4;                                        // 0x0EE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChamberHalf_3;                                        // 0x0EE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChamberLoaderUnder1;                                  // 0x0EF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChamberCoil_01;                                       // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_Holder_7;                                             // 0x0F00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Projectile6;                                              // 0x0F08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_Holder_6;                                             // 0x0F10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Projectile5;                                              // 0x0F18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_Holder_5;                                             // 0x0F20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Projectile4;                                              // 0x0F28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_Holder_4;                                             // 0x0F30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Projectile3;                                              // 0x0F38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_Holder_3;                                             // 0x0F40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Projectile2;                                              // 0x0F48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_Holder_2;                                             // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Projectile1;                                              // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSlots;                                                 // 0x0F60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0F64(0x0004) MISSED OFFSET
	class UClass*                                      WeaponHelperBuffClass;                                    // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlotRechargeTime;                                         // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequireExactAmmoTypeMatch;                                // 0x0F74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0F75(0x0003) MISSED OFFSET
	class USoundCue*                                   ReloadSound;                                              // 0x0F78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABuff_TekGrenadeLauncherHelper_C*            WeaponHelperBuff;                                         // 0x0F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TestDefaultProjectileType;                                // 0x0F88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              InitialProjectileTypeSlots;                               // 0x0F90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NextSlotToFire;                                           // 0x0FA0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowTargetingArc;                                         // 0x0FA4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0FA5(0x0003) MISSED OFFSET
	TArray<struct FTekGrenadeLauncherSlot>             Slots;                                                    // 0x0FA8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	double                                             LastSlotAdvanceNetworkTime;                               // 0x0FB8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SlotAdvanceCooldown;                                      // 0x0FC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileMaxSpeedOverride;                               // 0x0FC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TPVCameraOffset;                                          // 0x0FC8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AimAngleOffset;                                           // 0x0FD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetingVFXVelocityMultiplier;                           // 0x0FD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugTargetingMode;                                       // 0x0FDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugProjectileSlots;                                     // 0x0FDD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnequipping;                                            // 0x0FDE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0FDF(0x0001) MISSED OFFSET
	float                                              ProjectileArcTimeStep;                                    // 0x0FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileArcMaxLength;                                   // 0x0FE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            ProjectileArcBeamParticles;                               // 0x0FE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             ProjectileArcBeamParticleTemplate;                        // 0x0FF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ProjectileArcBeamParticleRotation;                        // 0x1000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ProjectileArcVisible;                                     // 0x100C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         ProjectileArcUpdateTickGroup;                             // 0x100D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         ProjectileArcParticleTickGroup;                           // 0x100E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x100F(0x0001) MISSED OFFSET
	struct FRotator                                    ProjectileArcDirectionOffset;                             // 0x1010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileArcFirstSegmentHidePctInTPV;                    // 0x101C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FWeaponAnim>                         PerSlotReloadAnims;                                       // 0x1020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              CurrentHeatLevel;                                         // 0x1030(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1034(0x0004) MISSED OFFSET
	double                                             LastHeatIncreaseNetworkTime;                              // 0x1038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatCooldownDelayTime;                                    // 0x1040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatCooldownSpeed;                                        // 0x1044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInReloadSequence;                                      // 0x1048(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1049(0x0003) MISSED OFFSET
	float                                              TimeToAdvanceSlot;                                        // 0x104C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadAnimPlayRate;                                       // 0x1050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WantsReloadNextFire;                                      // 0x1054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1055(0x0003) MISSED OFFSET
	float                                              AimAngleDownLimit;                                        // 0x1058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinishReloadBeforeAnimTime;                               // 0x105C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ProjectileArcParticleNR;                                  // 0x1060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InitialNextSlot;                                          // 0x1064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             AdvanceSlotStartTime;                                     // 0x1068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInFullReloadSequence;                                  // 0x1070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x1071(0x0007) MISSED OFFSET
	class USoundBase*                                  UnEquipSound;                                             // 0x1078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastReloadTime;                                           // 0x1080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x1088(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x1089(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x108A(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x108C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x1090(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1094(0x0004) MISSED OFFSET
	TArray<struct FTekGrenadeLauncherSlot>             K2Node_CustomEvent_UpdatedSlots;                          // 0x1098(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_bJustFiredGrenade;                     // 0x10A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x10A9(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_SlotIdx;                               // 0x10AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_CustomEvent_NewAmmoType;                           // 0x10B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetProjectileSlotType_Success;                   // 0x10B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetProjectileSlotType_Success2;                  // 0x10B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetSlotInfo_GotValidSlotData;                    // 0x10BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x5];                                       // 0x10BB(0x0005) MISSED OFFSET
	class UClass*                                      CallFunc_GetSlotInfo_AmmoType;                            // 0x10C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetSlotInfo_LastFiredNetworkTime;                // 0x10C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetSlotInfo_AmmoLoaded;                          // 0x10D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetNextAvailableSlot_SlotIsValid;                // 0x10D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x10D2(0x0002) MISSED OFFSET
	int                                                CallFunc_GetNextAvailableSlot_SlotIdx;                    // 0x10D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetNextAvailableSlot_TimeToAdvance;              // 0x10D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x10DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x10DD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x10DE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x10DF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_ShowArcDisplay;                        // 0x10E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x10E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyOwned_ReturnValue;                      // 0x10E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x10E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x10E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x10E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x10E6(0x0002) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x10E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue2;                    // 0x10EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x10F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x10F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x10F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x10F3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x10F4(0x0004) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x10F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x1100(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x1101(0x0007) MISSED OFFSET
	class UTickingHelperComponent*                     K2Node_ComponentBoundEvent_TickingComponent;              // 0x1108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_ComponentBoundEvent_DeltaTime;                     // 0x1110(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x1114(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x1115(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x1116(0x0002) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x1118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue;                      // 0x1120(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1121(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x1122(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1123(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1124(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x1125(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1126(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayingWeaponAnimMontage_ReturnValue;          // 0x1127(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1128(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x1129(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x112A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AllowedToFire_ReturnValue;                       // 0x112B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x112C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x112D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x112E(0x0002) MISSED OFFSET
	struct FWeaponAnim                                 CallFunc_GetReloadAnim_Anim;                              // 0x1130(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue;                 // 0x1140(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_Slot;                                  // 0x1144(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetSlotInfo_GotValidSlotData2;                   // 0x1148(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x1149(0x0007) MISSED OFFSET
	class UClass*                                      CallFunc_GetSlotInfo_AmmoType2;                           // 0x1150(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetSlotInfo_LastFiredNetworkTime2;               // 0x1158(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetSlotInfo_AmmoLoaded2;                         // 0x1160(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ModifyAmmoQuantityInInventory_Success;           // 0x1161(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetNextAvailableSlot_SlotIsValid2;               // 0x1162(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x1163(0x0001) MISSED OFFSET
	int                                                CallFunc_GetNextAvailableSlot_SlotIdx2;                   // 0x1164(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetNextAvailableSlot_TimeToAdvance2;             // 0x1168(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x116C(0x0004) MISSED OFFSET
	struct FTekGrenadeLauncherSlot                     CallFunc_Array_Get_Item;                                  // 0x1170(0x0018) (Transient, DuplicateTransient)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x1188(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x1189(0x0007) MISSED OFFSET
	struct FTekGrenadeLauncherSlot                     K2Node_MakeStruct_TekGrenadeLauncherSlot;                 // 0x1190(0x0018) (Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x11A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x11A9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x11AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FTekGrenadeLauncherSlot                     CallFunc_Array_Get_Item2;                                 // 0x11B0(0x0018) (Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x11C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x11C9(0x0003) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue3;                    // 0x11CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue4;                    // 0x11D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue3;                  // 0x11D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue4;                  // 0x11D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x11D6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x1];                                       // 0x11D7(0x0001) MISSED OFFSET
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue;            // 0x11D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x11DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue2;           // 0x11E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x11E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x11E5(0x0003) MISSED OFFSET
	int                                                CallFunc_GetCurrentSlotAdvancement_CurrentSlot;           // 0x11E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetCurrentSlotAdvancement_Remainder;             // 0x11EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x11F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetSlotDifference_Difference;                    // 0x11F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x11FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_IntFloat_ReturnValue;                   // 0x1200(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x1204(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x1205(0x0003) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x1208(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlayWeaponSound_ReturnValue;                     // 0x1210(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue;                 // 0x1218(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x1219(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x1220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x1228(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C");
		return ptr;
	}


	void GetSlotDifference(int A, int B, int* Difference);
	void GetCurrentSlotAdvancement(int* CurrentSlot, float* Remainder);
	void FinishedFullReload();
	void STATIC_CanReloadLauncher(bool* bCanReload);
	struct FRotator BPOverrideRootRotationOffset(struct FRotator* InRootRotation);
	bool BPCanEquip(class AShooterCharacter** ByCharacter);
	void BPOnSpawnedProjectile(class AShooterProjectile** Projectile);
	void ReceiveDestroyed();
	void STATIC_ClientInit();
	void FinishedReloadSequence();
	void ModifyHeatLevel(float Delta);
	void GetReloadAnim(int FromSlot, struct FWeaponAnim* Anim);
	void SetProjectileArcVisibility(bool IsVisible);
	void UpdateProjectileArc(float DeltaTime);
	struct FVector BPGetTPVCameraOffset();
	struct FVector BPOverrideAimDirection(struct FVector* DesiredAimDirection);
	void STATIC_UpdateSlotMeshes();
	void STATIC_SyncAmmoInClipValue();
	void ReceiveTick(float* DeltaSeconds);
	void STATIC_GetSlotInfo(int SlotIdx, bool* GotValidSlotData, class UClass** AmmoType, double* LastFiredNetworkTime, bool* AmmoLoaded);
	void STATIC_SaveAmmoToItem();
	void STATIC_LoadAmmoFromItem(bool* Success);
	void SetProjectileSlotType(int SlotIdx, class UClass* ItemType, bool* Success);
	void GetProjectileTypeFromItem(class UClass* ItemType, bool* IsValid, class UClass** ProjectileType);
	void StartSecondaryActionEvent();
	void BP_OnReloadNotify();
	void ModifyAmmoQuantityInInventory(class UClass* AmmoType, int Delta, bool AddAmmo, bool* Success);
	void ReceiveBeginPlay();
	void GetAmmoCountOfType(class UClass* AmmoType, int* AvailableAmmo);
	void GetNextAvailableSlot(bool* SlotIsValid, int* SlotIdx, float* TimeToAdvance);
	bool STATIC_BPWeaponCanFire();
	void STATIC_ReloadProjectiles(int* NumReloadedSlots);
	void BPFiredWeapon();
	void STATIC_BPSelectProjectileToFire(class UClass** ProjectileClassOverride, class USoundCue** FireSoundOverride, bool* bSpawnOnClient, float* OverrideMaxSpeed);
	void StartUnequipEvent();
	void BPStartEquippedNotify();
	void UserConstructionScript();
	void ClientUpdateSlots(TArray<struct FTekGrenadeLauncherSlot>* UpdatedSlots);
	void SyncSlots(bool bJustFiredGrenade);
	void ServerRequestSwitchAmmoType(int SlotIdx, class UClass* NewAmmoType);
	void ClientPlayReloadAnim();
	void ServerNotifySetArcDisplay(bool ShowArcDisplay);
	void ToggleArcDisplay();
	void ServerRequestAdvanceSlot();
	void ClientUpdateSlotMeshes();
	void ServerNotifyReplicationReady();
	void BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature(class UTickingHelperComponent* TickingComponent, float DeltaTime);
	void ServerRequestUnloadSlot(int Slot);
	void ExecuteUbergraph_WeapTekGrenadeLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
