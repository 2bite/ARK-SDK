// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GetRandomFleePointTamedFlier_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UGetRandomFleePointTamedFlier_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C.ReceiveExecute");

	UGetRandomFleePointTamedFlier_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UGetRandomFleePointTamedFlier_TK_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C.ReceiveAbort");

	UGetRandomFleePointTamedFlier_TK_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C.ExecuteUbergraph_GetRandomFleePointTamedFlier_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGetRandomFleePointTamedFlier_TK_C::ExecuteUbergraph_GetRandomFleePointTamedFlier_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GetRandomFleePointTamedFlier_TK.GetRandomFleePointTamedFlier_TK_C.ExecuteUbergraph_GetRandomFleePointTamedFlier_TK");

	UGetRandomFleePointTamedFlier_TK_C_ExecuteUbergraph_GetRandomFleePointTamedFlier_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
