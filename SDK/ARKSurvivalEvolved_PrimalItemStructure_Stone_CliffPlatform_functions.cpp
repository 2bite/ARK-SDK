// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Stone_CliffPlatform_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Stone_CliffPlatform.PrimalItemStructure_Stone_CliffPlatform_C.ExecuteUbergraph_PrimalItemStructure_Stone_CliffPlatform
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Stone_CliffPlatform_C::ExecuteUbergraph_PrimalItemStructure_Stone_CliffPlatform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Stone_CliffPlatform.PrimalItemStructure_Stone_CliffPlatform_C.ExecuteUbergraph_PrimalItemStructure_Stone_CliffPlatform");

	UPrimalItemStructure_Stone_CliffPlatform_C_ExecuteUbergraph_PrimalItemStructure_Stone_CliffPlatform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
