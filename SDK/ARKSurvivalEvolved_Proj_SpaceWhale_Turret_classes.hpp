#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_SpaceWhale_Turret_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C
// 0x012A (0x078A - 0x0660)
class AProj_SpaceWhale_Turret_C : public AShooterProjectile
{
public:
	class UChildActorComponent*                        ChildActor1;                                              // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x0668(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxStructureImpactDistance;                               // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0678(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	struct FHitResult                                  K2Node_Event_Result;                                      // 0x0688(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x0710(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x071C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x0728(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x0734(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x0740(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x074C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x0758(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x0760(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x0770(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x0774(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0775(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue;                               // 0x0778(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x077C(0x0004) MISSED OFFSET
	class APrimalStructure*                            K2Node_DynamicCast_AsPrimalStructure;                     // 0x0780(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0788(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0789(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_SpaceWhale_Turret.Proj_SpaceWhale_Turret_C");
		return ptr;
	}


	bool BPIgnoreRadialDamageVictim(class AActor** Victim);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnExplode(struct FHitResult* Result);
	void ExecuteUbergraph_Proj_SpaceWhale_Turret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
