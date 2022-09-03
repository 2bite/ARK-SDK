// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SetTarget_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SetTarget_TK.SetTarget_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void USetTarget_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetTarget_TK.SetTarget_TK_C.ReceiveExecute");

	USetTarget_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SetTarget_TK.SetTarget_TK_C.ExecuteUbergraph_SetTarget_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USetTarget_TK_C::ExecuteUbergraph_SetTarget_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetTarget_TK.SetTarget_TK_C.ExecuteUbergraph_SetTarget_TK");

	USetTarget_TK_C_ExecuteUbergraph_SetTarget_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
