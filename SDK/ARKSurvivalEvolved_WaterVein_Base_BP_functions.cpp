// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterVein_Base_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterVein_Base_BP.WaterVein_Base_BP_C.BlueprintDrawHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AWaterVein_Base_BP_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterVein_Base_BP.WaterVein_Base_BP_C.BlueprintDrawHUD");

	AWaterVein_Base_BP_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterVein_Base_BP.WaterVein_Base_BP_C.UpdateWaterVisuals
// ()

void AWaterVein_Base_BP_C::UpdateWaterVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterVein_Base_BP.WaterVein_Base_BP_C.UpdateWaterVisuals");

	AWaterVein_Base_BP_C_UpdateWaterVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterVein_Base_BP.WaterVein_Base_BP_C.ReceiveBeginPlay
// ()

void AWaterVein_Base_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterVein_Base_BP.WaterVein_Base_BP_C.ReceiveBeginPlay");

	AWaterVein_Base_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterVein_Base_BP.WaterVein_Base_BP_C.BPGetMultiUseEntries
// (Static, Public, Private, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AWaterVein_Base_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterVein_Base_BP.WaterVein_Base_BP_C.BPGetMultiUseEntries");

	AWaterVein_Base_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function WaterVein_Base_BP.WaterVein_Base_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWaterVein_Base_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterVein_Base_BP.WaterVein_Base_BP_C.BPTryMultiUse");

	AWaterVein_Base_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WaterVein_Base_BP.WaterVein_Base_BP_C.UserConstructionScript
// ()

void AWaterVein_Base_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterVein_Base_BP.WaterVein_Base_BP_C.UserConstructionScript");

	AWaterVein_Base_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterVein_Base_BP.WaterVein_Base_BP_C.PostInitUpdateWaterVisuals
// ()

void AWaterVein_Base_BP_C::PostInitUpdateWaterVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterVein_Base_BP.WaterVein_Base_BP_C.PostInitUpdateWaterVisuals");

	AWaterVein_Base_BP_C_PostInitUpdateWaterVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterVein_Base_BP.WaterVein_Base_BP_C.ExecuteUbergraph_WaterVein_Base_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterVein_Base_BP_C::ExecuteUbergraph_WaterVein_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterVein_Base_BP.WaterVein_Base_BP_C.ExecuteUbergraph_WaterVein_Base_BP");

	AWaterVein_Base_BP_C_ExecuteUbergraph_WaterVein_Base_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
