#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementNode_Base_Horde_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElementNode_Base_Horde.ElementNode_Base_Horde_C
// 0x029F (0x19D0 - 0x1731)
class AElementNode_Base_Horde_C : public ASupplyCrate_Base_Horde_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1731(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    EnvParticles;                                             // 0x1738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DetectionEmitter;                                         // 0x1740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent_1;                                        // 0x1748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x1750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      DifficultyElementScales;                                  // 0x1758(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MinAmtOfElementToGive;                                    // 0x1768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAmtOfElementToGive;                                    // 0x176C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseHarvestImplementation;                                // 0x1770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1771(0x0003) MISSED OFFSET
	int                                                MinElementPerSwing;                                       // 0x1774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxElementPerSwing;                                       // 0x1778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MainElementGiven;                                         // 0x177C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalElementToGive;                                       // 0x1780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundTraceZOffset;                                       // 0x1784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallBHorizontalOffset;                                    // 0x1788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallBDistanceOffset;                                      // 0x178C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallAHorizontalOffset;                                    // 0x1790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallADistanceOffset;                                      // 0x1794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallBRotationOffset;                                      // 0x1798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallARotationOffset;                                      // 0x179C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumofGroups;                                              // 0x17A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumOfLayers;                                              // 0x17A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingRadius;                                           // 0x17A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentLayerOffset;                                       // 0x17AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LayerOffset;                                              // 0x17B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentRotationOffset;                                    // 0x17B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RotationOffset;                                           // 0x17B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallAScaleMaxScale;                                       // 0x17BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallBMaxScale;                                            // 0x17C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallAZOffset;                                             // 0x17C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallBZOffset;                                             // 0x17C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bVisualDebug;                                             // 0x17CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x17CD(0x0003) MISSED OFFSET
	float                                              WallAMinScale;                                            // 0x17D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallBMinScale;                                            // 0x17D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentGroup;                                             // 0x17D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentLayer;                                             // 0x17DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentRadius;                                            // 0x17E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalMainElement;                                         // 0x17E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalSecondaryElement;                                    // 0x17E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ActualSecondaryElement;                                   // 0x17EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondaryZOffset;                                         // 0x17F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x17F4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              WallAClasses;                                             // 0x17F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              WallBClasses;                                             // 0x1808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ElementPerLayer;                                          // 0x1818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroupSpawnDelay;                                          // 0x181C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LayerSpawnDelay;                                          // 0x1820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1824(0x0004) MISSED OFFSET
	class UMaterialInterface*                          HarvestedMaterial;                                        // 0x1828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentScaleMultiplier;                                   // 0x1830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmountOfScaleToDecrease;                                  // 0x1834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             DeployStart;                                              // 0x1838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraShakeOnSpawn;                                      // 0x1840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseDelayedSpawn;                                         // 0x1841(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x1842(0x0006) MISSED OFFSET
	class AActor*                                      Matinee;                                                  // 0x1848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x1850(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x1854(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x1858(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1859(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x185A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x185B(0x0005) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_Conv_VectorToTransform_ReturnValue;              // 0x1860(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x1890(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AElementNodeMatinee_C*                       CallFunc_FinishSpawningActor_ReturnValue;                 // 0x1898(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x18A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x18A1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x18A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x18B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x18BC(0x0004) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x18C0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue2;        // 0x18F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ANote_Blueprint_MatineeTest_C*               CallFunc_FinishSpawningActor_ReturnValue2;                // 0x18F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x1900(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x1901(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x1908(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x1910(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x191C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x1920(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x1930(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x1934(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x1938(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x1940(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1941(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1944(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1948(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x194C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_ActorToScale;                          // 0x1950(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_ScaleToSet;                            // 0x1958(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x1964(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1965(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x1968(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x196C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x1970(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode;                // 0x197C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x197D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x197E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x197F(0x0001) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x1980(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x1984(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1985(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x1986(0x0002) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item2;                                 // 0x1988(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue5;                         // 0x1990(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x1994(0x0004) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x1998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x19A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x19A1(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x19A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x19B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x19B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x19B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x6];                                       // 0x19BA(0x0006) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x19C0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElementNode_Base_Horde.ElementNode_Base_Horde_C");
		return ptr;
	}


	void BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void BPHitEffect(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, class UPrimitiveComponent** HitComponent, struct FVector* DamageLoc, struct FRotator* HitNormal, struct FDamageEvent* DamageEvent);
	void OverrideDestroyedMeshTextures(class UMeshComponent** MeshComp);
	void DestroyStructuresAtLocation(const struct FVector& Location, float Radius);
	void RunLandSequence();
	void ReceiveTick(float* DeltaSeconds);
	void Initiate_Horde_Mode();
	void OpenCrate();
	void ColorizeForHarvest();
	void SpawnSecondarySingle(bool bIsWallA, const struct FVector& StartTrace, const struct FVector& EndTrace, const struct FRotator& Rotation);
	void SpawnSecondaryGroup();
	void ConfigureWaves();
	void OnRep_bHasLanded();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void GetLocation();
	void SpawnSecondaryLayer();
	void ClearCurrentBlockades();
	void SetBlockadeScale(class AActor* ActorToScale, const struct FVector& ScaleToSet);
	void ROC_ColorizeForHarvest();
	void ROC_StartInitiatedEmiiter();
	void KillActiveNode();
	void ExecuteUbergraph_ElementNode_Base_Horde(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
