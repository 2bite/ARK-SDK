// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Therizino_Fertilized_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Therizino_Fertilized.PrimalItemConsumable_Egg_Therizino_Fertilized_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Therizino_Fertilized
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Therizino_Fertilized_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Therizino_Fertilized(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Therizino_Fertilized.PrimalItemConsumable_Egg_Therizino_Fertilized_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Therizino_Fertilized");

	UPrimalItemConsumable_Egg_Therizino_Fertilized_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Therizino_Fertilized_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
