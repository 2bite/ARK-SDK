// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Plesia_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Plesia.EngramEntry_Saddle_Plesia_C.ExecuteUbergraph_EngramEntry_Saddle_Plesia
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Plesia_C::ExecuteUbergraph_EngramEntry_Saddle_Plesia(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Plesia.EngramEntry_Saddle_Plesia_C.ExecuteUbergraph_EngramEntry_Saddle_Plesia");

	UEngramEntry_Saddle_Plesia_C_ExecuteUbergraph_EngramEntry_Saddle_Plesia_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
