// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_DeinonychusSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_DeinonychusSaddle.PrimalItemArmor_DeinonychusSaddle_C.ExecuteUbergraph_PrimalItemArmor_DeinonychusSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_DeinonychusSaddle_C::ExecuteUbergraph_PrimalItemArmor_DeinonychusSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DeinonychusSaddle.PrimalItemArmor_DeinonychusSaddle_C.ExecuteUbergraph_PrimalItemArmor_DeinonychusSaddle");

	UPrimalItemArmor_DeinonychusSaddle_C_ExecuteUbergraph_PrimalItemArmor_DeinonychusSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
