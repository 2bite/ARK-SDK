// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Caroling_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_Caroling.PrimalItemConsumable_UnlockEmote_Caroling_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Caroling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_Caroling_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Caroling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_Caroling.PrimalItemConsumable_UnlockEmote_Caroling_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Caroling");

	UPrimalItemConsumable_UnlockEmote_Caroling_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Caroling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
