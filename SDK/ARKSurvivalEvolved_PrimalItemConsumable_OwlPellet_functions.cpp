// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_OwlPellet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_OwlPellet.PrimalItemConsumable_OwlPellet_C.ExecuteUbergraph_PrimalItemConsumable_OwlPellet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_OwlPellet_C::ExecuteUbergraph_PrimalItemConsumable_OwlPellet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_OwlPellet.PrimalItemConsumable_OwlPellet_C.ExecuteUbergraph_PrimalItemConsumable_OwlPellet");

	UPrimalItemConsumable_OwlPellet_C_ExecuteUbergraph_PrimalItemConsumable_OwlPellet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
