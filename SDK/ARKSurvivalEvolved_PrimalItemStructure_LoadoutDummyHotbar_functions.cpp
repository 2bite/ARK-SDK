// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_LoadoutDummyHotbar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_LoadoutDummyHotbar.PrimalItemStructure_LoadoutDummyHotbar_C.ExecuteUbergraph_PrimalItemStructure_LoadoutDummyHotbar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_LoadoutDummyHotbar_C::ExecuteUbergraph_PrimalItemStructure_LoadoutDummyHotbar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_LoadoutDummyHotbar.PrimalItemStructure_LoadoutDummyHotbar_C.ExecuteUbergraph_PrimalItemStructure_LoadoutDummyHotbar");

	UPrimalItemStructure_LoadoutDummyHotbar_C_ExecuteUbergraph_PrimalItemStructure_LoadoutDummyHotbar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
