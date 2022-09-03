// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Heart_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_Heart.PrimalItemConsumable_UnlockEmote_Heart_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Heart
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_Heart_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Heart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_Heart.PrimalItemConsumable_UnlockEmote_Heart_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Heart");

	UPrimalItemConsumable_UnlockEmote_Heart_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Heart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
