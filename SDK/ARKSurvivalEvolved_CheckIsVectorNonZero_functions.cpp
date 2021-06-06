// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CheckIsVectorNonZero_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UCheckIsVectorNonZero_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ReceiveExecute");

	UCheckIsVectorNonZero_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ExecuteUbergraph_CheckIsVectorNonZero
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCheckIsVectorNonZero_C::ExecuteUbergraph_CheckIsVectorNonZero(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ExecuteUbergraph_CheckIsVectorNonZero");

	UCheckIsVectorNonZero_C_ExecuteUbergraph_CheckIsVectorNonZero_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
