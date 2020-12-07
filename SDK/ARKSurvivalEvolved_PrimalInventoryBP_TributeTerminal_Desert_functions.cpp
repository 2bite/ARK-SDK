// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TributeTerminal_Desert_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TributeTerminal_Desert.PrimalInventoryBP_TributeTerminal_Desert_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Desert
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TributeTerminal_Desert_C::ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Desert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TributeTerminal_Desert.PrimalInventoryBP_TributeTerminal_Desert_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Desert");

	UPrimalInventoryBP_TributeTerminal_Desert_C_ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Desert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
