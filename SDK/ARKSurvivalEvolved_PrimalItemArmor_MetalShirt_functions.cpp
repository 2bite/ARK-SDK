// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MetalShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MetalShirt.PrimalItemArmor_MetalShirt_C.ExecuteUbergraph_PrimalItemArmor_MetalShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MetalShirt_C::ExecuteUbergraph_PrimalItemArmor_MetalShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MetalShirt.PrimalItemArmor_MetalShirt_C.ExecuteUbergraph_PrimalItemArmor_MetalShirt");

	UPrimalItemArmor_MetalShirt_C_ExecuteUbergraph_PrimalItemArmor_MetalShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
