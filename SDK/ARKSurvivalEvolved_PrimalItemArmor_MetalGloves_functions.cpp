// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MetalGloves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MetalGloves.PrimalItemArmor_MetalGloves_C.ExecuteUbergraph_PrimalItemArmor_MetalGloves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MetalGloves_C::ExecuteUbergraph_PrimalItemArmor_MetalGloves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MetalGloves.PrimalItemArmor_MetalGloves_C.ExecuteUbergraph_PrimalItemArmor_MetalGloves");

	UPrimalItemArmor_MetalGloves_C_ExecuteUbergraph_PrimalItemArmor_MetalGloves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
