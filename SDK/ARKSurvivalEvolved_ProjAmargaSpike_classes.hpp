#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjAmargaSpike_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjAmargaSpike.ProjAmargaSpike_C
// 0x0150 (0x07B0 - 0x0660)
class AProjAmargaSpike_C : public AShooterProjectile
{
public:
	class UAudioComponent*                             Projectile_SFX;                                           // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpSpikeMesh_Alpha_962609E44E7D4E198427F182E1ACB165;// 0x0668(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_LerpSpikeMesh__Direction_962609E44E7D4E198427F182E1ACB165;// 0x066C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x066D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_LerpSpikeMesh;                                   // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpikeStructureClass;                                      // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             RegenStructureParticle;                                   // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        RegenStructureColors;                                     // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  FailedForInstSound;                                       // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDistBetweenSpikes;                                     // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06A4(0x0004) MISSED OFFSET
	class UParticleSystem*                             ImpactParticle;                                           // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventSpikeSpawnUnderwater;                             // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	TArray<class FString>                              BounceOnImpactClasses;                                    // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CachedNumBounces;                                         // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxBounces;                                               // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ImpactSound;                                              // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x06D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FVector>                             K2Node_CustomEvent_Locs;                                  // 0x06E0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_FailedForInst;                         // 0x06F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsSpawn;                               // 0x06F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x06F2(0x0002) MISSED OFFSET
	struct FRotator                                    K2Node_CustomEvent_SpawnRot;                              // 0x06F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0700(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0701(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0702(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0704(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Array_Get_Item;                                  // 0x0708(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0714(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0715(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Array_Get_Item2;                                 // 0x0718(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0724(0x0004) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllLocalPlayerCharacters_ReturnValue;         // 0x0728(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x0738(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_Array_Get_Item3;                                 // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0748(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0749(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x074A(0x0002) MISSED OFFSET
	int                                                CallFunc_SelectInt_ReturnValue;                           // 0x074C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0758(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0759(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0760(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0768(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue;                  // 0x0769(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlliedWithOtherTeam_ReturnValue;               // 0x076A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x076B(0x0001) MISSED OFFSET
	int                                                CallFunc_SelectInt_ReturnValue2;                          // 0x076C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_Array_Get_Item4;                                 // 0x0770(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VLerp_ReturnValue;                               // 0x0780(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_LinearColorToVector_ReturnValue;            // 0x078C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0798(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0799(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x07A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_Actor;                                 // 0x07A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjAmargaSpike.ProjAmargaSpike_C");
		return ptr;
	}


	void BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void STATIC_OnExplode(struct FHitResult* Result);
	void UserConstructionScript();
	void Timeline_LerpSpikeMesh__FinishedFunc();
	void Timeline_LerpSpikeMesh__UpdateFunc();
	void Multi_PostExplode(bool FailedForInst, bool IsSpawn, const struct FRotator& SpawnRot, TArray<struct FVector>* Locs);
	void LerpSpikeMesh();
	void Multi_AddMoveIgnoreActor(class AActor* Actor);
	void ExecuteUbergraph_ProjAmargaSpike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
