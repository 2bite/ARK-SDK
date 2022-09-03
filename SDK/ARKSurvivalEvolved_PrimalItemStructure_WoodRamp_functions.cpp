// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodRamp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodRamp.PrimalItemStructure_WoodRamp_C.ExecuteUbergraph_PrimalItemStructure_WoodRamp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodRamp_C::ExecuteUbergraph_PrimalItemStructure_WoodRamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodRamp.PrimalItemStructure_WoodRamp_C.ExecuteUbergraph_PrimalItemStructure_WoodRamp");

	UPrimalItemStructure_WoodRamp_C_ExecuteUbergraph_PrimalItemStructure_WoodRamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
