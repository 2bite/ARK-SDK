// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_HealSoup_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_HealSoup.PrimalItemConsumable_HealSoup_C.ExecuteUbergraph_PrimalItemConsumable_HealSoup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_HealSoup_C::ExecuteUbergraph_PrimalItemConsumable_HealSoup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_HealSoup.PrimalItemConsumable_HealSoup_C.ExecuteUbergraph_PrimalItemConsumable_HealSoup");

	UPrimalItemConsumable_HealSoup_C_ExecuteUbergraph_PrimalItemConsumable_HealSoup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
