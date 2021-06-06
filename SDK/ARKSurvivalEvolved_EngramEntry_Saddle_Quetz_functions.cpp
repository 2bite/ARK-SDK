// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Quetz_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Quetz.EngramEntry_Saddle_Quetz_C.ExecuteUbergraph_EngramEntry_Saddle_Quetz
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Quetz_C::ExecuteUbergraph_EngramEntry_Saddle_Quetz(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Quetz.EngramEntry_Saddle_Quetz_C.ExecuteUbergraph_EngramEntry_Saddle_Quetz");

	UEngramEntry_Saddle_Quetz_C_ExecuteUbergraph_EngramEntry_Saddle_Quetz_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
