// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GrapplingHook_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GrapplingHook.EngramEntry_GrapplingHook_C.ExecuteUbergraph_EngramEntry_GrapplingHook
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GrapplingHook_C::ExecuteUbergraph_EngramEntry_GrapplingHook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GrapplingHook.EngramEntry_GrapplingHook_C.ExecuteUbergraph_EngramEntry_GrapplingHook");

	UEngramEntry_GrapplingHook_C_ExecuteUbergraph_EngramEntry_GrapplingHook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
