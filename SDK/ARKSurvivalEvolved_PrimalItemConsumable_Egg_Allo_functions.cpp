// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Allo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Allo.PrimalItemConsumable_Egg_Allo_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Allo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Allo_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Allo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Allo.PrimalItemConsumable_Egg_Allo_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Allo");

	UPrimalItemConsumable_Egg_Allo_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Allo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
