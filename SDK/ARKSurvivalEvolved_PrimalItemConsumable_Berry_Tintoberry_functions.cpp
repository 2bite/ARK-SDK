// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Berry_Tintoberry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Berry_Tintoberry.PrimalItemConsumable_Berry_Tintoberry_C.ExecuteUbergraph_PrimalItemConsumable_Berry_Tintoberry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Berry_Tintoberry_C::ExecuteUbergraph_PrimalItemConsumable_Berry_Tintoberry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Berry_Tintoberry.PrimalItemConsumable_Berry_Tintoberry_C.ExecuteUbergraph_PrimalItemConsumable_Berry_Tintoberry");

	UPrimalItemConsumable_Berry_Tintoberry_C_ExecuteUbergraph_PrimalItemConsumable_Berry_Tintoberry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
