// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TributeTerminal_Red_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TributeTerminal_Red.PrimalInventoryBP_TributeTerminal_Red_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Red
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TributeTerminal_Red_C::ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Red(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TributeTerminal_Red.PrimalInventoryBP_TributeTerminal_Red_C.ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Red");

	UPrimalInventoryBP_TributeTerminal_Red_C_ExecuteUbergraph_PrimalInventoryBP_TributeTerminal_Red_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
