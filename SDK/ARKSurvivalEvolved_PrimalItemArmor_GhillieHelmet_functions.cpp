// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_GhillieHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_GhillieHelmet.PrimalItemArmor_GhillieHelmet_C.ExecuteUbergraph_PrimalItemArmor_GhillieHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_GhillieHelmet_C::ExecuteUbergraph_PrimalItemArmor_GhillieHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GhillieHelmet.PrimalItemArmor_GhillieHelmet_C.ExecuteUbergraph_PrimalItemArmor_GhillieHelmet");

	UPrimalItemArmor_GhillieHelmet_C_ExecuteUbergraph_PrimalItemArmor_GhillieHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
