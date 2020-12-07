// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResourceGeneric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResourceGeneric.PrimalItemResourceGeneric_C.ExecuteUbergraph_PrimalItemResourceGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResourceGeneric_C::ExecuteUbergraph_PrimalItemResourceGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResourceGeneric.PrimalItemResourceGeneric_C.ExecuteUbergraph_PrimalItemResourceGeneric");

	UPrimalItemResourceGeneric_C_ExecuteUbergraph_PrimalItemResourceGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
