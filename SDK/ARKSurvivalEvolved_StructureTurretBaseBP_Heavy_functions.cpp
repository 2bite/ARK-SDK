// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBaseBP_Heavy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.ReceiveBeginPlay
// ()

void AStructureTurretBaseBP_Heavy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.ReceiveBeginPlay");

	AStructureTurretBaseBP_Heavy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.BPIsAllowedToBuildEx
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFinalPlacement                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bChoosingRotation              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStructureTurretBaseBP_Heavy_C::BPIsAllowedToBuildEx(int* CurrentAllowedReason, class APlayerController** PC, bool* bFinalPlacement, bool* bChoosingRotation, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.BPIsAllowedToBuildEx");

	AStructureTurretBaseBP_Heavy_C_BPIsAllowedToBuildEx_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;
	params.PC = PC;
	params.bFinalPlacement = bFinalPlacement;
	params.bChoosingRotation = bChoosingRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.UserConstructionScript
// ()

void AStructureTurretBaseBP_Heavy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.UserConstructionScript");

	AStructureTurretBaseBP_Heavy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.ExecuteUbergraph_StructureTurretBaseBP_Heavy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBaseBP_Heavy_C::ExecuteUbergraph_StructureTurretBaseBP_Heavy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_Heavy.StructureTurretBaseBP_Heavy_C.ExecuteUbergraph_StructureTurretBaseBP_Heavy");

	AStructureTurretBaseBP_Heavy_C_ExecuteUbergraph_StructureTurretBaseBP_Heavy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
