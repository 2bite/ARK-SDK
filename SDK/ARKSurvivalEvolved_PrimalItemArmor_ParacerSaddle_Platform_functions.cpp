// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ParacerSaddle_Platform_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ParacerSaddle_Platform.PrimalItemArmor_ParacerSaddle_Platform_C.ExecuteUbergraph_PrimalItemArmor_ParacerSaddle_Platform
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ParacerSaddle_Platform_C::ExecuteUbergraph_PrimalItemArmor_ParacerSaddle_Platform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ParacerSaddle_Platform.PrimalItemArmor_ParacerSaddle_Platform_C.ExecuteUbergraph_PrimalItemArmor_ParacerSaddle_Platform");

	UPrimalItemArmor_ParacerSaddle_Platform_C_ExecuteUbergraph_PrimalItemArmor_ParacerSaddle_Platform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
