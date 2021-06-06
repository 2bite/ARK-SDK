// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekGenerator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekGenerator.PrimalItemStructure_TekGenerator_C.ExecuteUbergraph_PrimalItemStructure_TekGenerator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekGenerator_C::ExecuteUbergraph_PrimalItemStructure_TekGenerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekGenerator.PrimalItemStructure_TekGenerator_C.ExecuteUbergraph_PrimalItemStructure_TekGenerator");

	UPrimalItemStructure_TekGenerator_C_ExecuteUbergraph_PrimalItemStructure_TekGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
