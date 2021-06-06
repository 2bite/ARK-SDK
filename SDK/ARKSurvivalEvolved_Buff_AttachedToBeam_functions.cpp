// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AttachedToBeam_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AttachedToBeam_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.BuffTickServer");

	ABuff_AttachedToBeam_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.UpdatePreventInstigatorAttack
// ()
// Parameters:
// class AActor*                  ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AttachedToBeam_C::UpdatePreventInstigatorAttack(class AActor* ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.UpdatePreventInstigatorAttack");

	ABuff_AttachedToBeam_C_UpdatePreventInstigatorAttack_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AttachedToBeam_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.BPSetupForInstigator");

	ABuff_AttachedToBeam_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.DoStruggle
// (NetReliable, NetRequest, Native, NetResponse, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABuff_AttachedToBeam_C::DoStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.DoStruggle");

	ABuff_AttachedToBeam_C_DoStruggle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_AttachedToBeam_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.BPCheckPreventInput");

	ABuff_AttachedToBeam_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.UserConstructionScript
// ()

void ABuff_AttachedToBeam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.UserConstructionScript");

	ABuff_AttachedToBeam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.Server_Struggle
// ()

void ABuff_AttachedToBeam_C::Server_Struggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.Server_Struggle");

	ABuff_AttachedToBeam_C_Server_Struggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.ExecuteUbergraph_Buff_AttachedToBeam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AttachedToBeam_C::ExecuteUbergraph_Buff_AttachedToBeam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.ExecuteUbergraph_Buff_AttachedToBeam");

	ABuff_AttachedToBeam_C_ExecuteUbergraph_Buff_AttachedToBeam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
