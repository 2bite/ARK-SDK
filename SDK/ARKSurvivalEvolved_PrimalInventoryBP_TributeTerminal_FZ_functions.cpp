// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TributeTerminal_FZ_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TributeTerminal_FZ.PrimalInventoryBP_TributeTerminal_FZ_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_FZ
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TributeTerminal_FZ_C::ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_FZ(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TributeTerminal_FZ.PrimalInventoryBP_TributeTerminal_FZ_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_FZ");

	UPrimalInventoryBP_TributeTerminal_FZ_C_ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_FZ_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
