// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnderwaterEgg_Eel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnderwaterEgg_Eel.PrimalItemConsumable_UnderwaterEgg_Eel_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Eel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnderwaterEgg_Eel_C::ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Eel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnderwaterEgg_Eel.PrimalItemConsumable_UnderwaterEgg_Eel_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Eel");

	UPrimalItemConsumable_UnderwaterEgg_Eel_C_ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Eel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
