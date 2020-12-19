// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_PteroSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_PteroSaddle.PrimalItemArmor_PteroSaddle_C.ExecuteUbergraph_PrimalItemArmor_PteroSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_PteroSaddle_C::ExecuteUbergraph_PrimalItemArmor_PteroSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_PteroSaddle.PrimalItemArmor_PteroSaddle_C.ExecuteUbergraph_PrimalItemArmor_PteroSaddle");

	UPrimalItemArmor_PteroSaddle_C_ExecuteUbergraph_PrimalItemArmor_PteroSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
