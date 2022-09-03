// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_DesmodusSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_DesmodusSaddle.PrimalItemArmor_DesmodusSaddle_C.ExecuteUbergraph_PrimalItemArmor_DesmodusSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_DesmodusSaddle_C::ExecuteUbergraph_PrimalItemArmor_DesmodusSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DesmodusSaddle.PrimalItemArmor_DesmodusSaddle_C.ExecuteUbergraph_PrimalItemArmor_DesmodusSaddle");

	UPrimalItemArmor_DesmodusSaddle_C_ExecuteUbergraph_PrimalItemArmor_DesmodusSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
