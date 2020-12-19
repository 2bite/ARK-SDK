// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Crystal_IslesPrimal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Crystal_IslesPrimal.PrimalItemResource_Crystal_IslesPrimal_C.ExecuteUbergraph_PrimalItemResource_Crystal_IslesPrimal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Crystal_IslesPrimal_C::ExecuteUbergraph_PrimalItemResource_Crystal_IslesPrimal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Crystal_IslesPrimal.PrimalItemResource_Crystal_IslesPrimal_C.ExecuteUbergraph_PrimalItemResource_Crystal_IslesPrimal");

	UPrimalItemResource_Crystal_IslesPrimal_C_ExecuteUbergraph_PrimalItemResource_Crystal_IslesPrimal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
