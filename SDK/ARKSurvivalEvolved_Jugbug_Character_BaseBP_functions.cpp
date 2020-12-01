// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Jugbug_Character_BaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPTimerNonDedicated
// ()

void AJugbug_Character_BaseBP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPTimerNonDedicated");

	AJugbug_Character_BaseBP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPTimerServer
// ()

void AJugbug_Character_BaseBP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPTimerServer");

	AJugbug_Character_BaseBP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AJugbug_Character_BaseBP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BlueprintCanAttack");

	AJugbug_Character_BaseBP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AJugbug_Character_BaseBP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPGetMultiUseEntries");

	AJugbug_Character_BaseBP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.AddResource
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewResourceAmount              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AddedResourceAmount            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AJugbug_Character_BaseBP_C::AddResource(float amount, float* NewResourceAmount, float* AddedResourceAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.AddResource");

	AJugbug_Character_BaseBP_C_AddResource_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewResourceAmount != nullptr)
		*NewResourceAmount = params.NewResourceAmount;
	if (AddedResourceAmount != nullptr)
		*AddedResourceAmount = params.AddedResourceAmount;
}


// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AJugbug_Character_BaseBP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BPTryMultiUse");

	AJugbug_Character_BaseBP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.RefreshResourceAmount
// ()

void AJugbug_Character_BaseBP_C::RefreshResourceAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.RefreshResourceAmount");

	AJugbug_Character_BaseBP_C_RefreshResourceAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void AJugbug_Character_BaseBP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.BlueprintDrawFloatingHUD");

	AJugbug_Character_BaseBP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.UserConstructionScript
// ()

void AJugbug_Character_BaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.UserConstructionScript");

	AJugbug_Character_BaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.ExecuteUbergraph_Jugbug_Character_BaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AJugbug_Character_BaseBP_C::ExecuteUbergraph_Jugbug_Character_BaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C.ExecuteUbergraph_Jugbug_Character_BaseBP");

	AJugbug_Character_BaseBP_C_ExecuteUbergraph_Jugbug_Character_BaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
