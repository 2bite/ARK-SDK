// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TherizinosaurusSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TherizinosaurusSaddle.PrimalItemArmor_TherizinosaurusSaddle_C.ExecuteUbergraph_PrimalItemArmor_TherizinosaurusSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TherizinosaurusSaddle_C::ExecuteUbergraph_PrimalItemArmor_TherizinosaurusSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TherizinosaurusSaddle.PrimalItemArmor_TherizinosaurusSaddle_C.ExecuteUbergraph_PrimalItemArmor_TherizinosaurusSaddle");

	UPrimalItemArmor_TherizinosaurusSaddle_C_ExecuteUbergraph_PrimalItemArmor_TherizinosaurusSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
