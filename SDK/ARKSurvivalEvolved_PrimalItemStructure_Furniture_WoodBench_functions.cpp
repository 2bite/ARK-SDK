// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Furniture_WoodBench_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Furniture_WoodBench.PrimalItemStructure_Furniture_WoodBench_C.ExecuteUbergraph_PrimalItemStructure_Furniture_WoodBench
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Furniture_WoodBench_C::ExecuteUbergraph_PrimalItemStructure_Furniture_WoodBench(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Furniture_WoodBench.PrimalItemStructure_Furniture_WoodBench_C.ExecuteUbergraph_PrimalItemStructure_Furniture_WoodBench");

	UPrimalItemStructure_Furniture_WoodBench_C_ExecuteUbergraph_PrimalItemStructure_Furniture_WoodBench_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
