#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapClimbPick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapClimbPick.WeapClimbPick_C
// 0x0064 (0x14C4 - 0x1460)
class AWeapClimbPick_C : public AShooterWeapon_Climb
{
public:
	class UStaticMeshComponent*                        ClimbingPickLeftTPV;                                      // 0x1460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ClimbAnchorParticles;                                     // 0x1468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ClimbAnchor;                                              // 0x1470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ClimbTargetParticles;                                     // 0x1478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ClimbTarget;                                              // 0x1480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ClimbingPickLeft;                                         // 0x1488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ClimbingPickTPV;                                          // 0x1490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ClimbingPick;                                             // 0x1498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbAnchorInterpSpeed;                                   // 0x14A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbTargetInterpSpeed;                                   // 0x14A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Valid_Template;                                           // 0x14A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Walkable_Template;                                        // 0x14B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Invalid_Template;                                         // 0x14B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingFOVMultiplier;                                    // 0x14C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapClimbPick.WeapClimbPick_C");
		return ptr;
	}


	void BPOnWeaponAnimPlayedNotify(float* InPlayRate, bool* bPlayBothFirstAndThirdPerson, bool* bReplicate, bool* bReplicateToInstigator, bool* bPauseOnFinish1P, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer, struct FWeaponAnim* Animation);
	void StartUnequipEvent();
	float BPModifyFOV(float* inFOV);
	void SetSourceLocation(class UParticleSystemComponent* Particle_System, const struct FVector& NewSourcePoint);
	void SetTemplateTo(class UParticleSystemComponent* Particle_System, class UParticleSystem* New_Template);
	void BPUpdateClimbTarget(float* DeltaSeconds, bool* bClimbing, bool* bCanClimb, bool* bCanLand, bool* bHudVisible, struct FVector* AnchorPosition, struct FVector* AnchorNormal, struct FVector* ClimbLocation, struct FVector* ClimbNormal);
	void UserConstructionScript();
	void ExecuteUbergraph_WeapClimbPick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
