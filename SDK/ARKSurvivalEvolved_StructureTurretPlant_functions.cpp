// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretPlant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureTurretPlant.StructureTurretPlant_C.BPOnDemolish
// (NetRequest, Native, NetResponse, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretPlant_C::BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretPlant.StructureTurretPlant_C.BPOnDemolish");

	AStructureTurretPlant_C_BPOnDemolish_Params params;
	params.ForPC = ForPC;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretPlant.StructureTurretPlant_C.BPPostLoadedFromSaveGame
// ()

void AStructureTurretPlant_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretPlant.StructureTurretPlant_C.BPPostLoadedFromSaveGame");

	AStructureTurretPlant_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretPlant.StructureTurretPlant_C.BPCanBeActivated
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretPlant_C::BPCanBeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretPlant.StructureTurretPlant_C.BPCanBeActivated");

	AStructureTurretPlant_C_BPCanBeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureTurretPlant.StructureTurretPlant_C.Turret Check Hard Limit
// ()

void AStructureTurretPlant_C::Turret_Check_Hard_Limit()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretPlant.StructureTurretPlant_C.Turret Check Hard Limit");

	AStructureTurretPlant_C_Turret_Check_Hard_Limit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretPlant.StructureTurretPlant_C.BlueprintDrawHUD
// (NetReliable, Exec, Native, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretPlant_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretPlant.StructureTurretPlant_C.BlueprintDrawHUD");

	AStructureTurretPlant_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretPlant.StructureTurretPlant_C.UserConstructionScript
// ()

void AStructureTurretPlant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretPlant.StructureTurretPlant_C.UserConstructionScript");

	AStructureTurretPlant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretPlant.StructureTurretPlant_C.ExecuteUbergraph_StructureTurretPlant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretPlant_C::ExecuteUbergraph_StructureTurretPlant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretPlant.StructureTurretPlant_C.ExecuteUbergraph_StructureTurretPlant");

	AStructureTurretPlant_C_ExecuteUbergraph_StructureTurretPlant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
