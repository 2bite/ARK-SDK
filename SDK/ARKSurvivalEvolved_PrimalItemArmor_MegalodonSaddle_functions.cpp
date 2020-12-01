// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MegalodonSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MegalodonSaddle.PrimalItemArmor_MegalodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_MegalodonSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MegalodonSaddle_C::ExecuteUbergraph_PrimalItemArmor_MegalodonSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MegalodonSaddle.PrimalItemArmor_MegalodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_MegalodonSaddle");

	UPrimalItemArmor_MegalodonSaddle_C_ExecuteUbergraph_PrimalItemArmor_MegalodonSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
