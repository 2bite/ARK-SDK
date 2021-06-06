// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MinersHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MinersHelmet.PrimalItemArmor_MinersHelmet_C.ExecuteUbergraph_PrimalItemArmor_MinersHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MinersHelmet_C::ExecuteUbergraph_PrimalItemArmor_MinersHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MinersHelmet.PrimalItemArmor_MinersHelmet_C.ExecuteUbergraph_PrimalItemArmor_MinersHelmet");

	UPrimalItemArmor_MinersHelmet_C_ExecuteUbergraph_PrimalItemArmor_MinersHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
