// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableBuff_Parachute_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumableBuff_Parachute.PrimalItemConsumableBuff_Parachute_C.ExecuteUbergraph_PrimalItemConsumableBuff_Parachute
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumableBuff_Parachute_C::ExecuteUbergraph_PrimalItemConsumableBuff_Parachute(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableBuff_Parachute.PrimalItemConsumableBuff_Parachute_C.ExecuteUbergraph_PrimalItemConsumableBuff_Parachute");

	UPrimalItemConsumableBuff_Parachute_C_ExecuteUbergraph_PrimalItemConsumableBuff_Parachute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
