// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CruiseMissileStopMovement_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.ReceiveBeginPlay
// ()

void ABuff_CruiseMissileStopMovement_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.ReceiveBeginPlay");

	ABuff_CruiseMissileStopMovement_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BPPreventInstigatorMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_CruiseMissileStopMovement_C::BPPreventInstigatorMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BPPreventInstigatorMovementMode");

	ABuff_CruiseMissileStopMovement_C_BPPreventInstigatorMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CruiseMissileStopMovement_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BuffTickServer");

	ABuff_CruiseMissileStopMovement_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BPHandleOnStartFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CruiseMissileStopMovement_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BPHandleOnStartFire");

	ABuff_CruiseMissileStopMovement_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.UserConstructionScript
// ()

void ABuff_CruiseMissileStopMovement_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.UserConstructionScript");

	ABuff_CruiseMissileStopMovement_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.ExecuteUbergraph_Buff_CruiseMissileStopMovement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CruiseMissileStopMovement_C::ExecuteUbergraph_Buff_CruiseMissileStopMovement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.ExecuteUbergraph_Buff_CruiseMissileStopMovement");

	ABuff_CruiseMissileStopMovement_C_ExecuteUbergraph_Buff_CruiseMissileStopMovement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
