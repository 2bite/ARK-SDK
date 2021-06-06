// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Veggie_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Veggie_Base.PrimalItemConsumable_Veggie_Base_C.ExecuteUbergraph_PrimalItemConsumable_Veggie_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Veggie_Base_C::ExecuteUbergraph_PrimalItemConsumable_Veggie_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Veggie_Base.PrimalItemConsumable_Veggie_Base_C.ExecuteUbergraph_PrimalItemConsumable_Veggie_Base");

	UPrimalItemConsumable_Veggie_Base_C_ExecuteUbergraph_PrimalItemConsumable_Veggie_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
