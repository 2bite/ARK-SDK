// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Wyvern_Fertilized_Lightning_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Wyvern_Fertilized_Lightning.PrimalItemConsumable_Egg_Wyvern_Fertilized_Lightning_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Lightning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Wyvern_Fertilized_Lightning_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Lightning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Wyvern_Fertilized_Lightning.PrimalItemConsumable_Egg_Wyvern_Fertilized_Lightning_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Lightning");

	UPrimalItemConsumable_Egg_Wyvern_Fertilized_Lightning_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Lightning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
