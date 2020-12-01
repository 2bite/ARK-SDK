// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Carno_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Carno.EngramEntry_Saddle_Carno_C.ExecuteUbergraph_EngramEntry_Saddle_Carno
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Carno_C::ExecuteUbergraph_EngramEntry_Saddle_Carno(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Carno.EngramEntry_Saddle_Carno_C.ExecuteUbergraph_EngramEntry_Saddle_Carno");

	UEngramEntry_Saddle_Carno_C_ExecuteUbergraph_EngramEntry_Saddle_Carno_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
