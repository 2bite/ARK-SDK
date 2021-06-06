// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Compy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Compy.PrimalItemConsumable_Egg_Compy_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Compy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Compy_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Compy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Compy.PrimalItemConsumable_Egg_Compy_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Compy");

	UPrimalItemConsumable_Egg_Compy_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Compy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
