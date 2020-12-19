// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HideHelmetAlt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_HideHelmetAlt.PrimalItemArmor_HideHelmetAlt_C.ExecuteUbergraph_PrimalItemArmor_HideHelmetAlt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HideHelmetAlt_C::ExecuteUbergraph_PrimalItemArmor_HideHelmetAlt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HideHelmetAlt.PrimalItemArmor_HideHelmetAlt_C.ExecuteUbergraph_PrimalItemArmor_HideHelmetAlt");

	UPrimalItemArmor_HideHelmetAlt_C_ExecuteUbergraph_PrimalItemArmor_HideHelmetAlt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
