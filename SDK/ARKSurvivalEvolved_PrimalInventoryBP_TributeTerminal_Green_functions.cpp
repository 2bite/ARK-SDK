// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TributeTerminal_Green_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TributeTerminal_Green.PrimalInventoryBP_TributeTerminal_Green_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Green
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TributeTerminal_Green_C::ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Green(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TributeTerminal_Green.PrimalInventoryBP_TributeTerminal_Green_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Green");

	UPrimalInventoryBP_TributeTerminal_Green_C_ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Green_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
