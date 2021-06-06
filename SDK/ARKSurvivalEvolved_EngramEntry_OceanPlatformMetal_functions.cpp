// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_OceanPlatformMetal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_OceanPlatformMetal.EngramEntry_OceanPlatformMetal_C.ExecuteUbergraph_EngramEntry_OceanPlatformMetal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_OceanPlatformMetal_C::ExecuteUbergraph_EngramEntry_OceanPlatformMetal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_OceanPlatformMetal.EngramEntry_OceanPlatformMetal_C.ExecuteUbergraph_EngramEntry_OceanPlatformMetal");

	UEngramEntry_OceanPlatformMetal_C_ExecuteUbergraph_EngramEntry_OceanPlatformMetal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
