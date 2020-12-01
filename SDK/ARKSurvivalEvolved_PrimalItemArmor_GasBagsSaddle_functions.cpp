// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_GasBagsSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_GasBagsSaddle.PrimalItemArmor_GasBagsSaddle_C.ExecuteUbergraph_PrimalItemArmor_GasBagsSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_GasBagsSaddle_C::ExecuteUbergraph_PrimalItemArmor_GasBagsSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GasBagsSaddle.PrimalItemArmor_GasBagsSaddle_C.ExecuteUbergraph_PrimalItemArmor_GasBagsSaddle");

	UPrimalItemArmor_GasBagsSaddle_C_ExecuteUbergraph_PrimalItemArmor_GasBagsSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
