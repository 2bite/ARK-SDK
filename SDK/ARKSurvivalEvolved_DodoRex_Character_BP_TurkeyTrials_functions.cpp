// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DodoRex_Character_BP_TurkeyTrials_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADodoRex_Character_BP_TurkeyTrials_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C.BPCanCryo");

	ADodoRex_Character_BP_TurkeyTrials_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C.UserConstructionScript
// ()

void ADodoRex_Character_BP_TurkeyTrials_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C.UserConstructionScript");

	ADodoRex_Character_BP_TurkeyTrials_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C.ReceiveBeginPlay
// ()

void ADodoRex_Character_BP_TurkeyTrials_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C.ReceiveBeginPlay");

	ADodoRex_Character_BP_TurkeyTrials_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ADodoRex_Character_BP_TurkeyTrials_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C.BlueprintDrawFloatingHUD");

	ADodoRex_Character_BP_TurkeyTrials_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADodoRex_Character_BP_TurkeyTrials_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C.ReceiveTick");

	ADodoRex_Character_BP_TurkeyTrials_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C.ExecuteUbergraph_DodoRex_Character_BP_TurkeyTrials
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADodoRex_Character_BP_TurkeyTrials_C::ExecuteUbergraph_DodoRex_Character_BP_TurkeyTrials(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C.ExecuteUbergraph_DodoRex_Character_BP_TurkeyTrials");

	ADodoRex_Character_BP_TurkeyTrials_C_ExecuteUbergraph_DodoRex_Character_BP_TurkeyTrials_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
