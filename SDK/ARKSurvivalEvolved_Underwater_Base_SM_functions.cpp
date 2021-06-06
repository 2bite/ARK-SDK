// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Underwater_Base_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Underwater_Base_SM.Underwater_Base_SM_C.BPPreventPlacingStructureOntoMe
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure**       ForNewStructure                (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              ForHitResult                   (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUnderwater_Base_SM_C::BPPreventPlacingStructureOntoMe(class APlayerController** PC, class APrimalStructure** ForNewStructure, struct FHitResult* ForHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM.Underwater_Base_SM_C.BPPreventPlacingStructureOntoMe");

	AUnderwater_Base_SM_C_BPPreventPlacingStructureOntoMe_Params params;
	params.PC = PC;
	params.ForNewStructure = ForNewStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForHitResult != nullptr)
		*ForHitResult = params.ForHitResult;

	return params.ReturnValue;
}


// Function Underwater_Base_SM.Underwater_Base_SM_C.BPForceConsideredEnemyFoundation
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure**       ForNewStructure                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TestAtLocation                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUnderwater_Base_SM_C::BPForceConsideredEnemyFoundation(class APlayerController** PC, class APrimalStructure** ForNewStructure, struct FVector* TestAtLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM.Underwater_Base_SM_C.BPForceConsideredEnemyFoundation");

	AUnderwater_Base_SM_C_BPForceConsideredEnemyFoundation_Params params;
	params.PC = PC;
	params.ForNewStructure = ForNewStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TestAtLocation != nullptr)
		*TestAtLocation = params.TestAtLocation;

	return params.ReturnValue;
}


// Function Underwater_Base_SM.Underwater_Base_SM_C.ChangedCompartmentFloodState
// (NetRequest, Exec, Native, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AUnderwater_Base_SM_C::ChangedCompartmentFloodState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM.Underwater_Base_SM_C.ChangedCompartmentFloodState");

	AUnderwater_Base_SM_C_ChangedCompartmentFloodState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Underwater_Base_SM.Underwater_Base_SM_C.UserConstructionScript
// ()

void AUnderwater_Base_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM.Underwater_Base_SM_C.UserConstructionScript");

	AUnderwater_Base_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Underwater_Base_SM.Underwater_Base_SM_C.ExecuteUbergraph_Underwater_Base_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AUnderwater_Base_SM_C::ExecuteUbergraph_Underwater_Base_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM.Underwater_Base_SM_C.ExecuteUbergraph_Underwater_Base_SM");

	AUnderwater_Base_SM_C_ExecuteUbergraph_Underwater_Base_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
