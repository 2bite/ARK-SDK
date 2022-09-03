// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MetalBoots_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MetalBoots.PrimalItemArmor_MetalBoots_C.ExecuteUbergraph_PrimalItemArmor_MetalBoots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MetalBoots_C::ExecuteUbergraph_PrimalItemArmor_MetalBoots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MetalBoots.PrimalItemArmor_MetalBoots_C.ExecuteUbergraph_PrimalItemArmor_MetalBoots");

	UPrimalItemArmor_MetalBoots_C_ExecuteUbergraph_PrimalItemArmor_MetalBoots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
