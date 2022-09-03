// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TributeTerminal_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TributeTerminal_Base.PrimalInventoryBP_TributeTerminal_Base_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TributeTerminal_Base_C::ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TributeTerminal_Base.PrimalInventoryBP_TributeTerminal_Base_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Base");

	UPrimalInventoryBP_TributeTerminal_Base_C_ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
