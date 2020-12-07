// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ScubaPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ScubaPants.PrimalItemArmor_ScubaPants_C.ExecuteUbergraph_PrimalItemArmor_ScubaPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ScubaPants_C::ExecuteUbergraph_PrimalItemArmor_ScubaPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ScubaPants.PrimalItemArmor_ScubaPants_C.ExecuteUbergraph_PrimalItemArmor_ScubaPants");

	UPrimalItemArmor_ScubaPants_C_ExecuteUbergraph_PrimalItemArmor_ScubaPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
