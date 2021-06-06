// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_FEKnock_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_FEKnock.PrimalItemConsumable_UnlockEmote_FEKnock_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_FEKnock
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_FEKnock_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_FEKnock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_FEKnock.PrimalItemConsumable_UnlockEmote_FEKnock_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_FEKnock");

	UPrimalItemConsumable_UnlockEmote_FEKnock_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_FEKnock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
