// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_Compy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_Compy.PrimalItemConsumable_Kibble_Compy_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Compy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_Compy_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_Compy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_Compy.PrimalItemConsumable_Kibble_Compy_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Compy");

	UPrimalItemConsumable_Kibble_Compy_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_Compy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
