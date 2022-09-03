// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableMiracleGro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C.BlueprintUsed
// ()

void UPrimalItemConsumableMiracleGro_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C.BlueprintUsed");

	UPrimalItemConsumableMiracleGro_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C.ExecuteUbergraph_PrimalItemConsumableMiracleGro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumableMiracleGro_C::ExecuteUbergraph_PrimalItemConsumableMiracleGro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C.ExecuteUbergraph_PrimalItemConsumableMiracleGro");

	UPrimalItemConsumableMiracleGro_C_ExecuteUbergraph_PrimalItemConsumableMiracleGro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
