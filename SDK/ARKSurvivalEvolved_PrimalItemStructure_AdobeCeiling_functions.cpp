// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeCeiling_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeCeiling.PrimalItemStructure_AdobeCeiling_C.ExecuteUbergraph_PrimalItemStructure_AdobeCeiling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeCeiling_C::ExecuteUbergraph_PrimalItemStructure_AdobeCeiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeCeiling.PrimalItemStructure_AdobeCeiling_C.ExecuteUbergraph_PrimalItemStructure_AdobeCeiling");

	UPrimalItemStructure_AdobeCeiling_C_ExecuteUbergraph_PrimalItemStructure_AdobeCeiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
