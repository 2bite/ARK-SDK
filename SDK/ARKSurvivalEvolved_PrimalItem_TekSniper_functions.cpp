// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_TekSniper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_TekSniper.PrimalItem_TekSniper_C.ExecuteUbergraph_PrimalItem_TekSniper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_TekSniper_C::ExecuteUbergraph_PrimalItem_TekSniper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_TekSniper.PrimalItem_TekSniper_C.ExecuteUbergraph_PrimalItem_TekSniper");

	UPrimalItem_TekSniper_C_ExecuteUbergraph_PrimalItem_TekSniper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
