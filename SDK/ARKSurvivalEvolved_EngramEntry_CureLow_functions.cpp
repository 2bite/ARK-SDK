// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CureLow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_CureLow.EngramEntry_CureLow_C.ExecuteUbergraph_EngramEntry_CureLow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_CureLow_C::ExecuteUbergraph_EngramEntry_CureLow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_CureLow.EngramEntry_CureLow_C.ExecuteUbergraph_EngramEntry_CureLow");

	UEngramEntry_CureLow_C_ExecuteUbergraph_EngramEntry_CureLow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
