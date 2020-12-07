// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MegalosaurusSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MegalosaurusSaddle.PrimalItemArmor_MegalosaurusSaddle_C.ExecuteUbergraph_PrimalItemArmor_MegalosaurusSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MegalosaurusSaddle_C::ExecuteUbergraph_PrimalItemArmor_MegalosaurusSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MegalosaurusSaddle.PrimalItemArmor_MegalosaurusSaddle_C.ExecuteUbergraph_PrimalItemArmor_MegalosaurusSaddle");

	UPrimalItemArmor_MegalosaurusSaddle_C_ExecuteUbergraph_PrimalItemArmor_MegalosaurusSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
