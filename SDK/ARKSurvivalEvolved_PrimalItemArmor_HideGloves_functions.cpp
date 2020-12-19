// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_HideGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_HideGloves.PrimalItemArmor_HideGloves_C.ExecuteUbergraph_PrimalItemArmor_HideGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_HideGloves_C::ExecuteUbergraph_PrimalItemArmor_HideGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_HideGloves.PrimalItemArmor_HideGloves_C.ExecuteUbergraph_PrimalItemArmor_HideGloves");

	UPrimalItemArmor_HideGloves_C_ExecuteUbergraph_PrimalItemArmor_HideGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
