// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekHelmet.PrimalItemArmor_TekHelmet_C.ExecuteUbergraph_PrimalItemArmor_TekHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekHelmet_C::ExecuteUbergraph_PrimalItemArmor_TekHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekHelmet.PrimalItemArmor_TekHelmet_C.ExecuteUbergraph_PrimalItemArmor_TekHelmet");

	UPrimalItemArmor_TekHelmet_C_ExecuteUbergraph_PrimalItemArmor_TekHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
