// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ThylacoSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ThylacoSaddle.PrimalItemArmor_ThylacoSaddle_C.ExecuteUbergraph_PrimalItemArmor_ThylacoSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ThylacoSaddle_C::ExecuteUbergraph_PrimalItemArmor_ThylacoSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ThylacoSaddle.PrimalItemArmor_ThylacoSaddle_C.ExecuteUbergraph_PrimalItemArmor_ThylacoSaddle");

	UPrimalItemArmor_ThylacoSaddle_C_ExecuteUbergraph_PrimalItemArmor_ThylacoSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
