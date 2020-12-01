// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MantisSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MantisSaddle.PrimalItemArmor_MantisSaddle_C.ExecuteUbergraph_PrimalItemArmor_MantisSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MantisSaddle_C::ExecuteUbergraph_PrimalItemArmor_MantisSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MantisSaddle.PrimalItemArmor_MantisSaddle_C.ExecuteUbergraph_PrimalItemArmor_MantisSaddle");

	UPrimalItemArmor_MantisSaddle_C_ExecuteUbergraph_PrimalItemArmor_MantisSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
