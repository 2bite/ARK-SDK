// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Dunkle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Dunkle.EngramEntry_Saddle_Dunkle_C.ExecuteUbergraph_EngramEntry_Saddle_Dunkle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Dunkle_C::ExecuteUbergraph_EngramEntry_Saddle_Dunkle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Dunkle.EngramEntry_Saddle_Dunkle_C.ExecuteUbergraph_EngramEntry_Saddle_Dunkle");

	UEngramEntry_Saddle_Dunkle_C_ExecuteUbergraph_EngramEntry_Saddle_Dunkle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
