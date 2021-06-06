// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Allo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Allo.EngramEntry_Saddle_Allo_C.ExecuteUbergraph_EngramEntry_Saddle_Allo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Allo_C::ExecuteUbergraph_EngramEntry_Saddle_Allo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Allo.EngramEntry_Saddle_Allo_C.ExecuteUbergraph_EngramEntry_Saddle_Allo");

	UEngramEntry_Saddle_Allo_C_ExecuteUbergraph_EngramEntry_Saddle_Allo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
