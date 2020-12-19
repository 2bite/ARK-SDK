// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockHair_Head_Viking_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnlockHair_Head_Viking.PrimalItemConsumable_UnlockHair_Head_Viking_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Viking
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnlockHair_Head_Viking_C::ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Viking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnlockHair_Head_Viking.PrimalItemConsumable_UnlockHair_Head_Viking_C.ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Viking");

	UPrimalItemConsumable_UnlockHair_Head_Viking_C_ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Viking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
