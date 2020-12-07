// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SetRunningArcha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SetRunningArcha.SetRunningArcha_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void USetRunningArcha_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetRunningArcha.SetRunningArcha_C.ReceiveExecute");

	USetRunningArcha_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SetRunningArcha.SetRunningArcha_C.ExecuteUbergraph_SetRunningArcha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USetRunningArcha_C::ExecuteUbergraph_SetRunningArcha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetRunningArcha.SetRunningArcha_C.ExecuteUbergraph_SetRunningArcha");

	USetRunningArcha_C_ExecuteUbergraph_SetRunningArcha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
