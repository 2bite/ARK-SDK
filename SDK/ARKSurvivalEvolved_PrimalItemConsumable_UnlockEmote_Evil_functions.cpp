// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Evil_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_Evil.PrimalItemConsumable_UnlockEmote_Evil_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Evil
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_Evil_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Evil(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_Evil.PrimalItemConsumable_UnlockEmote_Evil_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Evil");

	UPrimalItemConsumable_UnlockEmote_Evil_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Evil_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
