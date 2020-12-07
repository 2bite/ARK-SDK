// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneCeiling_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StoneCeiling.PrimalItemStructure_StoneCeiling_C.ExecuteUbergraph_PrimalItemStructure_StoneCeiling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StoneCeiling_C::ExecuteUbergraph_PrimalItemStructure_StoneCeiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StoneCeiling.PrimalItemStructure_StoneCeiling_C.ExecuteUbergraph_PrimalItemStructure_StoneCeiling");

	UPrimalItemStructure_StoneCeiling_C_ExecuteUbergraph_PrimalItemStructure_StoneCeiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
