// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FishingNetStopMovement_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BPHandleOnStopFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FishingNetStopMovement_C::BPHandleOnStopFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BPHandleOnStopFire");

	ABuff_FishingNetStopMovement_C_BPHandleOnStopFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.ReceiveBeginPlay
// ()

void ABuff_FishingNetStopMovement_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.ReceiveBeginPlay");

	ABuff_FishingNetStopMovement_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FishingNetStopMovement_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BuffTickClient");

	ABuff_FishingNetStopMovement_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BPPreventInstigatorMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_FishingNetStopMovement_C::BPPreventInstigatorMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BPPreventInstigatorMovementMode");

	ABuff_FishingNetStopMovement_C_BPPreventInstigatorMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FishingNetStopMovement_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BuffTickServer");

	ABuff_FishingNetStopMovement_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BPHandleOnStartFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FishingNetStopMovement_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.BPHandleOnStartFire");

	ABuff_FishingNetStopMovement_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.UserConstructionScript
// ()

void ABuff_FishingNetStopMovement_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.UserConstructionScript");

	ABuff_FishingNetStopMovement_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.ExecuteUbergraph_Buff_FishingNetStopMovement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FishingNetStopMovement_C::ExecuteUbergraph_Buff_FishingNetStopMovement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C.ExecuteUbergraph_Buff_FishingNetStopMovement");

	ABuff_FishingNetStopMovement_C_ExecuteUbergraph_Buff_FishingNetStopMovement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
