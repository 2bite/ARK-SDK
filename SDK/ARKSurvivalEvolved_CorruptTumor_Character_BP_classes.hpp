#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CorruptTumor_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CorruptTumor_Character_BP.CorruptTumor_Character_BP_C
// 0x035F (0x24E7 - 0x2188)
class ACorruptTumor_Character_BP_C : public ADino_Character_BP_C
{
public:
	class USceneComponent*                             Scene1;                                                   // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_CorruptTumor_C* DinoCharacterStatus_BP_CorruptTumor_C1;                   // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MaxGrowth;                                                // 0x2198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2199(0x0007) MISSED OFFSET
	double                                             LastTimeGrowth;                                           // 0x21A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrowthFrequency;                                          // 0x21A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrowthLevel;                                              // 0x21AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxGrowthLevel;                                           // 0x21B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DesiredScale;                                             // 0x21B4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalCharacter*>                    ListOfAttackers;                                          // 0x21C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APrimalCharacter*>                    ListOfFlyerAttackers;                                     // 0x21D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APrimalCharacter*>                    ListOfSmallAttackers;                                     // 0x21E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APrimalCharacter*>                    ListOfTankyAttackers;                                     // 0x21F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UClass*>                              PossibleSmallCorruptDinos;                                // 0x2200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              PossibleBigCorruptDinos;                                  // 0x2210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              PossibleFlyerCorruptDinos;                                // 0x2220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastTimeDamaged;                                          // 0x2230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeSpawnedDinos;                                     // 0x2238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnDinoFrequency;                                       // 0x2240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstTimeDamaged;                                         // 0x2244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2245(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    CorruptionParticle;                                       // 0x2248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATargetPoint*                                LeashActor;                                               // 0x2250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoOnce;                                                   // 0x2258(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2259(0x0007) MISSED OFFSET
	TArray<class FString>                              PossibleSmallCorruptDinosAssets;                          // 0x2260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              PossibleBigCorruptDinosAssets;                            // 0x2270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              PossibleFlyerCorruptDinosAssets;                          // 0x2280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CorruptGigaClassAsset;                                    // 0x2290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CallFunc_BPLoadClass_ReturnValue;                         // 0x22A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_ClassDynamicCast_AsPrimalDinoCharacter;            // 0x22A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ClassDynamicCast_CastSuccess;                      // 0x22B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x22B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x22B2(0x0006) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x22B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x22C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x22C1(0x000F) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x22D0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Loc3;                                  // 0x2300(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Scale2;                                // 0x230C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x2318(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x2324(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x2330(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x233C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x2340(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetScale_ReturnValue;                            // 0x2348(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x2354(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x2358(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x2364(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2365(0x0003) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2368(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x2370(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x2378(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x2379(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x237C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Loc2;                                  // 0x2388(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Scale;                                 // 0x2394(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x23A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x23A1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x23A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x23B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x23B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_Constant_ReturnValue;                  // 0x23B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x23C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue;                           // 0x23C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_ClampVectorSize_ReturnValue;                     // 0x23D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x23E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue2;                        // 0x23E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x23E9(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Scale3;                                // 0x23EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x23F8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetRelativeTransform_ReturnValue;                // 0x2400(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location2;                        // 0x2430(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation2;                        // 0x243C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale2;                           // 0x2448(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Loc;                                   // 0x2454(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x2460(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x2464(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x2468(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x246C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue3;             // 0x2470(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x2478(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2479(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x247C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x2480(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x2484(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2490(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x249C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x24A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x24A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x6];                                       // 0x24AA(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x24B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x24B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x24B9(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x24C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x24C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x24D4(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_SpawnDino_ReturnValue;                           // 0x24D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasBuffWithCustomTag_ReturnValue;                // 0x24E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasBuffWithCustomTag_ReturnValue2;               // 0x24E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x24E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x24E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x24E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x24E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasBuffWithCustomTag_ReturnValue3;               // 0x24E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CorruptTumor_Character_BP.CorruptTumor_Character_BP_C");
		return ptr;
	}


	bool BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void SpawnDinosBasedOnAttackerComposition();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BP_OnSetDeath();
	struct FVector GetScale();
	void ReceiveDestroyed();
	void UserConstructionScript();
	void Multi_SetScale(const struct FVector& Scale);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Multi_DestroyExplosionFX(const struct FVector& Loc, const struct FVector& Scale);
	void Multi_SpawnCorruptionFX();
	void Multi_PlaySpawnFX(const struct FVector& Loc, const struct FVector& Scale);
	void Multi_PlayPlaceFX(const struct FVector& Loc);
	void ExecuteUbergraph_CorruptTumor_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
