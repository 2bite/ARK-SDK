// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TerrorBirdSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TerrorBirdSaddle.PrimalItemArmor_TerrorBirdSaddle_C.ExecuteUbergraph_PrimalItemArmor_TerrorBirdSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TerrorBirdSaddle_C::ExecuteUbergraph_PrimalItemArmor_TerrorBirdSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TerrorBirdSaddle.PrimalItemArmor_TerrorBirdSaddle_C.ExecuteUbergraph_PrimalItemArmor_TerrorBirdSaddle");

	UPrimalItemArmor_TerrorBirdSaddle_C_ExecuteUbergraph_PrimalItemArmor_TerrorBirdSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
