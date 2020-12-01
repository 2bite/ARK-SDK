#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapAdminBlinkRifle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapAdminBlinkRifle.WeapAdminBlinkRifle_C
// 0x0230 (0x0FB8 - 0x0D88)
class AWeapAdminBlinkRifle_C : public AWeapGun_C
{
public:
	class UParticleSystemComponent*                    TargetIndicator;                                          // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CreativeModeBuffClass;                                    // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              ModeMap_Names;                                            // 0x0D98(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLinearColor>                        ModeMap_Colors;                                           // 0x0DA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CurrentMode;                                              // 0x0DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               BlinkTarget_HasValidLocation;                             // 0x0DBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlinkTarget_IsAirLocation;                                // 0x0DBD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0DBE(0x0002) MISSED OFFSET
	struct FVector                                     BlinkTarget_Location;                                     // 0x0DC0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0DCC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    WeaponDynamicMat;                                         // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastModeSwitchTime;                                       // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastPermissionCheckTime;                                  // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Client_CanCheat;                                          // 0x0DE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0DE9(0x0007) MISSED OFFSET
	class AActor*                                      CurrentInspectedActor;                                    // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     CurrentInspectedComponent;                                // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CurrentDestroyTarget;                                     // 0x0E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             LastDestroyFoundValidTarget;                              // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      ServerCurrentInspectActor;                                // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              ServerCurrentInspectActorInfo;                            // 0x0E18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              ServerCurrentInspectActorBuffs;                           // 0x0E28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             Server_LastInspectRequest;                                // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             Client_LastInspectRequest;                                // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentInspectedActorIsLocked;                            // 0x0E48(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0E49(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x0E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_Mode2;                                 // 0x0E58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0E5C(0x0004) MISSED OFFSET
	class APlayerController*                           K2Node_DynamicCast_AsPlayerController;                    // 0x0E60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0E68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0E69(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_Mode;                                  // 0x0E6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_NewMode;                               // 0x0E70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_OldMode;                               // 0x0E74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x0E78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue2;                    // 0x0E79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0E7A(0x0002) MISSED OFFSET
	struct FLinearColor                                CallFunc_Array_Get_Item;                                  // 0x0E7C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAdminPermission_IsAdmin;                      // 0x0E8C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0E8D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0E8E(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0E90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_CanOwnerCheat;                         // 0x0E9C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0E9D(0x0003) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_InspectTarget;                         // 0x0EA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     K2Node_CustomEvent_InspectComponent;                      // 0x0EA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0EB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0EB1(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_DestroyTarget;                         // 0x0EB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAdminPermission_IsAdmin2;                     // 0x0EC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_KillTargetCharacterOrStructure_ReturnValue;      // 0x0EC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAdminPermission_IsAdmin3;                     // 0x0EC2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x0EC3(0x0001) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x0EC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsAirTarget;                           // 0x0ED0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0ED1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x0ED4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorVector_ReturnValue;               // 0x0EE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0EEC(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_Actor2;                                // 0x0EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     K2Node_CustomEvent_Component;                             // 0x0EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x0F00(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0F0C(0x0004) MISSED OFFSET
	TArray<class FString>                              CallFunc_GetInspectText_Desc;                             // 0x0F10(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                                    CallFunc_MakeRotFromX_ReturnValue;                        // 0x0F20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0F2C(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0F38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_TeleportTo_ReturnValue;                       // 0x0F39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x0F3A(0x0006) MISSED OFFSET
	TArray<class FString>                              CallFunc_GetBuffDetails_BuffInfo;                         // 0x0F40(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FString>                              CallFunc_GetDetailedDescription_ReturnValue;              // 0x0F50(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      K2Node_CustomEvent_Actor;                                 // 0x0F60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class FString>                              K2Node_CustomEvent_Desc;                                  // 0x0F68(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FString>                              K2Node_CustomEvent_Buffs;                                 // 0x0F78(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_HasAdminPermission_IsAdmin4;                     // 0x0F88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCooldownComplete_ReturnValue;                  // 0x0F89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x0F8A(0x0006) MISSED OFFSET
	TArray<class FString>                              K2Node_MakeArray_Array;                                   // 0x0F90(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0FA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0FA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0FA2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x5];                                       // 0x0FA3(0x0005) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_TraceProjectileArc_ActorsToIgnore_RefProperty;   // 0x0FA8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapAdminBlinkRifle.WeapAdminBlinkRifle_C");
		return ptr;
	}


	void GetBuffDetails(class APrimalCharacter* Character, TArray<class FString>* BuffInfo);
	void GetInspectText(class AActor* Actor, class UObject* Component, TArray<class FString>* Desc);
	void GetActorDescriptiveName(class AActor* Actor, class FString* Desc);
	void GetActorScreenLocation(class AActor* TargetActor, struct FVector2D* ScreenLoc);
	bool InspectTrace(const struct FVector2D& Start, float End, struct FHitResult* OutHit);
	void HasAdminPermission(bool* IsAdmin);
	void STATIC_Tick_Destroy(float DeltaTime);
	void STATIC_Tick_Inspect(float DeltaTime);
	void STATIC_Tick_Blink(float DeltaTime);
	void ReceiveBeginPlay();
	void BPOnStartTargeting(bool* bFromGamepadLeft);
	void ReceiveTick(float* DeltaSeconds);
	void BPFiredWeapon();
	bool BPAllowNativeFireWeapon();
	void STATIC_BPDrawHud(class AShooterHUD** HUD);
	void UserConstructionScript();
	void ServerRequestBlinkToTarget(const struct FVector& Location, bool IsAirTarget);
	void ServerRequestSetMode(int Mode);
	void MultiUpdateCurrentMode(int Mode);
	void OnModeEntered(int NewMode);
	void OnModeExited(int OldMode);
	void ClientUpdatePermissionCheck(bool CanOwnerCheat);
	void ServerRequestSetInspectTarget(class AActor* InspectTarget, class UObject* InspectComponent);
	void ServerRequestDestroyTarget(class AActor* DestroyTarget);
	void ServerRequestActorDescription(class AActor* Actor, class UObject* Component);
	void ClientReceiveActorDescription(class AActor* Actor, TArray<class FString>* Desc, TArray<class FString>* Buffs);
	void ExecuteUbergraph_WeapAdminBlinkRifle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
