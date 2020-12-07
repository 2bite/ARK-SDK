#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_Proj_Meteor_Fragment_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C
// 0x01C0 (0x0820 - 0x0660)
class AEX_Proj_Meteor_Fragment_C : public AShooterProjectile
{
public:
	class UParticleSystemComponent*                    Drips;                                                    // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Sound;                                                    // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Accel;                                                    // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Max_Velocity;                                             // 0x0674(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Max_Velocity_LOC;                                         // 0x0680(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Fractured;                                                // 0x068C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x068D(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0690(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0694(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x0698(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x069C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x06A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x06A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x06A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x06AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor2;                   // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp2;                    // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_ComponentBoundEvent_NormalImpulse;                 // 0x06C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_Hit;                           // 0x06D8(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x0760(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex;                // 0x0770(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep;                    // 0x0774(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0775(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult;                   // 0x0778(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	struct FVector                                     CallFunc_GetActorScale3D_ReturnValue;                     // 0x0800(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x080C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_ApplyRadialDamage_IgnoreActors_RefProperty;      // 0x0810(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C");
		return ptr;
	}


	void STATIC_Fracture();
	void STATIC_OnExplode(struct FHitResult* Result);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void On_Impact();
	void BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit);
	void BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void Update_Visuals();
	void ExecuteUbergraph_EX_Proj_Meteor_Fragment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
