// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Grinder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Grinder.EngramEntry_Grinder_C.ExecuteUbergraph_EngramEntry_Grinder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Grinder_C::ExecuteUbergraph_EngramEntry_Grinder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Grinder.EngramEntry_Grinder_C.ExecuteUbergraph_EngramEntry_Grinder");

	UEngramEntry_Grinder_C_ExecuteUbergraph_EngramEntry_Grinder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
