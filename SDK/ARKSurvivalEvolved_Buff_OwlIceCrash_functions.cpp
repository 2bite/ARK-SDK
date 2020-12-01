// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OwlIceCrash_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OwlIceCrash_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BuffTickClient");

	ABuff_OwlIceCrash_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OwlIceCrash_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPActivated");

	ABuff_OwlIceCrash_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPOnInstigatorCapsuleComponentHit
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ABuff_OwlIceCrash_C::BPOnInstigatorCapsuleComponentHit(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPOnInstigatorCapsuleComponentHit");

	ABuff_OwlIceCrash_C_BPOnInstigatorCapsuleComponentHit_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalImpulse != nullptr)
		*NormalImpulse = params.NormalImpulse;
	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OwlIceCrash_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPDeactivated");

	ABuff_OwlIceCrash_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.SetupIceCrash
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Frozen                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OwlIceCrash_C::SetupIceCrash(class APrimalCharacter* Character, bool Frozen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.SetupIceCrash");

	ABuff_OwlIceCrash_C_SetupIceCrash_Params params;
	params.Character = Character;
	params.Frozen = Frozen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPSetupForInstigator
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Private, Protected, BlueprintCallable, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OwlIceCrash_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPSetupForInstigator");

	ABuff_OwlIceCrash_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPOnInstigatorMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    newMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 newCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OwlIceCrash_C::BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* newMovementMode, unsigned char* newCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.BPOnInstigatorMovementModeChangedNotify");

	ABuff_OwlIceCrash_C_BPOnInstigatorMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;
	params.newMovementMode = newMovementMode;
	params.newCustomMode = newCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.UserConstructionScript
// ()

void ABuff_OwlIceCrash_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.UserConstructionScript");

	ABuff_OwlIceCrash_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.ExecuteUbergraph_Buff_OwlIceCrash
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OwlIceCrash_C::ExecuteUbergraph_Buff_OwlIceCrash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OwlIceCrash.Buff_OwlIceCrash_C.ExecuteUbergraph_Buff_OwlIceCrash");

	ABuff_OwlIceCrash_C_ExecuteUbergraph_Buff_OwlIceCrash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
