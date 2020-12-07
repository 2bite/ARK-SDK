// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsInRangeForHordeCrate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsInRangeForHordeCrate.IsInRangeForHordeCrate_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsInRangeForHordeCrate_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsInRangeForHordeCrate.IsInRangeForHordeCrate_C.ReceiveExecute");

	UIsInRangeForHordeCrate_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsInRangeForHordeCrate.IsInRangeForHordeCrate_C.ExecuteUbergraph_IsInRangeForHordeCrate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsInRangeForHordeCrate_C::ExecuteUbergraph_IsInRangeForHordeCrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsInRangeForHordeCrate.IsInRangeForHordeCrate_C.ExecuteUbergraph_IsInRangeForHordeCrate");

	UIsInRangeForHordeCrate_C_ExecuteUbergraph_IsInRangeForHordeCrate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
