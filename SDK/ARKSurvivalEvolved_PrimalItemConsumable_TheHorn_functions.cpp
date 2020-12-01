// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_TheHorn_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_TheHorn.PrimalItemConsumable_TheHorn_C.ExecuteUbergraph_PrimalItemConsumable_TheHorn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_TheHorn_C::ExecuteUbergraph_PrimalItemConsumable_TheHorn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TheHorn.PrimalItemConsumable_TheHorn_C.ExecuteUbergraph_PrimalItemConsumable_TheHorn");

	UPrimalItemConsumable_TheHorn_C_ExecuteUbergraph_PrimalItemConsumable_TheHorn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
