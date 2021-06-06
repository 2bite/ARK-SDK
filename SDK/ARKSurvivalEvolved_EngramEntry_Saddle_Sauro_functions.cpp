// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Sauro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Sauro.EngramEntry_Saddle_Sauro_C.ExecuteUbergraph_EngramEntry_Saddle_Sauro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Sauro_C::ExecuteUbergraph_EngramEntry_Saddle_Sauro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Sauro.EngramEntry_Saddle_Sauro_C.ExecuteUbergraph_EngramEntry_Saddle_Sauro");

	UEngramEntry_Saddle_Sauro_C_ExecuteUbergraph_EngramEntry_Saddle_Sauro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
