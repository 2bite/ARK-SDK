// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResourceGeneric_Curing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResourceGeneric_Curing.PrimalItemResourceGeneric_Curing_C.ExecuteUbergraph_PrimalItemResourceGeneric_Curing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResourceGeneric_Curing_C::ExecuteUbergraph_PrimalItemResourceGeneric_Curing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResourceGeneric_Curing.PrimalItemResourceGeneric_Curing_C.ExecuteUbergraph_PrimalItemResourceGeneric_Curing");

	UPrimalItemResourceGeneric_Curing_C_ExecuteUbergraph_PrimalItemResourceGeneric_Curing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
