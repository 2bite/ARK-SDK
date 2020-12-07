// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ShapeshifterSwipeAttack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.ReceiveBeginPlay
// ()

void ABuff_ShapeshifterSwipeAttack_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.ReceiveBeginPlay");

	ABuff_ShapeshifterSwipeAttack_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ShapeshifterSwipeAttack_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.AllowPostProcessEffect");

	ABuff_ShapeshifterSwipeAttack_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ShapeshifterSwipeAttack_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BPDeactivated");

	ABuff_ShapeshifterSwipeAttack_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ShapeshifterSwipeAttack_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BPSetupForInstigator");

	ABuff_ShapeshifterSwipeAttack_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ShapeshifterSwipeAttack_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BuffTickServer");

	ABuff_ShapeshifterSwipeAttack_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ShapeshifterSwipeAttack_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BPActivated");

	ABuff_ShapeshifterSwipeAttack_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.UserConstructionScript
// ()

void ABuff_ShapeshifterSwipeAttack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.UserConstructionScript");

	ABuff_ShapeshifterSwipeAttack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.ExecuteUbergraph_Buff_ShapeshifterSwipeAttack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ShapeshifterSwipeAttack_C::ExecuteUbergraph_Buff_ShapeshifterSwipeAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.ExecuteUbergraph_Buff_ShapeshifterSwipeAttack");

	ABuff_ShapeshifterSwipeAttack_C_ExecuteUbergraph_Buff_ShapeshifterSwipeAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
