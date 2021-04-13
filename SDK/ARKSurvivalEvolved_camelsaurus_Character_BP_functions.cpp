// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_camelsaurus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void Acamelsaurus_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPDoAttack");

	Acamelsaurus_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.GetCanDrink
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acamelsaurus_Character_BP_C::GetCanDrink(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.GetCanDrink");

	Acamelsaurus_Character_BP_C_GetCanDrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPCharacterUnsleeped
// ()

void Acamelsaurus_Character_BP_C::BPCharacterUnsleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPCharacterUnsleeped");

	Acamelsaurus_Character_BP_C_BPCharacterUnsleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPCharacterSleeped
// ()

void Acamelsaurus_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPCharacterSleeped");

	Acamelsaurus_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.PlayDrinkAnim
// ()

void Acamelsaurus_Character_BP_C::PlayDrinkAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.PlayDrinkAnim");

	Acamelsaurus_Character_BP_C_PlayDrinkAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPTimerServer
// ()

void Acamelsaurus_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPTimerServer");

	Acamelsaurus_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.HasMaxWater
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acamelsaurus_Character_BP_C::HasMaxWater(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.HasMaxWater");

	Acamelsaurus_Character_BP_C_HasMaxWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.IsAWaterItem
// ()
// Parameters:
// class UObject*                 PrimalItem                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acamelsaurus_Character_BP_C::IsAWaterItem(class UObject* PrimalItem, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.IsAWaterItem");

	Acamelsaurus_Character_BP_C_IsAWaterItem_Params params;
	params.PrimalItem = PrimalItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPInventoryItemUsed
// ()
// Parameters:
// class UObject**                InventoryItemObject            (Parm, ZeroConstructor, IsPlainOldData)

void Acamelsaurus_Character_BP_C::BPInventoryItemUsed(class UObject** InventoryItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPInventoryItemUsed");

	Acamelsaurus_Character_BP_C_BPInventoryItemUsed_Params params;
	params.InventoryItemObject = InventoryItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPForceAllowsInventoryUse
// ()
// Parameters:
// class UObject**                InventoryItemObject            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Acamelsaurus_Character_BP_C::BPForceAllowsInventoryUse(class UObject** InventoryItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPForceAllowsInventoryUse");

	Acamelsaurus_Character_BP_C_BPForceAllowsInventoryUse_Params params;
	params.InventoryItemObject = InventoryItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.RefreshWater
// ()

void Acamelsaurus_Character_BP_C::RefreshWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.RefreshWater");

	Acamelsaurus_Character_BP_C_RefreshWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void Acamelsaurus_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BlueprintDrawFloatingHUD");

	Acamelsaurus_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.RefreshOpenToSky
// ()

void Acamelsaurus_Character_BP_C::RefreshOpenToSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.RefreshOpenToSky");

	Acamelsaurus_Character_BP_C_RefreshOpenToSky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.AddWater
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewWaterAmount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acamelsaurus_Character_BP_C::AddWater(float amount, float* NewWaterAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.AddWater");

	Acamelsaurus_Character_BP_C_AddWater_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewWaterAmount != nullptr)
		*NewWaterAmount = params.NewWaterAmount;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Acamelsaurus_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPTryMultiUse");

	Acamelsaurus_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> Acamelsaurus_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPGetMultiUseEntries");

	Acamelsaurus_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.UserConstructionScript
// ()

void Acamelsaurus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.UserConstructionScript");

	Acamelsaurus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.ReceiveBeginPlay
// ()

void Acamelsaurus_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.ReceiveBeginPlay");

	Acamelsaurus_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.ExecuteUbergraph_camelsaurus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Acamelsaurus_Character_BP_C::ExecuteUbergraph_camelsaurus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.ExecuteUbergraph_camelsaurus_Character_BP");

	Acamelsaurus_Character_BP_C_ExecuteUbergraph_camelsaurus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
