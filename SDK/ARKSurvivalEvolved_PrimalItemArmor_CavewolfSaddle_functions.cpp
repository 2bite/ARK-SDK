// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_CavewolfSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_CavewolfSaddle.PrimalItemArmor_CavewolfSaddle_C.ExecuteUbergraph_PrimalItemArmor_CavewolfSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_CavewolfSaddle_C::ExecuteUbergraph_PrimalItemArmor_CavewolfSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_CavewolfSaddle.PrimalItemArmor_CavewolfSaddle_C.ExecuteUbergraph_PrimalItemArmor_CavewolfSaddle");

	UPrimalItemArmor_CavewolfSaddle_C_ExecuteUbergraph_PrimalItemArmor_CavewolfSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
