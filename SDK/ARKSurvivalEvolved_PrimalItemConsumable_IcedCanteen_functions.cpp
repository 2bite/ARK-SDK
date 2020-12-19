// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_IcedCanteen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_IcedCanteen.PrimalItemConsumable_IcedCanteen_C.ExecuteUbergraph_PrimalItemConsumable_IcedCanteen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_IcedCanteen_C::ExecuteUbergraph_PrimalItemConsumable_IcedCanteen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_IcedCanteen.PrimalItemConsumable_IcedCanteen_C.ExecuteUbergraph_PrimalItemConsumable_IcedCanteen");

	UPrimalItemConsumable_IcedCanteen_C_ExecuteUbergraph_PrimalItemConsumable_IcedCanteen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
