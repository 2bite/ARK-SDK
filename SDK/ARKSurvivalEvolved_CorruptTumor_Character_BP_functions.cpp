// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CorruptTumor_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.BP_PreventMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACorruptTumor_Character_BP_C::BP_PreventMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.BP_PreventMovementMode");

	ACorruptTumor_Character_BP_C_BP_PreventMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.SpawnDinosBasedOnAttackerComposition
// ()

void ACorruptTumor_Character_BP_C::SpawnDinosBasedOnAttackerComposition()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.SpawnDinosBasedOnAttackerComposition");

	ACorruptTumor_Character_BP_C_SpawnDinosBasedOnAttackerComposition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACorruptTumor_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.BPAdjustDamage");

	ACorruptTumor_Character_BP_C_BPAdjustDamage_Params params;
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


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.BP_OnSetDeath
// ()

void ACorruptTumor_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.BP_OnSetDeath");

	ACorruptTumor_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.GetScale
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ACorruptTumor_Character_BP_C::GetScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.GetScale");

	ACorruptTumor_Character_BP_C_GetScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.ReceiveDestroyed
// ()

void ACorruptTumor_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.ReceiveDestroyed");

	ACorruptTumor_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.UserConstructionScript
// ()

void ACorruptTumor_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.UserConstructionScript");

	ACorruptTumor_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_SetScale
// ()
// Parameters:
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void ACorruptTumor_Character_BP_C::Multi_SetScale(const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_SetScale");

	ACorruptTumor_Character_BP_C_Multi_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.ReceiveBeginPlay
// ()

void ACorruptTumor_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.ReceiveBeginPlay");

	ACorruptTumor_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ACorruptTumor_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.ReceiveTick");

	ACorruptTumor_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_DestroyExplosionFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void ACorruptTumor_Character_BP_C::Multi_DestroyExplosionFX(const struct FVector& Loc, const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_DestroyExplosionFX");

	ACorruptTumor_Character_BP_C_Multi_DestroyExplosionFX_Params params;
	params.Loc = Loc;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_SpawnCorruptionFX
// ()

void ACorruptTumor_Character_BP_C::Multi_SpawnCorruptionFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_SpawnCorruptionFX");

	ACorruptTumor_Character_BP_C_Multi_SpawnCorruptionFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_PlaySpawnFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void ACorruptTumor_Character_BP_C::Multi_PlaySpawnFX(const struct FVector& Loc, const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_PlaySpawnFX");

	ACorruptTumor_Character_BP_C_Multi_PlaySpawnFX_Params params;
	params.Loc = Loc;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_PlayPlaceFX
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void ACorruptTumor_Character_BP_C::Multi_PlayPlaceFX(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_PlayPlaceFX");

	ACorruptTumor_Character_BP_C_Multi_PlayPlaceFX_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.ExecuteUbergraph_CorruptTumor_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACorruptTumor_Character_BP_C::ExecuteUbergraph_CorruptTumor_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.ExecuteUbergraph_CorruptTumor_Character_BP");

	ACorruptTumor_Character_BP_C_ExecuteUbergraph_CorruptTumor_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
