// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalGateframe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalGateframe.PrimalItemStructure_MetalGateframe_C.ExecuteUbergraph_PrimalItemStructure_MetalGateframe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalGateframe_C::ExecuteUbergraph_PrimalItemStructure_MetalGateframe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalGateframe.PrimalItemStructure_MetalGateframe_C.ExecuteUbergraph_PrimalItemStructure_MetalGateframe");

	UPrimalItemStructure_MetalGateframe_C_ExecuteUbergraph_PrimalItemStructure_MetalGateframe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
