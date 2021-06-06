// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ChemBench_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ChemBench.PrimalItemStructure_ChemBench_C.ExecuteUbergraph_PrimalItemStructure_ChemBench
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ChemBench_C::ExecuteUbergraph_PrimalItemStructure_ChemBench(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ChemBench.PrimalItemStructure_ChemBench_C.ExecuteUbergraph_PrimalItemStructure_ChemBench");

	UPrimalItemStructure_ChemBench_C_ExecuteUbergraph_PrimalItemStructure_ChemBench_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
