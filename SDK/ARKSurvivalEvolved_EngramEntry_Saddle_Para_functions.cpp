// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Para_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Para.EngramEntry_Saddle_Para_C.ExecuteUbergraph_EngramEntry_Saddle_Para
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Para_C::ExecuteUbergraph_EngramEntry_Saddle_Para(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Para.EngramEntry_Saddle_Para_C.ExecuteUbergraph_EngramEntry_Saddle_Para");

	UEngramEntry_Saddle_Para_C_ExecuteUbergraph_EngramEntry_Saddle_Para_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
