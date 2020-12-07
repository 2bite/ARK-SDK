// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_TekRifle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_TekRifle.PrimalItem_TekRifle_C.ExecuteUbergraph_PrimalItem_TekRifle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_TekRifle_C::ExecuteUbergraph_PrimalItem_TekRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_TekRifle.PrimalItem_TekRifle_C.ExecuteUbergraph_PrimalItem_TekRifle");

	UPrimalItem_TekRifle_C_ExecuteUbergraph_PrimalItem_TekRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
