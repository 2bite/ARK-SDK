// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Ramp_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Ramp_Metal.PrimalItemStructure_Ramp_Metal_C.ExecuteUbergraph_PrimalItemStructure_Ramp_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Ramp_Metal_C::ExecuteUbergraph_PrimalItemStructure_Ramp_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Ramp_Metal.PrimalItemStructure_Ramp_Metal_C.ExecuteUbergraph_PrimalItemStructure_Ramp_Metal");

	UPrimalItemStructure_Ramp_Metal_C_ExecuteUbergraph_PrimalItemStructure_Ramp_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
