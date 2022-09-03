// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HideHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_HideHelmet.PrimalItemArmor_HideHelmet_C.ExecuteUbergraph_PrimalItemArmor_HideHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HideHelmet_C::ExecuteUbergraph_PrimalItemArmor_HideHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HideHelmet.PrimalItemArmor_HideHelmet_C.ExecuteUbergraph_PrimalItemArmor_HideHelmet");

	UPrimalItemArmor_HideHelmet_C_ExecuteUbergraph_PrimalItemArmor_HideHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
