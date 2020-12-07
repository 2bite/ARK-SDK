// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_SauroSaddle_Platform_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_SauroSaddle_Platform.PrimalItemArmor_SauroSaddle_Platform_C.ExecuteUbergraph_PrimalItemArmor_SauroSaddle_Platform
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_SauroSaddle_Platform_C::ExecuteUbergraph_PrimalItemArmor_SauroSaddle_Platform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SauroSaddle_Platform.PrimalItemArmor_SauroSaddle_Platform_C.ExecuteUbergraph_PrimalItemArmor_SauroSaddle_Platform");

	UPrimalItemArmor_SauroSaddle_Platform_C_ExecuteUbergraph_PrimalItemArmor_SauroSaddle_Platform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
