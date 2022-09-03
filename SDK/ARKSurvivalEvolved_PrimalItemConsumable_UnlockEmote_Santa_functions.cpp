// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Santa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_Santa.PrimalItemConsumable_UnlockEmote_Santa_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Santa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_Santa_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Santa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_Santa.PrimalItemConsumable_UnlockEmote_Santa_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Santa");

	UPrimalItemConsumable_UnlockEmote_Santa_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Santa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
