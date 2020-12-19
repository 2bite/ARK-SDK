// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_BellyRub_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_BellyRub.PrimalItemConsumable_UnlockEmote_BellyRub_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_BellyRub
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_BellyRub_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_BellyRub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_BellyRub.PrimalItemConsumable_UnlockEmote_BellyRub_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_BellyRub");

	UPrimalItemConsumable_UnlockEmote_BellyRub_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_BellyRub_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
