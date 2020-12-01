// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Berry_Stimberry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Berry_Stimberry.PrimalItemConsumable_Berry_Stimberry_C.ExecuteUbergraph_PrimalItemConsumable_Berry_Stimberry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Berry_Stimberry_C::ExecuteUbergraph_PrimalItemConsumable_Berry_Stimberry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Berry_Stimberry.PrimalItemConsumable_Berry_Stimberry_C.ExecuteUbergraph_PrimalItemConsumable_Berry_Stimberry");

	UPrimalItemConsumable_Berry_Stimberry_C_ExecuteUbergraph_PrimalItemConsumable_Berry_Stimberry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
