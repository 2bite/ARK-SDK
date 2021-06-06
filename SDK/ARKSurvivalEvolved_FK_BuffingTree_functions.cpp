// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FK_BuffingTree_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FK_BuffingTree.FK_BuffingTree_C.ReceiveDestroyed
// ()

void AFK_BuffingTree_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_BuffingTree.FK_BuffingTree_C.ReceiveDestroyed");

	AFK_BuffingTree_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FK_BuffingTree.FK_BuffingTree_C.GetScale
// ()
// Parameters:
// struct FVector                 Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFK_BuffingTree_C::GetScale(struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_BuffingTree.FK_BuffingTree_C.GetScale");

	AFK_BuffingTree_C_GetScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function FK_BuffingTree.FK_BuffingTree_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFK_BuffingTree_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_BuffingTree.FK_BuffingTree_C.BPAdjustDamage");

	AFK_BuffingTree_C_BPAdjustDamage_Params params;
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


// Function FK_BuffingTree.FK_BuffingTree_C.UserConstructionScript
// ()

void AFK_BuffingTree_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_BuffingTree.FK_BuffingTree_C.UserConstructionScript");

	AFK_BuffingTree_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FK_BuffingTree.FK_BuffingTree_C.ReceiveBeginPlay
// ()

void AFK_BuffingTree_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_BuffingTree.FK_BuffingTree_C.ReceiveBeginPlay");

	AFK_BuffingTree_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FK_BuffingTree.FK_BuffingTree_C.TickGrowth
// ()

void AFK_BuffingTree_C::TickGrowth()
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_BuffingTree.FK_BuffingTree_C.TickGrowth");

	AFK_BuffingTree_C_TickGrowth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FK_BuffingTree.FK_BuffingTree_C.Multi_SetScale
// ()
// Parameters:
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void AFK_BuffingTree_C::Multi_SetScale(const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_BuffingTree.FK_BuffingTree_C.Multi_SetScale");

	AFK_BuffingTree_C_Multi_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FK_BuffingTree.FK_BuffingTree_C.ExecuteUbergraph_FK_BuffingTree
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFK_BuffingTree_C::ExecuteUbergraph_FK_BuffingTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FK_BuffingTree.FK_BuffingTree_C.ExecuteUbergraph_FK_BuffingTree");

	AFK_BuffingTree_C_ExecuteUbergraph_FK_BuffingTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
