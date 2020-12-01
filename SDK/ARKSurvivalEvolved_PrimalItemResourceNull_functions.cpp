// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResourceNull_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResourceNull.PrimalItemResourceNull_C.ExecuteUbergraph_PrimalItemResourceNull
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResourceNull_C::ExecuteUbergraph_PrimalItemResourceNull(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResourceNull.PrimalItemResourceNull_C.ExecuteUbergraph_PrimalItemResourceNull");

	UPrimalItemResourceNull_C_ExecuteUbergraph_PrimalItemResourceNull_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
