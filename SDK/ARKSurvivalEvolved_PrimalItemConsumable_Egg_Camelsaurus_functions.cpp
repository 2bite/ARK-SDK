// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Camelsaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Camelsaurus.PrimalItemConsumable_Egg_Camelsaurus_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Camelsaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Camelsaurus_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Camelsaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Camelsaurus.PrimalItemConsumable_Egg_Camelsaurus_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Camelsaurus");

	UPrimalItemConsumable_Egg_Camelsaurus_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Camelsaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
