// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Turkey_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_Turkey.PrimalItemConsumable_UnlockEmote_Turkey_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Turkey
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_Turkey_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Turkey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_Turkey.PrimalItemConsumable_UnlockEmote_Turkey_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Turkey");

	UPrimalItemConsumable_UnlockEmote_Turkey_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Turkey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
