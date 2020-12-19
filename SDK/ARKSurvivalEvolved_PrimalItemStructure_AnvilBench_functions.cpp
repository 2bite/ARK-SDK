// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AnvilBench_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AnvilBench.PrimalItemStructure_AnvilBench_C.ExecuteUbergraph_PrimalItemStructure_AnvilBench
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AnvilBench_C::ExecuteUbergraph_PrimalItemStructure_AnvilBench(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AnvilBench.PrimalItemStructure_AnvilBench_C.ExecuteUbergraph_PrimalItemStructure_AnvilBench");

	UPrimalItemStructure_AnvilBench_C_ExecuteUbergraph_PrimalItemStructure_AnvilBench_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
