// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Milkglider_Saddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Milkglider_Saddle.EngramEntry_Milkglider_Saddle_C.ExecuteUbergraph_EngramEntry_Milkglider_Saddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Milkglider_Saddle_C::ExecuteUbergraph_EngramEntry_Milkglider_Saddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Milkglider_Saddle.EngramEntry_Milkglider_Saddle_C.ExecuteUbergraph_EngramEntry_Milkglider_Saddle");

	UEngramEntry_Milkglider_Saddle_C_ExecuteUbergraph_EngramEntry_Milkglider_Saddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
