// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MegatheriumSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MegatheriumSaddle.PrimalItemArmor_MegatheriumSaddle_C.ExecuteUbergraph_PrimalItemArmor_MegatheriumSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MegatheriumSaddle_C::ExecuteUbergraph_PrimalItemArmor_MegatheriumSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MegatheriumSaddle.PrimalItemArmor_MegatheriumSaddle_C.ExecuteUbergraph_PrimalItemArmor_MegatheriumSaddle");

	UPrimalItemArmor_MegatheriumSaddle_C_ExecuteUbergraph_PrimalItemArmor_MegatheriumSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
