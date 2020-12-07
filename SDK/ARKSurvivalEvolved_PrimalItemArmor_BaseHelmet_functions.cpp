// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_BaseHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_BaseHelmet.PrimalItemArmor_BaseHelmet_C.ExecuteUbergraph_PrimalItemArmor_BaseHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_BaseHelmet_C::ExecuteUbergraph_PrimalItemArmor_BaseHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_BaseHelmet.PrimalItemArmor_BaseHelmet_C.ExecuteUbergraph_PrimalItemArmor_BaseHelmet");

	UPrimalItemArmor_BaseHelmet_C_ExecuteUbergraph_PrimalItemArmor_BaseHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
