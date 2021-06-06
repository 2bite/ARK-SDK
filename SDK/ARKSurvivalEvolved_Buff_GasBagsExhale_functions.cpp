// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GasBagsExhale_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.BPOnInstigatorMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GasBagsExhale_C::BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.BPOnInstigatorMovementModeChangedNotify");

	ABuff_GasBagsExhale_C_BPOnInstigatorMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GasBagsExhale_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.BuffTickServer");

	ABuff_GasBagsExhale_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.SetupExhale
// ()
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GasBagsExhale_C::SetupExhale(const struct FVector& Direction, float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.SetupExhale");

	ABuff_GasBagsExhale_C_SetupExhale_Params params;
	params.Direction = Direction;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GasBagsExhale_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.BPActivated");

	ABuff_GasBagsExhale_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.UserConstructionScript
// ()

void ABuff_GasBagsExhale_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.UserConstructionScript");

	ABuff_GasBagsExhale_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.ExecuteUbergraph_Buff_GasBagsExhale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GasBagsExhale_C::ExecuteUbergraph_Buff_GasBagsExhale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GasBagsExhale.Buff_GasBagsExhale_C.ExecuteUbergraph_Buff_GasBagsExhale");

	ABuff_GasBagsExhale_C_ExecuteUbergraph_Buff_GasBagsExhale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
