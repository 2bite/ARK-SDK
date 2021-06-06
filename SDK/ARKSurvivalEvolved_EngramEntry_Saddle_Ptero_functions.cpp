// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Ptero_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Ptero.EngramEntry_Saddle_Ptero_C.ExecuteUbergraph_EngramEntry_Saddle_Ptero
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Ptero_C::ExecuteUbergraph_EngramEntry_Saddle_Ptero(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Ptero.EngramEntry_Saddle_Ptero_C.ExecuteUbergraph_EngramEntry_Saddle_Ptero");

	UEngramEntry_Saddle_Ptero_C_ExecuteUbergraph_EngramEntry_Saddle_Ptero_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
