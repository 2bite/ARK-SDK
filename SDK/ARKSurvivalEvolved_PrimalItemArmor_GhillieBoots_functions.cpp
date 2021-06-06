// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_GhillieBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_GhillieBoots.PrimalItemArmor_GhillieBoots_C.ExecuteUbergraph_PrimalItemArmor_GhillieBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_GhillieBoots_C::ExecuteUbergraph_PrimalItemArmor_GhillieBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GhillieBoots.PrimalItemArmor_GhillieBoots_C.ExecuteUbergraph_PrimalItemArmor_GhillieBoots");

	UPrimalItemArmor_GhillieBoots_C_ExecuteUbergraph_PrimalItemArmor_GhillieBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
