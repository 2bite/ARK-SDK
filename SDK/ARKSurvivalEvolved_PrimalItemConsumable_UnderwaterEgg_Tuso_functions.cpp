// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnderwaterEgg_Tuso_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnderwaterEgg_Tuso.PrimalItemConsumable_UnderwaterEgg_Tuso_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Tuso
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnderwaterEgg_Tuso_C::ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Tuso(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnderwaterEgg_Tuso.PrimalItemConsumable_UnderwaterEgg_Tuso_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Tuso");

	UPrimalItemConsumable_UnderwaterEgg_Tuso_C_ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Tuso_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
