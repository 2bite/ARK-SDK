// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MetalPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MetalPants.PrimalItemArmor_MetalPants_C.ExecuteUbergraph_PrimalItemArmor_MetalPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MetalPants_C::ExecuteUbergraph_PrimalItemArmor_MetalPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MetalPants.PrimalItemArmor_MetalPants_C.ExecuteUbergraph_PrimalItemArmor_MetalPants");

	UPrimalItemArmor_MetalPants_C_ExecuteUbergraph_PrimalItemArmor_MetalPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
