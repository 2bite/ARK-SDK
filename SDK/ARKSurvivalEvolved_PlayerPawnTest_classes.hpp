#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerPawnTest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPawnTest.PlayerPawnTest_C
// 0x03F1 (0x20F1 - 0x1D00)
class APlayerPawnTest_C : public AShooterCharacter
{
public:
	class USkeletalMeshComponent*                      SecondaryMesh1P;                                          // 0x1D00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SecondaryImplantTPV;                                      // 0x1D08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ImplantTPV;                                               // 0x1D10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x1D18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   PrimalInventory1;                                         // 0x1D20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1D28(0x0008) MISSED OFFSET
	struct UObject_FTransform                          LastHeadTransform;                                        // 0x1D30(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAccumulator;                                          // 0x1D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateRate;                                               // 0x1D64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             CurrentPos;                                               // 0x1D68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             LastPos;                                                  // 0x1D78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             RestPos;                                                  // 0x1D88(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             PivotPos;                                                 // 0x1D98(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Gravity_Force;                                            // 0x1DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Drag_Force;                                               // 0x1DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x1DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spring_Force;                                             // 0x1DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HairScale;                                                // 0x1DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spring_Force_Front_Modifier;                              // 0x1DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damping_Front_Modifier;                                   // 0x1DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spring_Force_Back;                                        // 0x1DC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damping_Back;                                             // 0x1DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1DCC(0x0004) MISSED OFFSET
	TArray<float>                                      RestDistance;                                             // 0x1DD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                HairIndex;                                                // 0x1DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HairSocketName;                                           // 0x1DE4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadCollisionRadius;                                      // 0x1DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadHairCollisionRadius;                                  // 0x1DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HeadCollisionOffset;                                      // 0x1DF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NeckCollisionRadius;                                      // 0x1E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NeckCollisionOffset;                                      // 0x1E04(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShoulderLCollisionRadius;                                 // 0x1E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShoulderLCollisionOffset;                                 // 0x1E14(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShoulderRCollisionRadius;                                 // 0x1E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShoulderRCollisionOffset;                                 // 0x1E24(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NeckHairCollisionRadius;                                  // 0x1E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NeckHairCollisionOffset;                                  // 0x1E34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugHair;                                               // 0x1E40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1E41(0x0003) MISSED OFFSET
	struct FVector                                     LastHairSocketPosition;                                   // 0x1E44(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeHairSocketMoved;                                  // 0x1E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ChestSocketName;                                          // 0x1E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NeckSocketName;                                           // 0x1E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bResetHair;                                               // 0x1E68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1E69(0x0003) MISSED OFFSET
	int                                                UpdateMaxNumSubsteps;                                     // 0x1E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumHairUpdateDistance;                                // 0x1E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x1E74(0x000C) MISSED OFFSET
	struct UObject_FTransform                          LastHairSocketTransform;                                  // 0x1E80(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct UObject_FTransform                          LastNeckSocketTransform;                                  // 0x1EB0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct UObject_FTransform                          LastChestSocketTransform;                                 // 0x1EE0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              HairSimulationSpeed;                                      // 0x1F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HairMaterialTime;                                         // 0x1F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistanceToRestPos;                                     // 0x1F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InWater;                                                  // 0x1F1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HairWetness;                                              // 0x1F20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterLine;                                                // 0x1F24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPosAsPivot;                                              // 0x1F28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCollideWithNeck;                                         // 0x1F29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCollideMiddle;                                           // 0x1F2A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x1F2B(0x0001) MISSED OFFSET
	int                                                NumAscensions;                                            // 0x1F2C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TArray<class USkeletalMesh*>                       AscensionMeshesFPV;                                       // 0x1F30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMesh*>                         AscensionMeshesTPV;                                       // 0x1F40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              AlphaAscensionEngrams;                                    // 0x1F50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NumAscensionsAb;                                          // 0x1F60(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x1F64(0x0004) MISSED OFFSET
	TArray<class UStaticMesh*>                         AscensionMeshesTPV_Ab;                                    // 0x1F68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                       AscensionMeshesFPV_Ab;                                    // 0x1F78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       TestAscensionBossNameTag;                                 // 0x1F88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMesh*>                         AscensionMeshesTPV_Ext;                                   // 0x1F90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                       AscensionMeshesFPV_Ext;                                   // 0x1FA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NumAscensionsExt;                                         // 0x1FB0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x1FB4(0x0004) MISSED OFFSET
	class AActor*                                      CurrentDome;                                              // 0x1FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseNativeHairSim;                                        // 0x1FC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x1FC1(0x0007) MISSED OFFSET
	class FString                                      Current_Cruise_Missile_Message;                           // 0x1FC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NumChibiLevelUps;                                         // 0x1FD8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                NumAscensionsGenesis;                                     // 0x1FDC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                NumAscensionsGen2;                                        // 0x1FE0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bUnlockedAllExplorerNotes;                                // 0x1FE4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasSetupMeshes;                                          // 0x1FE5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1FE6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x1FE7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_AscendIndex;                           // 0x1FE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bImmediateAscend;                      // 0x1FEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x1FED(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x1FF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_NameToString_ReturnValue;                   // 0x1FF8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2008(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x200C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_IntToString_ReturnValue;                    // 0x2010(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2020(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x2028(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2038(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TriggerLevelCustomEvents_ReturnValue;            // 0x2040(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x2041(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x2048(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2050(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x2051(0x0007) MISSED OFFSET
	class UShooterGameUserSettings*                    CallFunc_GetUserSettings_ReturnValue;                     // 0x2058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UFinalCreditsUI_C*                           CallFunc_Create_ReturnValue;                              // 0x2060(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Max_ReturnValue;                                 // 0x2068(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x206C(0x0004) MISSED OFFSET
	class FString                                      K2Node_CustomEvent_Text;                                  // 0x2070(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                                K2Node_CustomEvent_Color;                                 // 0x2080(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_LifetimeSeconds;                       // 0x2090(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_DisplayScale;                          // 0x2094(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USoundCue*                                   K2Node_CustomEvent_SoundToPlay;                           // 0x2098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FColor                                      CallFunc_Conv_LinearColorToColor_ReturnValue;             // 0x20A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x20A4(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x20A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x20B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x20B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x20B9(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x20C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 CallFunc_GetShooterHud_ReturnValue;                       // 0x20C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TriggerLevelCustomEvents_ReturnValue2;           // 0x20D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsShipping_ReturnValue;                          // 0x20D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x20D2(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x20D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_BPGetPrimaryMapName_ReturnValue;                 // 0x20E0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue;                   // 0x20F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawnTest.PlayerPawnTest_C");
		return ptr;
	}


	void BPSetupFirstPersonHandsMesh();
	void SetupMeshes();
	void BPUnlockedAllExplorerNotes();
	void GetTheNumChibiLevelUps(int* OutVal);
	void SetNumChibiLevelUps(int NewNum);
	int BPGetPlayerHexagonCount();
	bool BPSetPlayerHexagonCount(int* NewHexagonCount);
	void BPGetShowDebugAnimationComponents(TArray<class USkeletalMeshComponent*>* SkelMeshComponents);
	void BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed);
	void ShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, float LifetimeSeconds, float DisplayScale, class USoundCue* SoundToPlay);
	void TrySpawnMound();
	void TrySpawnMoundEx(float Angle, float Range);
	void BPSetFirstPersonMasterPoseComponent(class USkeletalMeshComponent** firstPersonMasterPosecomponent);
	void DefeatedBoss(class APrimalDinoCharacter* BossCharacter, const struct FName& BossTag, int BossDifficulty);
	void ServerAscend(int DifficultyIndex, bool bImmediateAscend, bool bSuppressAchievements);
	class FString PlayerCommand(class FString* TheCommand);
	void InitHairRestDistance();
	void STATIC_SetLastTransforms();
	void BPNonDedicatedPostAnimUpdate();
	void Setup_Collision_Volumes();
	void STATIC_SetupNewHairstyle();
	void STATIC_UpdateHair();
	void SetHairParams(struct FVector* HairSocketLoc, struct FRotator* HairSocketRot, struct FVector* NeckSocketLoc, struct FRotator* NeckSocketrot);
	void SimulateHair(float DeltaTime, struct FVector* HairSocketLoc, struct FRotator* HairSocketRot, struct FVector* ChestSocketLoc, struct FRotator* ChestSocketRot);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void NetClientAscend(int AscendIndex, bool bImmediateAscend);
	void ClientShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, float LifetimeSeconds, float DisplayScale, class USoundCue* SoundToPlay);
	void NetClientPreLoadAcension();
	void ExecuteUbergraph_PlayerPawnTest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
