// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_RiotBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_RiotBoots.PrimalItemArmor_RiotBoots_C.ExecuteUbergraph_PrimalItemArmor_RiotBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_RiotBoots_C::ExecuteUbergraph_PrimalItemArmor_RiotBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_RiotBoots.PrimalItemArmor_RiotBoots_C.ExecuteUbergraph_PrimalItemArmor_RiotBoots");

	UPrimalItemArmor_RiotBoots_C_ExecuteUbergraph_PrimalItemArmor_RiotBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
