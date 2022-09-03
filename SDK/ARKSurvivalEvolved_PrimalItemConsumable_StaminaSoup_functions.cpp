// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_StaminaSoup_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_StaminaSoup.PrimalItemConsumable_StaminaSoup_C.ExecuteUbergraph_PrimalItemConsumable_StaminaSoup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_StaminaSoup_C::ExecuteUbergraph_PrimalItemConsumable_StaminaSoup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_StaminaSoup.PrimalItemConsumable_StaminaSoup_C.ExecuteUbergraph_PrimalItemConsumable_StaminaSoup");

	UPrimalItemConsumable_StaminaSoup_C_ExecuteUbergraph_PrimalItemConsumable_StaminaSoup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
