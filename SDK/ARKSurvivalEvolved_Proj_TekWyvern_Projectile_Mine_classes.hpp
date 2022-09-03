#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_TekWyvern_Projectile_Mine_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C
// 0x0072 (0x06D2 - 0x0660)
class AProj_TekWyvern_Projectile_Mine_C : public AShooterProjectile
{
public:
	class UAudioComponent*                             IdleSound;                                                // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ChainBeam3;                                               // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ChainBeam2;                                               // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ChainBeam1;                                               // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BubbleMesh;                                               // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ElectricuteRange;                                         // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x068C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              DamagedActors;                                            // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              BeamToActors;                                             // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystem*                             ChainBeamTemplate;                                        // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          BubbleMeshMaterial;                                       // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BeamDamageType;                                           // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x06D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x06D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_TekWyvern_Projectile_Mine.Proj_TekWyvern_Projectile_Mine_C");
		return ptr;
	}


	void BPPostInitializeComponents();
	void UpdateBeam(TArray<class AActor*>* actors);
	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Proj_TekWyvern_Projectile_Mine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
