// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_RexSaddle_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_RexSaddle_Tek.PrimalItemArmor_RexSaddle_Tek_C.ExecuteUbergraph_PrimalItemArmor_RexSaddle_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_RexSaddle_Tek_C::ExecuteUbergraph_PrimalItemArmor_RexSaddle_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_RexSaddle_Tek.PrimalItemArmor_RexSaddle_Tek_C.ExecuteUbergraph_PrimalItemArmor_RexSaddle_Tek");

	UPrimalItemArmor_RexSaddle_Tek_C_ExecuteUbergraph_PrimalItemArmor_RexSaddle_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
