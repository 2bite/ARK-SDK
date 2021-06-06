// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_BugRepellant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_BugRepellant.PrimalItemConsumable_BugRepellant_C.ExecuteUbergraph_PrimalItemConsumable_BugRepellant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_BugRepellant_C::ExecuteUbergraph_PrimalItemConsumable_BugRepellant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_BugRepellant.PrimalItemConsumable_BugRepellant_C.ExecuteUbergraph_PrimalItemConsumable_BugRepellant");

	UPrimalItemConsumable_BugRepellant_C_ExecuteUbergraph_PrimalItemConsumable_BugRepellant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
