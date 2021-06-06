// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Megalania_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Megalania.PrimalItemConsumable_Egg_Megalania_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Megalania
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Megalania_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Megalania(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Megalania.PrimalItemConsumable_Egg_Megalania_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Megalania");

	UPrimalItemConsumable_Egg_Megalania_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Megalania_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
