// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_FurBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_FurBoots.PrimalItemArmor_FurBoots_C.ExecuteUbergraph_PrimalItemArmor_FurBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_FurBoots_C::ExecuteUbergraph_PrimalItemArmor_FurBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_FurBoots.PrimalItemArmor_FurBoots_C.ExecuteUbergraph_PrimalItemArmor_FurBoots");

	UPrimalItemArmor_FurBoots_C_ExecuteUbergraph_PrimalItemArmor_FurBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
