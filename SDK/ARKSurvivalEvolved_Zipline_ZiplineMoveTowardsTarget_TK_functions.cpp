// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_ZiplineMoveTowardsTarget_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_ZiplineMoveTowardsTarget_TK_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.ReceiveTick");

	UZipline_ZiplineMoveTowardsTarget_TK_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_ZiplineMoveTowardsTarget_TK_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.ReceiveAbort");

	UZipline_ZiplineMoveTowardsTarget_TK_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_ZiplineMoveTowardsTarget_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.ReceiveExecute");

	UZipline_ZiplineMoveTowardsTarget_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.TryToUnblock
// ()

void UZipline_ZiplineMoveTowardsTarget_TK_C::TryToUnblock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.TryToUnblock");

	UZipline_ZiplineMoveTowardsTarget_TK_C_TryToUnblock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.ExecuteUbergraph_Zipline_ZiplineMoveTowardsTarget_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_ZiplineMoveTowardsTarget_TK_C::ExecuteUbergraph_Zipline_ZiplineMoveTowardsTarget_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C.ExecuteUbergraph_Zipline_ZiplineMoveTowardsTarget_TK");

	UZipline_ZiplineMoveTowardsTarget_TK_C_ExecuteUbergraph_Zipline_ZiplineMoveTowardsTarget_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
