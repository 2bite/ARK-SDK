// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WhipForTamedDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPResetBuffStart
// ()

void ABuff_WhipForTamedDino_C::BPResetBuffStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPResetBuffStart");

	ABuff_WhipForTamedDino_C_BPResetBuffStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.SetBuffCauser
// ()
// Parameters:
// class AActor**                 CausedBy                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WhipForTamedDino_C::SetBuffCauser(class AActor** CausedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.SetBuffCauser");

	ABuff_WhipForTamedDino_C_SetBuffCauser_Params params;
	params.CausedBy = CausedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BuffTickServer
// (NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WhipForTamedDino_C::STATIC_BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BuffTickServer");

	ABuff_WhipForTamedDino_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.PlayStartledAnim
// ()

void ABuff_WhipForTamedDino_C::PlayStartledAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.PlayStartledAnim");

	ABuff_WhipForTamedDino_C_PlayStartledAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WhipForTamedDino_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPActivated");

	ABuff_WhipForTamedDino_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_WhipForTamedDino_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPCustomAllowAddBuff");

	ABuff_WhipForTamedDino_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.UserConstructionScript
// ()

void ABuff_WhipForTamedDino_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.UserConstructionScript");

	ABuff_WhipForTamedDino_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WhipForTamedDino_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPSetupForInstigator");

	ABuff_WhipForTamedDino_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.ExecuteUbergraph_Buff_WhipForTamedDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WhipForTamedDino_C::ExecuteUbergraph_Buff_WhipForTamedDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.ExecuteUbergraph_Buff_WhipForTamedDino");

	ABuff_WhipForTamedDino_C_ExecuteUbergraph_Buff_WhipForTamedDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
