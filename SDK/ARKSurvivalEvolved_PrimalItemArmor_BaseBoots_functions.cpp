// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_BaseBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_BaseBoots.PrimalItemArmor_BaseBoots_C.ExecuteUbergraph_PrimalItemArmor_BaseBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_BaseBoots_C::ExecuteUbergraph_PrimalItemArmor_BaseBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_BaseBoots.PrimalItemArmor_BaseBoots_C.ExecuteUbergraph_PrimalItemArmor_BaseBoots");

	UPrimalItemArmor_BaseBoots_C_ExecuteUbergraph_PrimalItemArmor_BaseBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
