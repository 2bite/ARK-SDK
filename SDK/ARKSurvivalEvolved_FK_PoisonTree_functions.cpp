// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FK_PoisonTree_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FK_PoisonTree.FK_PoisonTree_C.ReceiveDestroyed
// ()

void AFK_PoisonTree_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_PoisonTree.FK_PoisonTree_C.ReceiveDestroyed");

	AFK_PoisonTree_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FK_PoisonTree.FK_PoisonTree_C.GetScale
// ()
// Parameters:
// struct FVector                 Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFK_PoisonTree_C::GetScale(struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_PoisonTree.FK_PoisonTree_C.GetScale");

	AFK_PoisonTree_C_GetScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function FK_PoisonTree.FK_PoisonTree_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFK_PoisonTree_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_PoisonTree.FK_PoisonTree_C.BPAdjustDamage");

	AFK_PoisonTree_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FK_PoisonTree.FK_PoisonTree_C.UserConstructionScript
// ()

void AFK_PoisonTree_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_PoisonTree.FK_PoisonTree_C.UserConstructionScript");

	AFK_PoisonTree_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FK_PoisonTree.FK_PoisonTree_C.ReceiveBeginPlay
// ()

void AFK_PoisonTree_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_PoisonTree.FK_PoisonTree_C.ReceiveBeginPlay");

	AFK_PoisonTree_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FK_PoisonTree.FK_PoisonTree_C.TickGrowth
// ()

void AFK_PoisonTree_C::TickGrowth()
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_PoisonTree.FK_PoisonTree_C.TickGrowth");

	AFK_PoisonTree_C_TickGrowth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FK_PoisonTree.FK_PoisonTree_C.BndEvt__HitCapsule_K2Node_ComponentBoundEvent_354_ComponentHitSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AFK_PoisonTree_C::BndEvt__HitCapsule_K2Node_ComponentBoundEvent_354_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_PoisonTree.FK_PoisonTree_C.BndEvt__HitCapsule_K2Node_ComponentBoundEvent_354_ComponentHitSignature__DelegateSignature");

	AFK_PoisonTree_C_BndEvt__HitCapsule_K2Node_ComponentBoundEvent_354_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function FK_PoisonTree.FK_PoisonTree_C.DestroyTree
// ()

void AFK_PoisonTree_C::DestroyTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_PoisonTree.FK_PoisonTree_C.DestroyTree");

	AFK_PoisonTree_C_DestroyTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FK_PoisonTree.FK_PoisonTree_C.ExecuteUbergraph_FK_PoisonTree
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFK_PoisonTree_C::ExecuteUbergraph_FK_PoisonTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_PoisonTree.FK_PoisonTree_C.ExecuteUbergraph_FK_PoisonTree");

	AFK_PoisonTree_C_ExecuteUbergraph_FK_PoisonTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
