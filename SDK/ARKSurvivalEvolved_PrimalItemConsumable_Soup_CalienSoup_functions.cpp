// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Soup_CalienSoup_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Soup_CalienSoup.PrimalItemConsumable_Soup_CalienSoup_C.ExecuteUbergraph_PrimalItemConsumable_Soup_CalienSoup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Soup_CalienSoup_C::ExecuteUbergraph_PrimalItemConsumable_Soup_CalienSoup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Soup_CalienSoup.PrimalItemConsumable_Soup_CalienSoup_C.ExecuteUbergraph_PrimalItemConsumable_Soup_CalienSoup");

	UPrimalItemConsumable_Soup_CalienSoup_C_ExecuteUbergraph_PrimalItemConsumable_Soup_CalienSoup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
