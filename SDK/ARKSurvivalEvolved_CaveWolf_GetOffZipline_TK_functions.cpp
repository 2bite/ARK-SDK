// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_GetOffZipline_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_GetOffZipline_TK_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C.ReceiveAbort");

	UCaveWolf_GetOffZipline_TK_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_GetOffZipline_TK_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C.ReceiveTick");

	UCaveWolf_GetOffZipline_TK_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_GetOffZipline_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C.ReceiveExecute");

	UCaveWolf_GetOffZipline_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C.ExecuteUbergraph_CaveWolf_GetOffZipline_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_GetOffZipline_TK_C::ExecuteUbergraph_CaveWolf_GetOffZipline_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C.ExecuteUbergraph_CaveWolf_GetOffZipline_TK");

	UCaveWolf_GetOffZipline_TK_C_ExecuteUbergraph_CaveWolf_GetOffZipline_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
