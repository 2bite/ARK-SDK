// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalGateframe_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalGateframe_Large.PrimalItemStructure_MetalGateframe_Large_C.ExecuteUbergraph_PrimalItemStructure_MetalGateframe_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalGateframe_Large_C::ExecuteUbergraph_PrimalItemStructure_MetalGateframe_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalGateframe_Large.PrimalItemStructure_MetalGateframe_Large_C.ExecuteUbergraph_PrimalItemStructure_MetalGateframe_Large");

	UPrimalItemStructure_MetalGateframe_Large_C_ExecuteUbergraph_PrimalItemStructure_MetalGateframe_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
