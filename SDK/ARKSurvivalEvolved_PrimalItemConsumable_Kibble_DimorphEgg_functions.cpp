// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_DimorphEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Kibble_DimorphEgg.PrimalItemConsumable_Kibble_DimorphEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_DimorphEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Kibble_DimorphEgg_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_DimorphEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_DimorphEgg.PrimalItemConsumable_Kibble_DimorphEgg_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_DimorphEgg");

	UPrimalItemConsumable_Kibble_DimorphEgg_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_DimorphEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
