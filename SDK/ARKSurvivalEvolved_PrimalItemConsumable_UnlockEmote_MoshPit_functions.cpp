// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_MoshPit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_MoshPit.PrimalItemConsumable_UnlockEmote_MoshPit_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_MoshPit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_MoshPit_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_MoshPit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_MoshPit.PrimalItemConsumable_UnlockEmote_MoshPit_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_MoshPit");

	UPrimalItemConsumable_UnlockEmote_MoshPit_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_MoshPit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif