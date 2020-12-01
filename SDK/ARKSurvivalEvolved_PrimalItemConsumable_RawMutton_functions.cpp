// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_RawMutton_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_RawMutton.PrimalItemConsumable_RawMutton_C.ExecuteUbergraph_PrimalItemConsumable_RawMutton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_RawMutton_C::ExecuteUbergraph_PrimalItemConsumable_RawMutton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_RawMutton.PrimalItemConsumable_RawMutton_C.ExecuteUbergraph_PrimalItemConsumable_RawMutton");

	UPrimalItemConsumable_RawMutton_C_ExecuteUbergraph_PrimalItemConsumable_RawMutton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
