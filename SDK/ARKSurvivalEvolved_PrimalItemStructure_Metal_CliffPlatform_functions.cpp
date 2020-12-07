// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Metal_CliffPlatform_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Metal_CliffPlatform.PrimalItemStructure_Metal_CliffPlatform_C.ExecuteUbergraph_PrimalItemStructure_Metal_CliffPlatform
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Metal_CliffPlatform_C::ExecuteUbergraph_PrimalItemStructure_Metal_CliffPlatform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Metal_CliffPlatform.PrimalItemStructure_Metal_CliffPlatform_C.ExecuteUbergraph_PrimalItemStructure_Metal_CliffPlatform");

	UPrimalItemStructure_Metal_CliffPlatform_C_ExecuteUbergraph_PrimalItemStructure_Metal_CliffPlatform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
