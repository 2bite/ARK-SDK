// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Dance_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_Dance.PrimalItemConsumable_UnlockEmote_Dance_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Dance
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_Dance_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Dance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_Dance.PrimalItemConsumable_UnlockEmote_Dance_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Dance");

	UPrimalItemConsumable_UnlockEmote_Dance_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Dance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
