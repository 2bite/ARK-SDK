// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StandingTorch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StandingTorch.PrimalItemStructure_StandingTorch_C.ExecuteUbergraph_PrimalItemStructure_StandingTorch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StandingTorch_C::ExecuteUbergraph_PrimalItemStructure_StandingTorch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StandingTorch.PrimalItemStructure_StandingTorch_C.ExecuteUbergraph_PrimalItemStructure_StandingTorch");

	UPrimalItemStructure_StandingTorch_C_ExecuteUbergraph_PrimalItemStructure_StandingTorch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
