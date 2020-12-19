// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_CondensedGas_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_CondensedGas.PrimalItemResource_CondensedGas_C.ExecuteUbergraph_PrimalItemResource_CondensedGas
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_CondensedGas_C::ExecuteUbergraph_PrimalItemResource_CondensedGas(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_CondensedGas.PrimalItemResource_CondensedGas_C.ExecuteUbergraph_PrimalItemResource_CondensedGas");

	UPrimalItemResource_CondensedGas_C_ExecuteUbergraph_PrimalItemResource_CondensedGas_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
