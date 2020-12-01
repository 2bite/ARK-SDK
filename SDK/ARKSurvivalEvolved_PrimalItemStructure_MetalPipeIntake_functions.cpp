// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalPipeIntake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalPipeIntake.PrimalItemStructure_MetalPipeIntake_C.ExecuteUbergraph_PrimalItemStructure_MetalPipeIntake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalPipeIntake_C::ExecuteUbergraph_PrimalItemStructure_MetalPipeIntake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalPipeIntake.PrimalItemStructure_MetalPipeIntake_C.ExecuteUbergraph_PrimalItemStructure_MetalPipeIntake");

	UPrimalItemStructure_MetalPipeIntake_C_ExecuteUbergraph_PrimalItemStructure_MetalPipeIntake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
