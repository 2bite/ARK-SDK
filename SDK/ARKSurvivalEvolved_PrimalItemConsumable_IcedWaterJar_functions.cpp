// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_IcedWaterJar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_IcedWaterJar.PrimalItemConsumable_IcedWaterJar_C.ExecuteUbergraph_PrimalItemConsumable_IcedWaterJar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_IcedWaterJar_C::ExecuteUbergraph_PrimalItemConsumable_IcedWaterJar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_IcedWaterJar.PrimalItemConsumable_IcedWaterJar_C.ExecuteUbergraph_PrimalItemConsumable_IcedWaterJar");

	UPrimalItemConsumable_IcedWaterJar_C_ExecuteUbergraph_PrimalItemConsumable_IcedWaterJar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
