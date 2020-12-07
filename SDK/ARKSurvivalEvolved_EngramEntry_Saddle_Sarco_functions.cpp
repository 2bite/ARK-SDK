// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Sarco_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Sarco.EngramEntry_Saddle_Sarco_C.ExecuteUbergraph_EngramEntry_Saddle_Sarco
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Sarco_C::ExecuteUbergraph_EngramEntry_Saddle_Sarco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Sarco.EngramEntry_Saddle_Sarco_C.ExecuteUbergraph_EngramEntry_Saddle_Sarco");

	UEngramEntry_Saddle_Sarco_C_ExecuteUbergraph_EngramEntry_Saddle_Sarco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
