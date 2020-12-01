// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_TT_Craftable_ThanksgivingCandy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_TT_Craftable_ThanksgivingCandy.PrimalItemConsumable_TT_Craftable_ThanksgivingCandy_C.ExecuteUbergraph_PrimalItemConsumable_TT_Craftable_ThanksgivingCandy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_TT_Craftable_ThanksgivingCandy_C::ExecuteUbergraph_PrimalItemConsumable_TT_Craftable_ThanksgivingCandy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TT_Craftable_ThanksgivingCandy.PrimalItemConsumable_TT_Craftable_ThanksgivingCandy_C.ExecuteUbergraph_PrimalItemConsumable_TT_Craftable_ThanksgivingCandy");

	UPrimalItemConsumable_TT_Craftable_ThanksgivingCandy_C_ExecuteUbergraph_PrimalItemConsumable_TT_Craftable_ThanksgivingCandy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
