// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_TryAttachToZipline_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Zipline_TryAttachToZipline_TK.Zipline_TryAttachToZipline_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_TryAttachToZipline_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_TryAttachToZipline_TK.Zipline_TryAttachToZipline_TK_C.ReceiveExecute");

	UZipline_TryAttachToZipline_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_TryAttachToZipline_TK.Zipline_TryAttachToZipline_TK_C.ExecuteUbergraph_Zipline_TryAttachToZipline_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_TryAttachToZipline_TK_C::ExecuteUbergraph_Zipline_TryAttachToZipline_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_TryAttachToZipline_TK.Zipline_TryAttachToZipline_TK_C.ExecuteUbergraph_Zipline_TryAttachToZipline_TK");

	UZipline_TryAttachToZipline_TK_C_ExecuteUbergraph_Zipline_TryAttachToZipline_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
