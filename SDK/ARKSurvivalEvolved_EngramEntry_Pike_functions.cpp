// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Pike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Pike.EngramEntry_Pike_C.ExecuteUbergraph_EngramEntry_Pike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Pike_C::ExecuteUbergraph_EngramEntry_Pike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Pike.EngramEntry_Pike_C.ExecuteUbergraph_EngramEntry_Pike");

	UEngramEntry_Pike_C_ExecuteUbergraph_EngramEntry_Pike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
