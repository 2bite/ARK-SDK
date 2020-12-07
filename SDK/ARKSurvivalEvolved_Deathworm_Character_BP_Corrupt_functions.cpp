// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deathworm_Character_BP_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADeathworm_Character_BP_Corrupt_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.BlueprintAnimNotifyCustomEvent");

	ADeathworm_Character_BP_Corrupt_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.BP_OnSetDeath
// ()

void ADeathworm_Character_BP_Corrupt_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.BP_OnSetDeath");

	ADeathworm_Character_BP_Corrupt_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.UserConstructionScript
// ()

void ADeathworm_Character_BP_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.UserConstructionScript");

	ADeathworm_Character_BP_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.SetSpawnLoc
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void ADeathworm_Character_BP_Corrupt_C::SetSpawnLoc(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.SetSpawnLoc");

	ADeathworm_Character_BP_Corrupt_C_SetSpawnLoc_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.ReceiveBeginPlay
// ()

void ADeathworm_Character_BP_Corrupt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.ReceiveBeginPlay");

	ADeathworm_Character_BP_Corrupt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADeathworm_Character_BP_Corrupt_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.ReceiveTick");

	ADeathworm_Character_BP_Corrupt_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.BPTriggerStasisEvent
// ()

void ADeathworm_Character_BP_Corrupt_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.BPTriggerStasisEvent");

	ADeathworm_Character_BP_Corrupt_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.Teleported
// ()

void ADeathworm_Character_BP_Corrupt_C::Teleported()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.Teleported");

	ADeathworm_Character_BP_Corrupt_C_Teleported_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.TemporarilySetTeleporting
// ()

void ADeathworm_Character_BP_Corrupt_C::TemporarilySetTeleporting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.TemporarilySetTeleporting");

	ADeathworm_Character_BP_Corrupt_C_TemporarilySetTeleporting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.TurnOffTeleporting
// ()

void ADeathworm_Character_BP_Corrupt_C::TurnOffTeleporting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.TurnOffTeleporting");

	ADeathworm_Character_BP_Corrupt_C_TurnOffTeleporting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.ExecuteUbergraph_Deathworm_Character_BP_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeathworm_Character_BP_Corrupt_C::ExecuteUbergraph_Deathworm_Character_BP_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deathworm_Character_BP_Corrupt.Deathworm_Character_BP_Corrupt_C.ExecuteUbergraph_Deathworm_Character_BP_Corrupt");

	ADeathworm_Character_BP_Corrupt_C_ExecuteUbergraph_Deathworm_Character_BP_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
