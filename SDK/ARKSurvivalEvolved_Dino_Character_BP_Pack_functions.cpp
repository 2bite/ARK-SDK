// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Pack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackMemberDied
// ()
// Parameters:
// class ADino_Character_BP_Pack_C* DeadDino                       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Pack_C::PackMemberDied(class ADino_Character_BP_Pack_C* DeadDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackMemberDied");

	ADino_Character_BP_Pack_C_PackMemberDied_Params params;
	params.DeadDino = DeadDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BP_OnSetDeath
// ()

void ADino_Character_BP_Pack_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BP_OnSetDeath");

	ADino_Character_BP_Pack_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Get RadiusToJoinPack
// ()
// Parameters:
// bool                           belongsToOldPack               (Parm, ZeroConstructor, IsPlainOldData)
// float                          firstTimeRadius                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Pack_C::Get_RadiusToJoinPack(bool belongsToOldPack, float* firstTimeRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Get RadiusToJoinPack");

	ADino_Character_BP_Pack_C_Get_RadiusToJoinPack_Params params;
	params.belongsToOldPack = belongsToOldPack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (firstTimeRadius != nullptr)
		*firstTimeRadius = params.firstTimeRadius;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.CanDinoBeAddedToPack
// ()
// Parameters:
// class APrimalDinoCharacter*    NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          oldPack                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           canBeAdded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Pack_C::CanDinoBeAddedToPack(class APrimalDinoCharacter* NewParam, TArray<class AActor*>* oldPack, bool* canBeAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.CanDinoBeAddedToPack");

	ADino_Character_BP_Pack_C_CanDinoBeAddedToPack_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oldPack != nullptr)
		*oldPack = params.oldPack;
	if (canBeAdded != nullptr)
		*canBeAdded = params.canBeAdded;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Add Dino to Pack
// ()
// Parameters:
// class AActor*                  ActorToAdd                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Pack_C::Add_Dino_to_Pack(class AActor* ActorToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Add Dino to Pack");

	ADino_Character_BP_Pack_C_Add_Dino_to_Pack_Params params;
	params.ActorToAdd = ActorToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsValidClassForPack
// ()
// Parameters:
// class AActor*                  joiningActor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Pack_C::IsValidClassForPack(class AActor* joiningActor, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsValidClassForPack");

	ADino_Character_BP_Pack_C_IsValidClassForPack_Params params;
	params.joiningActor = joiningActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPTimerServer
// ()

void ADino_Character_BP_Pack_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPTimerServer");

	ADino_Character_BP_Pack_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Put Join Pack On Cooldown
// ()
// Parameters:
// float                          DurationOfPackPrevention       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Pack_C::Put_Join_Pack_On_Cooldown(float DurationOfPackPrevention)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Put Join Pack On Cooldown");

	ADino_Character_BP_Pack_C_Put_Join_Pack_On_Cooldown_Params params;
	params.DurationOfPackPrevention = DurationOfPackPrevention;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Can Join Pack
// ()
// Parameters:
// bool                           Can_Join                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Pack_C::Can_Join_Pack(bool* Can_Join)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Can Join Pack");

	ADino_Character_BP_Pack_C_Can_Join_Pack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_Join != nullptr)
		*Can_Join = params.Can_Join;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Pack_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPShouldForceFlee");

	ADino_Character_BP_Pack_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ClearPack
// ()

void ADino_Character_BP_Pack_C::ClearPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ClearPack");

	ADino_Character_BP_Pack_C_ClearPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.InitPackDino
// ()
// Parameters:
// bool                           isBeginPlay                    (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Pack_C::InitPackDino(bool isBeginPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.InitPackDino");

	ADino_Character_BP_Pack_C_InitPackDino_Params params;
	params.isBeginPlay = isBeginPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackRoar
// ()

void ADino_Character_BP_Pack_C::PackRoar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackRoar");

	ADino_Character_BP_Pack_C_PackRoar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.UpdatePack
// ()

void ADino_Character_BP_Pack_C::UpdatePack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.UpdatePack");

	ADino_Character_BP_Pack_C_UpdatePack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Pack_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPDoAttack");

	ADino_Character_BP_Pack_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Pack_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanRiderAttack");

	ADino_Character_BP_Pack_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADino_Character_BP_Pack_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanAttack");

	ADino_Character_BP_Pack_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsPackLeader
// ()
// Parameters:
// bool                           bIsLeader                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Pack_C::IsPackLeader(bool* bIsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsPackLeader");

	ADino_Character_BP_Pack_C_IsPackLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsLeader != nullptr)
		*bIsLeader = params.bIsLeader;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPUnstasis
// ()

void ADino_Character_BP_Pack_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPUnstasis");

	ADino_Character_BP_Pack_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.GatherPack
// ()

void ADino_Character_BP_Pack_C::GatherPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.GatherPack");

	ADino_Character_BP_Pack_C_GatherPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.OverrideRandomWanderLocation
// ()
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Pack_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.OverrideRandomWanderLocation");

	ADino_Character_BP_Pack_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.UserConstructionScript
// ()

void ADino_Character_BP_Pack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.UserConstructionScript");

	ADino_Character_BP_Pack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ReceiveBeginPlay
// ()

void ADino_Character_BP_Pack_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ReceiveBeginPlay");

	ADino_Character_BP_Pack_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ExecuteUbergraph_Dino_Character_BP_Pack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Pack_C::ExecuteUbergraph_Dino_Character_BP_Pack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ExecuteUbergraph_Dino_Character_BP_Pack");

	ADino_Character_BP_Pack_C_ExecuteUbergraph_Dino_Character_BP_Pack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
