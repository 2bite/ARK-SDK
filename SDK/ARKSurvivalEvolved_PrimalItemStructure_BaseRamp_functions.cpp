// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseRamp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseRamp.PrimalItemStructure_BaseRamp_C.ExecuteUbergraph_PrimalItemStructure_BaseRamp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseRamp_C::ExecuteUbergraph_PrimalItemStructure_BaseRamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseRamp.PrimalItemStructure_BaseRamp_C.ExecuteUbergraph_PrimalItemStructure_BaseRamp");

	UPrimalItemStructure_BaseRamp_C_ExecuteUbergraph_PrimalItemStructure_BaseRamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
