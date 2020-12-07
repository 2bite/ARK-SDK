// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_SpiderSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_SpiderSaddle.PrimalItemArmor_SpiderSaddle_C.ExecuteUbergraph_PrimalItemArmor_SpiderSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_SpiderSaddle_C::ExecuteUbergraph_PrimalItemArmor_SpiderSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SpiderSaddle.PrimalItemArmor_SpiderSaddle_C.ExecuteUbergraph_PrimalItemArmor_SpiderSaddle");

	UPrimalItemArmor_SpiderSaddle_C_ExecuteUbergraph_PrimalItemArmor_SpiderSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
