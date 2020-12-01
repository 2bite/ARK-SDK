// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TributeTerminal_Forest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TributeTerminal_Forest.PrimalInventoryBP_TributeTerminal_Forest_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Forest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TributeTerminal_Forest_C::ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Forest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TributeTerminal_Forest.PrimalInventoryBP_TributeTerminal_Forest_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Forest");

	UPrimalInventoryBP_TributeTerminal_Forest_C_ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Forest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
