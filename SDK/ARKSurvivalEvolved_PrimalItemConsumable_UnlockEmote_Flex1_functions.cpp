// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Flex1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_Flex1.PrimalItemConsumable_UnlockEmote_Flex1_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Flex1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_Flex1_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Flex1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_Flex1.PrimalItemConsumable_UnlockEmote_Flex1_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Flex1");

	UPrimalItemConsumable_UnlockEmote_Flex1_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Flex1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
