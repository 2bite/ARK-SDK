#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekBackpack_MissilePod_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C
// 0x024A (0x0B9C - 0x0952)
class ABuff_MekBackpack_MissilePod_C : public ABuff_MekBackpack_Base_C
{
public:
	bool                                               InTargetingMode;                                          // 0x0952(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0953(0x0005) MISSED OFFSET
	double                                             TargetingModeStartTime;                                   // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ProjectileType;                                           // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastAttackTime;                                           // 0x0968(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAccuracyDistance;                                      // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	class UClass*                                      AmmoType;                                                 // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackCooldownTime;                                       // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0984(0x0004) MISSED OFFSET
	class UAnimMontage*                                MissileFireMontage;                                       // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NextServerFireDirection;                                  // 0x0990(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MissilePodMalfunctioned;                                  // 0x099C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x099D(0x0003) MISSED OFFSET
	class UClass*                                      MalfunctionEmitterType;                                   // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MalfunctionEmitterSocketName;                             // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClientAmmoQuantity;                                       // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CallFunc_Conv_ByteToInt_ReturnValue;                      // 0x09B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x09B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x09C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter2;                    // 0x09C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x09D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue;                      // 0x09D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue2;                     // 0x09D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x09D3(0x0005) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter3;                    // 0x09D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x09E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0xF];                                       // 0x09E1(0x000F) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetSocketTransform_ReturnValue;                  // 0x09F0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x0A20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0A28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_FinishSpawningActor_ReturnValue;                 // 0x0A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Direction;                             // 0x0A38(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetMek_IsValid;                                  // 0x0A44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0A45(0x0003) MISSED OFFSET
	class AMek_Character_BP_C*                         CallFunc_GetMek_MekChar;                                  // 0x0A48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetFireDirection_Direction;                      // 0x0A50(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0A5C(0x0004) MISSED OFFSET
	class AMek_Character_BP_C*                         K2Node_DynamicCast_AsMek_Character_BP_C;                  // 0x0A60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0A68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryUseAmmo_Success;                              // 0x0A69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x0A6A(0x0006) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetSocketTransform_ReturnValue2;                 // 0x0A70(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x0AA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x0AAC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x0AB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetCurrentAmmo_AmmoQuantity;                     // 0x0AC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0AD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0AD1(0x0007) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue;                 // 0x0AE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_Network_ReturnValue2;                // 0x0AE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0AEA(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x0AEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_EventName;                                   // 0x0AF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x0AF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x0AF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0AFA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x0AFB(0x0001) MISSED OFFSET
	int                                                CallFunc_GetCurrentAmmo_AmmoQuantity2;                    // 0x0AFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetMek_IsValid2;                                 // 0x0B00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0B01(0x0007) MISSED OFFSET
	class AMek_Character_BP_C*                         CallFunc_GetMek_MekChar2;                                 // 0x0B08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x0B10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0B11(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter4;                    // 0x0B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0B20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0B21(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue;                               // 0x0B24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue3;                     // 0x0B28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0B29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x0B2A(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x0B2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetMek_IsValid3;                                 // 0x0B38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0B39(0x0007) MISSED OFFSET
	class AMek_Character_BP_C*                         CallFunc_GetMek_MekChar3;                                 // 0x0B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x0B48(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x0B54(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x0B60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x0B64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0B68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   K2Node_MakeStruct_Vector_NetQuantizeNormal;               // 0x0B6C(0x000C) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsPlayingMontage_ReturnValue;                    // 0x0B78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayingMontage_ReturnValue2;                   // 0x0B7A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0B7B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_IsBackpackDisabled;                          // 0x0B7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x0B7D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x0B7E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x0B7F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0B80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0B81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x0B82(0x0002) MISSED OFFSET
	int                                                K2Node_CustomEvent_Quantity;                              // 0x0B84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetCurrentAmmo_AmmoQuantity3;                    // 0x0B88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode3;               // 0x0B8C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x0B8D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x0B8E(0x0002) MISSED OFFSET
	int                                                CallFunc_GetItemStatValues_ReturnValue;                   // 0x0B90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BPGetItemStatModifier_ReturnValue;               // 0x0B94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x0B98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C");
		return ptr;
	}


	void STATIC_GetBackpackSaveData(struct FMekBackpackData* Data);
	void RestoreBackpackSaveData(struct FMekBackpackData* SaveData);
	void NotifyInventoryChange(class UPrimalItem** Item, bool* ItemAdded, bool* ItemEquipped);
	float GetHUDProgressBarPercent();
	void BPActivated(class AActor** ForInstigator);
	void OnRep_MissilePodMalfunctioned();
	void BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult);
	void TryUseAmmo(bool* Success);
	void GetCurrentAmmo(int* AmmoQuantity);
	void GetFireDirection(struct FVector* Direction);
	void AllowMekHover(bool* CanHover);
	void BuffTickClient(float* DeltaTime);
	void IsBackpackActive(bool* IsActive);
	void UserConstructionScript();
	void NotifyStartTargeting();
	void NotifyStopTargeting();
	void ServerRequestAttack(const struct FVector& Direction);
	void NotifyActivateBackpack();
	void OnAnimNotifyEvent(struct FName* EventName);
	void SetBackpackMalfunctioned(bool* IsBackpackDisabled);
	void MultiUpdateAmmoQuantity(int Quantity);
	void SyncClientAmmo();
	void ExecuteUbergraph_Buff_MekBackpack_MissilePod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
