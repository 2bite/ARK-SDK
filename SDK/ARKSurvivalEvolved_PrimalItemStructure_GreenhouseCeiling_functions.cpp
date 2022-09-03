// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_GreenhouseCeiling_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_GreenhouseCeiling.PrimalItemStructure_GreenhouseCeiling_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseCeiling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_GreenhouseCeiling_C::ExecuteUbergraph_PrimalItemStructure_GreenhouseCeiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_GreenhouseCeiling.PrimalItemStructure_GreenhouseCeiling_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseCeiling");

	UPrimalItemStructure_GreenhouseCeiling_C_ExecuteUbergraph_PrimalItemStructure_GreenhouseCeiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
