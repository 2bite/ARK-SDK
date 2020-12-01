// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Stimulant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Stimulant.PrimalItemConsumable_Stimulant_C.ExecuteUbergraph_PrimalItemConsumable_Stimulant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Stimulant_C::ExecuteUbergraph_PrimalItemConsumable_Stimulant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Stimulant.PrimalItemConsumable_Stimulant_C.ExecuteUbergraph_PrimalItemConsumable_Stimulant");

	UPrimalItemConsumable_Stimulant_C_ExecuteUbergraph_PrimalItemConsumable_Stimulant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
