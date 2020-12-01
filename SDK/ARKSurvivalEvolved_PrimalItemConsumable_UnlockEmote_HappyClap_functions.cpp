// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_HappyClap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_HappyClap.PrimalItemConsumable_UnlockEmote_HappyClap_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_HappyClap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_HappyClap_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_HappyClap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_HappyClap.PrimalItemConsumable_UnlockEmote_HappyClap_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_HappyClap");

	UPrimalItemConsumable_UnlockEmote_HappyClap_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_HappyClap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
