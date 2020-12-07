// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_NutcrackerDance_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_NutcrackerDance.PrimalItemConsumable_UnlockEmote_NutcrackerDance_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_NutcrackerDance
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_NutcrackerDance_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_NutcrackerDance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_NutcrackerDance.PrimalItemConsumable_UnlockEmote_NutcrackerDance_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_NutcrackerDance");

	UPrimalItemConsumable_UnlockEmote_NutcrackerDance_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_NutcrackerDance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
