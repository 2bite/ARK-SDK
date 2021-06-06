// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MetalShield_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MetalShield.PrimalItemArmor_MetalShield_C.ExecuteUbergraph_PrimalItemArmor_MetalShield
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MetalShield_C::ExecuteUbergraph_PrimalItemArmor_MetalShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MetalShield.PrimalItemArmor_MetalShield_C.ExecuteUbergraph_PrimalItemArmor_MetalShield");

	UPrimalItemArmor_MetalShield_C_ExecuteUbergraph_PrimalItemArmor_MetalShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
