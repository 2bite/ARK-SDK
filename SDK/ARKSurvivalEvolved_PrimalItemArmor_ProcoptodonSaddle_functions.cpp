// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ProcoptodonSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ProcoptodonSaddle.PrimalItemArmor_ProcoptodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_ProcoptodonSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ProcoptodonSaddle_C::ExecuteUbergraph_PrimalItemArmor_ProcoptodonSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ProcoptodonSaddle.PrimalItemArmor_ProcoptodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_ProcoptodonSaddle");

	UPrimalItemArmor_ProcoptodonSaddle_C_ExecuteUbergraph_PrimalItemArmor_ProcoptodonSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
