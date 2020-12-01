#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMekSwarm_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjMekSwarm.ProjMekSwarm_C
// 0x0161 (0x0979 - 0x0818)
class AProjMekSwarm_C : public AShooterProjectile_Swarm
{
public:
	struct FVector                                     SwarmStartLoc;                                            // 0x0818(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SwarmStartRot;                                            // 0x0824(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwarmStarted;                                             // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	class UParticleSystem*                             MissileSpawnParticleSystem;                               // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               FireSockets;                                              // 0x0840(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UParticleSystemComponent*                    K2Node_CustomEvent_Comp;                                  // 0x0850(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_BoidIndex;                                   // 0x0858(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x085C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    K2Node_Event_BoidParticles;                               // 0x0860(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  K2Node_Event_Hit;                                         // 0x0868(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	struct FHitResult                                  K2Node_Event_Result;                                      // 0x08F0(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0978(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjMekSwarm.ProjMekSwarm_C");
		return ptr;
	}


	void SetupMissileSpawnParticles(class USkeletalMeshComponent* MekMesh, const struct FName& BoneName);
	struct FVector2D PointOnGrid(int ThisIndex, int Width, int Height, float HorizScale, float VertScale);
	void ReceiveTick(float* DeltaSeconds);
	void BPGetBoidSpawnLocationAndVelocity(int* BoidIndex, struct FBoid* BoidData, struct FVector* SpawnLocation, struct FVector* SpawnVelocity);
	void UserConstructionScript();
	void BPOnBoidExplode(int* BoidIndex, class UParticleSystemComponent** BoidParticles, struct FHitResult* Hit);
	void OnExplode(struct FHitResult* Result);
	void DisableMissleParticles(class UParticleSystemComponent* Comp);
	void ExecuteUbergraph_ProjMekSwarm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
