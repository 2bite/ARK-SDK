// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Snowball_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockEmote_Snowball.PrimalItemConsumable_UnlockEmote_Snowball_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Snowball
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockEmote_Snowball_C::ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Snowball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockEmote_Snowball.PrimalItemConsumable_UnlockEmote_Snowball_C.ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Snowball");

	UPrimalItemConsumable_UnlockEmote_Snowball_C_ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Snowball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
