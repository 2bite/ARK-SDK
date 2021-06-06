// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnderwaterEgg_Diplocaulus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnderwaterEgg_Diplocaulus.PrimalItemConsumable_UnderwaterEgg_Diplocaulus_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Diplocaulus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnderwaterEgg_Diplocaulus_C::ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Diplocaulus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnderwaterEgg_Diplocaulus.PrimalItemConsumable_UnderwaterEgg_Diplocaulus_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Diplocaulus");

	UPrimalItemConsumable_UnderwaterEgg_Diplocaulus_C_ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Diplocaulus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
