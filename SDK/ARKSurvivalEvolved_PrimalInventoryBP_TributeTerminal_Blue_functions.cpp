// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TributeTerminal_Blue_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TributeTerminal_Blue.PrimalInventoryBP_TributeTerminal_Blue_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Blue
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TributeTerminal_Blue_C::ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Blue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TributeTerminal_Blue.PrimalInventoryBP_TributeTerminal_Blue_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Blue");

	UPrimalInventoryBP_TributeTerminal_Blue_C_ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Blue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
