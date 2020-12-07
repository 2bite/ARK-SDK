// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_OceanPlatformWood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_OceanPlatformWood.EngramEntry_OceanPlatformWood_C.ExecuteUbergraph_EngramEntry_OceanPlatformWood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_OceanPlatformWood_C::ExecuteUbergraph_EngramEntry_OceanPlatformWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_OceanPlatformWood.EngramEntry_OceanPlatformWood_C.ExecuteUbergraph_EngramEntry_OceanPlatformWood");

	UEngramEntry_OceanPlatformWood_C_ExecuteUbergraph_EngramEntry_OceanPlatformWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
