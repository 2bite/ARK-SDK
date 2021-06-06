// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Direbear_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Direbear.EngramEntry_Saddle_Direbear_C.ExecuteUbergraph_EngramEntry_Saddle_Direbear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Direbear_C::ExecuteUbergraph_EngramEntry_Saddle_Direbear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Direbear.EngramEntry_Saddle_Direbear_C.ExecuteUbergraph_EngramEntry_Saddle_Direbear");

	UEngramEntry_Saddle_Direbear_C_ExecuteUbergraph_EngramEntry_Saddle_Direbear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
