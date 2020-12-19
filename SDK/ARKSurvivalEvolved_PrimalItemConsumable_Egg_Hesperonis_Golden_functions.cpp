// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Hesperonis_Golden_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Hesperonis_Golden.PrimalItemConsumable_Egg_Hesperonis_Golden_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Hesperonis_Golden
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Hesperonis_Golden_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Hesperonis_Golden(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Hesperonis_Golden.PrimalItemConsumable_Egg_Hesperonis_Golden_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Hesperonis_Golden");

	UPrimalItemConsumable_Egg_Hesperonis_Golden_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Hesperonis_Golden_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
