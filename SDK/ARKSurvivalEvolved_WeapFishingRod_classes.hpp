#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFishingRod_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFishingRod.WeapFishingRod_C
// 0x03EA (0x116A - 0x0D80)
class AWeapFishingRod_C : public AShooterWeapon
{
public:
	class USceneComponent*                             CableStart3P;                                             // 0x0D80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CableEnd3P;                                               // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsReeling;                                               // 0x0D90(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCableExtended;                                         // 0x0D91(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0D92(0x0006) MISSED OFFSET
	class UPrimalCableComponent*                       FishingCable;                                             // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          FishingCableMaterial;                                     // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FishingCableWidth;                                        // 0x0DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CableDefaultOffset;                                       // 0x0DAC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LastFiredRodProjectile;                                   // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             CableAttach3P;                                            // 0x0DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CableIdleLength;                                          // 0x0DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FishingStartPosition;                                     // 0x0DCC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAllowedMovementWhileFishing;                           // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0DDC(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        LastReeledFish;                                           // 0x0DE0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ReelingGameTemplate;                                      // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 CurrentReelingGame;                                       // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FKey>                                ReelingGameKeys;                                          // 0x0DF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxReelingGameDuration;                                   // 0x0E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0E0C(0x0004) MISSED OFFSET
	struct FWeaponAnim                                 ReelingAnim;                                              // 0x0E10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 IdleNotCastedAnim;                                        // 0x0E20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 IdleCastedAnim;                                           // 0x0E30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FisihingRodEndPointOffset;                                // 0x0E40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaitTargetLocation;                                       // 0x0E4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowCableDraw;                                           // 0x0E58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0E59(0x0003) MISSED OFFSET
	float                                              SnareStartTime;                                           // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSnare;                                                 // 0x0E60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0E61(0x0003) MISSED OFFSET
	float                                              BaitMinSnareTime;                                         // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FFishSnareData>                      FishSnareTimes;                                           // 0x0E68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BaitAttractRadius;                                        // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0E7C(0x0004) MISSED OFFSET
	class USoundCue*                                   CastSound;                                                // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ReelingSound;                                             // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SuccessSound;                                             // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SnappedSound;                                             // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaitMaxWeight;                                            // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0EAC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              AllowedFishingDinos;                                      // 0x0EB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxNumberOfRGSets;                                        // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinReelingGameDuration;                                   // 0x0EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalDinoCharacter*                        ToBeSnaredFish;                                           // 0x0EC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SnaredAcceptanceRadius;                                   // 0x0ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeToSnare;                                           // 0x0ED4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastSnaringTime;                                          // 0x0ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceMaxLength;                                           // 0x0EDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCableReachedBaitTarget;                                  // 0x0EE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0EE1(0x0003) MISSED OFFSET
	int                                                BaitMeshCounter;                                          // 0x0EE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SnaredFishSpeedMultiplier;                                // 0x0EE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWildRandomScale;                                       // 0x0EEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               ReelingIdle;                                              // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SnaringIde;                                               // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSnaring;                                               // 0x0F00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0F01(0x0007) MISSED OFFSET
	class UAnimSequence*                               SeatingIdle;                                              // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaitMaxSnareTime;                                         // 0x0F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CableSegmentLength;                                       // 0x0F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SnareFishSocketName;                                      // 0x0F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WorldEndPoint;                                            // 0x0F20(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CableTimeToReachTarget;                                   // 0x0F2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CableIV;                                                  // 0x0F30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CableInitialPoint;                                        // 0x0F3C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             TimeStartedInterp;                                        // 0x0F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RopeFallingGravity;                                       // 0x0F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0F54(0x0004) MISSED OFFSET
	class UAnimSequence*                               ReelingIdleFemale;                                        // 0x0F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SeatingIdleFemale;                                        // 0x0F60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SnaringIdeFemale;                                         // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaitTargetWaterSurface;                                   // 0x0F70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0F7C(0x0004) MISSED OFFSET
	class USoundCue*                                   BaitHitTargetSound;                                       // 0x0F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ReeledFishTargetRotation;                                 // 0x0F88(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetBaitReeledLocation;                                 // 0x0F94(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TugMaxLengthFactor;                                       // 0x0FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0FA4(0x0004) MISSED OFFSET
	class UParticleSystem*                             SplashEffect;                                             // 0x0FA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FKey>                                ReelingGameKeysGamepad;                                   // 0x0FB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        SMMyBaitComponent;                                        // 0x0FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 SMFishingBaitMesh;                                        // 0x0FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaitMeshScale;                                            // 0x0FD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0FDC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              CaughtFishLootInventoryClasses;                           // 0x0FE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ExtraLootQualityMultiplier;                               // 0x0FF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraLootPowerWeightMultiplier;                           // 0x0FF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraLootQuantityMultiplier;                              // 0x0FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaitAbsoluteMaxWeight;                                    // 0x0FFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FishWeightQuantityQualityPower;                           // 0x1000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x1004(0x0004) MISSED OFFSET
	TArray<class UClass*>                              BaseMeatCaughtFishLootInventoryClasses;                   // 0x1008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CaughtString;                                             // 0x1018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      WithQualityString;                                        // 0x1028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FishLevelQualityBase;                                     // 0x1038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastPreventExitingWater;                                  // 0x103C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x103D(0x0003) MISSED OFFSET
	float                                              GlobalFinalQualityMultiplier;                             // 0x1040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugFishingRod;                                         // 0x1044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1045(0x0003) MISSED OFFSET
	float                                              Average_Fish_Weight;                                      // 0x1048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x104C(0x0004) MISSED OFFSET
	class UClass*                                      Fishing_Damage_Type;                                      // 0x1050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    FishCaughtDispatcherSingle;                               // 0x1058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector                                     BaitScale;                                                // 0x1068(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x1074(0x0004) MISSED OFFSET
	TArray<struct FName>                               ComponentCustomTagsToIgnoreOnTrace;                       // 0x1078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              SoftReferenceFishType;                                    // 0x1088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              SoftReferenceFishLoot;                                    // 0x1098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              SoftReferenceFishLootBaseMeat;                            // 0x10A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APrimalDinoCharacter*                        K2Node_CustomEvent_Fish2;                                 // 0x10B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_CustomEvent_fish;                                  // 0x10C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_CustomEventName;                             // 0x10C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp;                                    // 0x10D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation;                                   // 0x10D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_TotalDuration;                               // 0x10E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x10E4(0x0004) MISSED OFFSET
	class UAnimNotifyState*                            K2Node_Event_AnimNotifyObject;                            // 0x10E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_BaitTargetLocation2;                   // 0x10F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_BaitWaterSurfaceLocation2;             // 0x10FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue;                   // 0x1108(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPointInWater_return;                           // 0x1109(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x110A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_releaseFish;                           // 0x110B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_RemainingMoves2;                       // 0x110C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_RemainingMoves;                        // 0x1110(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_BaitTargetLocation;                    // 0x1114(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_BaitWaterSurfaceLocation;              // 0x1120(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x112C(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x1130(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NewParam;                              // 0x1138(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NewParam1;                             // 0x1144(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x1150(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x1151(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1152(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x5];                                       // 0x1153(0x0005) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_ReeledInFish;                          // 0x1158(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_CustomEvent_PrimalDinoChar;                        // 0x1160(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_releaseFish2;                          // 0x1168(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bSuccess;                              // 0x1169(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFishingRod.WeapFishingRod_C");
		return ptr;
	}


	void ResolveSoftReferences();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void Draw_Crosshair_While_Riding_Dino(bool shouldDraw);
	void AllowFishing(bool* Result);
	void IsOwnerInCaveVolume(bool* Ret);
	void GiveFishLoot(class UClass* Class, class APrimalDinoCharacter* Outer, float* OutQuality);
	void GetNum_Remaining_Reel_Keys(int* Count);
	void CalculateDistanceToCover(bool UnderWater, float* DistanceToCover);
	void Get_Reeled_Fish_Target_Location(struct FVector* TargetLocation);
	void UpdateBaitMeshLocation();
	void PlayFishAttackAnimation();
	void STATIC_IsPointInWater(const struct FVector& Point, bool* Return);
	void HandleReleasingFish();
	void OnInstigatorPlayDyingEvent();
	void StartUnequipEvent();
	class UAnimSequence* BPGetSeatingAnimation();
	void UpdateToBeSnaredFish();
	void Finish_SnaringFish();
	void OnRGKeySuccess();
	void TugFishingCable(int remainingMoves);
	void GetReelingGameDuration(class APrimalDinoCharacter* ReeledFish, float* Duration);
	void OnStartPlayAnimation();
	void StartSecondaryActionEvent();
	void CanSnareFish(class APrimalDinoCharacter* fish, bool* CanSnare);
	void STATIC_GenerateRandomKeys(int NumSets, int NumSetKeys, TArray<struct FKey>* Keys);
	void FishSnared(class APrimalDinoCharacter* fish);
	void STATIC_UpdateSurroundingPrey();
	void GetCableEndPoint(float DeltaTime, struct FVector* EndPoint);
	void StartFishing(const struct FVector& BaitTargetLocation, const struct FVector& BaitWaterSurfaceLocation);
	void OnFishReleased(class APrimalDinoCharacter* fish);
	void OnFishSnared(class APrimalDinoCharacter* fish);
	void ReleaseReeledFish();
	void STATIC_CaughtFish(class APrimalDinoCharacter* CaughtFish);
	void ReelingGameFinished(bool bSuccess);
	void StartReelingGame(class APrimalDinoCharacter* ReeledFish);
	void End_Fishing(bool releaseFish);
	void CheckFishingConditions(bool* retCanFish);
	void ReceiveBeginPlay();
	void GetCableAttachComponent(class USceneComponent** Comp);
	void UpdateCableComponent(float DeltaTime);
	void ReceiveTick(float* DeltaSeconds);
	bool STATIC_BPWeaponCanFire();
	void UserConstructionScript();
	void EndFishingEvent(bool releaseFish);
	void StartReelingGameEvent(class APrimalDinoCharacter* ReeledInFish);
	void ReelingGameFinishedEvent(bool bSuccess);
	void OnFishSnaredEvent(class APrimalDinoCharacter* fish);
	void OnFishReleasedEvent(class APrimalDinoCharacter* fish);
	void BPAnimNotifyCustomState_Begin(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration, class UAnimNotifyState** AnimNotifyObject);
	void ServerStartFishing(const struct FVector& BaitTargetLocation, const struct FVector& BaitWaterSurfaceLocation);
	void ServerEndFishing(bool releaseFish);
	void ServerTugCable(int remainingMoves);
	void TugCableEvent(int remainingMoves);
	void StartFishingEventMulti(const struct FVector& BaitTargetLocation, const struct FVector& BaitWaterSurfaceLocation);
	void DrawRotation(const struct FVector& NewParam, const struct FVector& NewParam1);
	void ServerStartDeathHarvest(class APrimalDinoCharacter* PrimalDinoChar);
	void ExecuteUbergraph_WeapFishingRod(int EntryPoint);
	void FishCaughtDispatcherSingle__DelegateSignature(float Caught_Fish_Wild_Scale, class AActor* Net_Owner, class UClass* Fish_Class, class UObject* Fish_Reference);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
