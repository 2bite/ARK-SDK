// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ArthroSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ArthroSaddle.PrimalItemArmor_ArthroSaddle_C.ExecuteUbergraph_PrimalItemArmor_ArthroSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ArthroSaddle_C::ExecuteUbergraph_PrimalItemArmor_ArthroSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ArthroSaddle.PrimalItemArmor_ArthroSaddle_C.ExecuteUbergraph_PrimalItemArmor_ArthroSaddle");

	UPrimalItemArmor_ArthroSaddle_C_ExecuteUbergraph_PrimalItemArmor_ArthroSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
