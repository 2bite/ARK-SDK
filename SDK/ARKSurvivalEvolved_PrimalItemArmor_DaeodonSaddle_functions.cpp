// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_DaeodonSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_DaeodonSaddle.PrimalItemArmor_DaeodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_DaeodonSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_DaeodonSaddle_C::ExecuteUbergraph_PrimalItemArmor_DaeodonSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DaeodonSaddle.PrimalItemArmor_DaeodonSaddle_C.ExecuteUbergraph_PrimalItemArmor_DaeodonSaddle");

	UPrimalItemArmor_DaeodonSaddle_C_ExecuteUbergraph_PrimalItemArmor_DaeodonSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
