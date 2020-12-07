// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShouldFlee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShouldFlee.ShouldFlee_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UShouldFlee_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShouldFlee.ShouldFlee_C.ReceiveExecute");

	UShouldFlee_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShouldFlee.ShouldFlee_C.ExecuteUbergraph_ShouldFlee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UShouldFlee_C::ExecuteUbergraph_ShouldFlee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShouldFlee.ShouldFlee_C.ExecuteUbergraph_ShouldFlee");

	UShouldFlee_C_ExecuteUbergraph_ShouldFlee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
