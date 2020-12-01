// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalGate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalGate.PrimalItemStructure_MetalGate_C.ExecuteUbergraph_PrimalItemStructure_MetalGate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalGate_C::ExecuteUbergraph_PrimalItemStructure_MetalGate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalGate.PrimalItemStructure_MetalGate_C.ExecuteUbergraph_PrimalItemStructure_MetalGate");

	UPrimalItemStructure_MetalGate_C_ExecuteUbergraph_PrimalItemStructure_MetalGate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
