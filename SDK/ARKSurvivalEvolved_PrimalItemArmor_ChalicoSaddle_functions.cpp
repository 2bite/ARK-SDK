// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ChalicoSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ChalicoSaddle.PrimalItemArmor_ChalicoSaddle_C.ExecuteUbergraph_PrimalItemArmor_ChalicoSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ChalicoSaddle_C::ExecuteUbergraph_PrimalItemArmor_ChalicoSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ChalicoSaddle.PrimalItemArmor_ChalicoSaddle_C.ExecuteUbergraph_PrimalItemArmor_ChalicoSaddle");

	UPrimalItemArmor_ChalicoSaddle_C_ExecuteUbergraph_PrimalItemArmor_ChalicoSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
