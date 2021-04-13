// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_ValentinesChocolate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_ValentinesChocolate.PrimalItemConsumable_ValentinesChocolate_C.ExecuteUbergraph_PrimalItemConsumable_ValentinesChocolate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_ValentinesChocolate_C::ExecuteUbergraph_PrimalItemConsumable_ValentinesChocolate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_ValentinesChocolate.PrimalItemConsumable_ValentinesChocolate_C.ExecuteUbergraph_PrimalItemConsumable_ValentinesChocolate");

	UPrimalItemConsumable_ValentinesChocolate_C_ExecuteUbergraph_PrimalItemConsumable_ValentinesChocolate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
