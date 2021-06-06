// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_BugRepel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_BugRepel.EngramEntry_BugRepel_C.ExecuteUbergraph_EngramEntry_BugRepel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_BugRepel_C::ExecuteUbergraph_EngramEntry_BugRepel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_BugRepel.EngramEntry_BugRepel_C.ExecuteUbergraph_EngramEntry_BugRepel");

	UEngramEntry_BugRepel_C_ExecuteUbergraph_EngramEntry_BugRepel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
