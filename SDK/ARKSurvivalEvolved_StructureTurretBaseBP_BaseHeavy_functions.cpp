// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBaseBP_BaseHeavy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPCanBeActivated
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretBaseBP_BaseHeavy_C::BPCanBeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPCanBeActivated");

	AStructureTurretBaseBP_BaseHeavy_C_BPCanBeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPPostLoadedFromSaveGame
// ()

void AStructureTurretBaseBP_BaseHeavy_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPPostLoadedFromSaveGame");

	AStructureTurretBaseBP_BaseHeavy_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.TurretCheckHardLimit
// ()

void AStructureTurretBaseBP_BaseHeavy_C::TurretCheckHardLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.TurretCheckHardLimit");

	AStructureTurretBaseBP_BaseHeavy_C_TurretCheckHardLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BlueprintDrawHUD
// (NetReliable, Exec, Native, Event, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBaseBP_BaseHeavy_C::STATIC_BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BlueprintDrawHUD");

	AStructureTurretBaseBP_BaseHeavy_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPIsAllowedToBuild
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStructureTurretBaseBP_BaseHeavy_C::BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPIsAllowedToBuild");

	AStructureTurretBaseBP_BaseHeavy_C_BPIsAllowedToBuild_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.UserConstructionScript
// ()

void AStructureTurretBaseBP_BaseHeavy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.UserConstructionScript");

	AStructureTurretBaseBP_BaseHeavy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBaseBP_BaseHeavy_C::ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy");

	AStructureTurretBaseBP_BaseHeavy_C_ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
