// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalLadder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalLadder.PrimalItemStructure_MetalLadder_C.ExecuteUbergraph_PrimalItemStructure_MetalLadder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalLadder_C::ExecuteUbergraph_PrimalItemStructure_MetalLadder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalLadder.PrimalItemStructure_MetalLadder_C.ExecuteUbergraph_PrimalItemStructure_MetalLadder");

	UPrimalItemStructure_MetalLadder_C_ExecuteUbergraph_PrimalItemStructure_MetalLadder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
