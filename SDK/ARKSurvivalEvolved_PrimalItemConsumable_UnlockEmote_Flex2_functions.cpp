// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Flex2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_Flex2.PrimalItemConsumable_UnlockEmote_Flex2_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Flex2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_Flex2_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Flex2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_Flex2.PrimalItemConsumable_UnlockEmote_Flex2_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Flex2");

	UPrimalItemConsumable_UnlockEmote_Flex2_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Flex2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
