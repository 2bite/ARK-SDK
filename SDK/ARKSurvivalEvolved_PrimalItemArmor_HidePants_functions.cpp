// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HidePants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_HidePants.PrimalItemArmor_HidePants_C.ExecuteUbergraph_PrimalItemArmor_HidePants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HidePants_C::ExecuteUbergraph_PrimalItemArmor_HidePants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HidePants.PrimalItemArmor_HidePants_C.ExecuteUbergraph_PrimalItemArmor_HidePants");

	UPrimalItemArmor_HidePants_C_ExecuteUbergraph_PrimalItemArmor_HidePants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
