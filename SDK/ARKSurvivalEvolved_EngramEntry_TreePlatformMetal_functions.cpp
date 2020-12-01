// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TreePlatformMetal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TreePlatformMetal.EngramEntry_TreePlatformMetal_C.ExecuteUbergraph_EngramEntry_TreePlatformMetal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TreePlatformMetal_C::ExecuteUbergraph_EngramEntry_TreePlatformMetal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TreePlatformMetal.EngramEntry_TreePlatformMetal_C.ExecuteUbergraph_EngramEntry_TreePlatformMetal");

	UEngramEntry_TreePlatformMetal_C_ExecuteUbergraph_EngramEntry_TreePlatformMetal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
