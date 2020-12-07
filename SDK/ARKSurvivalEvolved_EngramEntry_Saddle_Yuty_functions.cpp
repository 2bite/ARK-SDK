// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Yuty_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Yuty.EngramEntry_Saddle_Yuty_C.ExecuteUbergraph_EngramEntry_Saddle_Yuty
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Yuty_C::ExecuteUbergraph_EngramEntry_Saddle_Yuty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Yuty.EngramEntry_Saddle_Yuty_C.ExecuteUbergraph_EngramEntry_Saddle_Yuty");

	UEngramEntry_Saddle_Yuty_C_ExecuteUbergraph_EngramEntry_Saddle_Yuty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
