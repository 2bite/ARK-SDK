// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MetalHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_MetalHelmet.PrimalItemArmor_MetalHelmet_C.ExecuteUbergraph_PrimalItemArmor_MetalHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_MetalHelmet_C::ExecuteUbergraph_PrimalItemArmor_MetalHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_MetalHelmet.PrimalItemArmor_MetalHelmet_C.ExecuteUbergraph_PrimalItemArmor_MetalHelmet");

	UPrimalItemArmor_MetalHelmet_C_ExecuteUbergraph_PrimalItemArmor_MetalHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
