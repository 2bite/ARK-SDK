// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basilosaurus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasilosaurus_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.BlueprintCanRiderAttack");

	ABasilosaurus_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.OverrideRandomWanderLocation
// ()
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasilosaurus_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.OverrideRandomWanderLocation");

	ABasilosaurus_Character_BP_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.IsOfFollowTypeClass
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoToCheck                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidClass                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABasilosaurus_Character_BP_C::IsOfFollowTypeClass(class APrimalDinoCharacter* DinoToCheck, bool* ValidClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.IsOfFollowTypeClass");

	ABasilosaurus_Character_BP_C_IsOfFollowTypeClass_Params params;
	params.DinoToCheck = DinoToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidClass != nullptr)
		*ValidClass = params.ValidClass;
}


// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.GetValidFollowingTargets
// ()
// Parameters:
// TArray<class APrimalDinoCharacter*> ValidDinos                     (Parm, OutParm, ZeroConstructor)

void ABasilosaurus_Character_BP_C::GetValidFollowingTargets(TArray<class APrimalDinoCharacter*>* ValidDinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.GetValidFollowingTargets");

	ABasilosaurus_Character_BP_C_GetValidFollowingTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidDinos != nullptr)
		*ValidDinos = params.ValidDinos;
}


// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.BPFedWakingTameEvent
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void ABasilosaurus_Character_BP_C::BPFedWakingTameEvent(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.BPFedWakingTameEvent");

	ABasilosaurus_Character_BP_C_BPFedWakingTameEvent_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABasilosaurus_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.ReceiveAnyDamage");

	ABasilosaurus_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.BPTimerServer
// ()

void ABasilosaurus_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.BPTimerServer");

	ABasilosaurus_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.UserConstructionScript
// ()

void ABasilosaurus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.UserConstructionScript");

	ABasilosaurus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.ReceiveBeginPlay
// ()

void ABasilosaurus_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.ReceiveBeginPlay");

	ABasilosaurus_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.AnimNotify_StopMove
// ()

void ABasilosaurus_Character_BP_C::AnimNotify_StopMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.AnimNotify_StopMove");

	ABasilosaurus_Character_BP_C_AnimNotify_StopMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.ExecuteUbergraph_Basilosaurus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABasilosaurus_Character_BP_C::ExecuteUbergraph_Basilosaurus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.ExecuteUbergraph_Basilosaurus_Character_BP");

	ABasilosaurus_Character_BP_C_ExecuteUbergraph_Basilosaurus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
