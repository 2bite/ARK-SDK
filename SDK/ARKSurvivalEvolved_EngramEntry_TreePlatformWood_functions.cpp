// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TreePlatformWood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TreePlatformWood.EngramEntry_TreePlatformWood_C.ExecuteUbergraph_EngramEntry_TreePlatformWood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TreePlatformWood_C::ExecuteUbergraph_EngramEntry_TreePlatformWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TreePlatformWood.EngramEntry_TreePlatformWood_C.ExecuteUbergraph_EngramEntry_TreePlatformWood");

	UEngramEntry_TreePlatformWood_C_ExecuteUbergraph_EngramEntry_TreePlatformWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
