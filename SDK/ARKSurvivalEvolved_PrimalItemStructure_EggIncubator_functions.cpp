// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_EggIncubator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_EggIncubator.PrimalItemStructure_EggIncubator_C.ExecuteUbergraph_PrimalItemStructure_EggIncubator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_EggIncubator_C::ExecuteUbergraph_PrimalItemStructure_EggIncubator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_EggIncubator.PrimalItemStructure_EggIncubator_C.ExecuteUbergraph_PrimalItemStructure_EggIncubator");

	UPrimalItemStructure_EggIncubator_C_ExecuteUbergraph_PrimalItemStructure_EggIncubator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
