// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_NamelessVenom_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_NamelessVenom.PrimalItemConsumable_NamelessVenom_C.BlueprintUsed
// ()

void UPrimalItemConsumable_NamelessVenom_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_NamelessVenom.PrimalItemConsumable_NamelessVenom_C.BlueprintUsed");

	UPrimalItemConsumable_NamelessVenom_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_NamelessVenom.PrimalItemConsumable_NamelessVenom_C.ExecuteUbergraph_PrimalItemConsumable_NamelessVenom
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_NamelessVenom_C::ExecuteUbergraph_PrimalItemConsumable_NamelessVenom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_NamelessVenom.PrimalItemConsumable_NamelessVenom_C.ExecuteUbergraph_PrimalItemConsumable_NamelessVenom");

	UPrimalItemConsumable_NamelessVenom_C_ExecuteUbergraph_PrimalItemConsumable_NamelessVenom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
