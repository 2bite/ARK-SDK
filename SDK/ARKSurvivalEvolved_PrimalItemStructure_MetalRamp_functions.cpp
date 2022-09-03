// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalRamp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalRamp.PrimalItemStructure_MetalRamp_C.ExecuteUbergraph_PrimalItemStructure_MetalRamp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalRamp_C::ExecuteUbergraph_PrimalItemStructure_MetalRamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalRamp.PrimalItemStructure_MetalRamp_C.ExecuteUbergraph_PrimalItemStructure_MetalRamp");

	UPrimalItemStructure_MetalRamp_C_ExecuteUbergraph_PrimalItemStructure_MetalRamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
