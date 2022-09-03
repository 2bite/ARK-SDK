// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MegalodonSaddle_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MegalodonSaddle_Tek.PrimalItemArmor_MegalodonSaddle_Tek_C.ExecuteUbergraph_PrimalItemArmor_MegalodonSaddle_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MegalodonSaddle_Tek_C::ExecuteUbergraph_PrimalItemArmor_MegalodonSaddle_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MegalodonSaddle_Tek.PrimalItemArmor_MegalodonSaddle_Tek_C.ExecuteUbergraph_PrimalItemArmor_MegalodonSaddle_Tek");

	UPrimalItemArmor_MegalodonSaddle_Tek_C_ExecuteUbergraph_PrimalItemArmor_MegalodonSaddle_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
