// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Soup_FriaCurry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Soup_FriaCurry.PrimalItemConsumable_Soup_FriaCurry_C.ExecuteUbergraph_PrimalItemConsumable_Soup_FriaCurry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Soup_FriaCurry_C::ExecuteUbergraph_PrimalItemConsumable_Soup_FriaCurry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Soup_FriaCurry.PrimalItemConsumable_Soup_FriaCurry_C.ExecuteUbergraph_PrimalItemConsumable_Soup_FriaCurry");

	UPrimalItemConsumable_Soup_FriaCurry_C_ExecuteUbergraph_PrimalItemConsumable_Soup_FriaCurry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
