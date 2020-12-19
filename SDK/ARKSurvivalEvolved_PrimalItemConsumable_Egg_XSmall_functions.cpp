// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_XSmall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_XSmall.PrimalItemConsumable_Egg_XSmall_C.ExecuteUbergraph_PrimalItemConsumable_Egg_XSmall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_XSmall_C::ExecuteUbergraph_PrimalItemConsumable_Egg_XSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_XSmall.PrimalItemConsumable_Egg_XSmall_C.ExecuteUbergraph_PrimalItemConsumable_Egg_XSmall");

	UPrimalItemConsumable_Egg_XSmall_C_ExecuteUbergraph_PrimalItemConsumable_Egg_XSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
