// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekCatwalk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekCatwalk.EngramEntry_TekCatwalk_C.ExecuteUbergraph_EngramEntry_TekCatwalk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekCatwalk_C::ExecuteUbergraph_EngramEntry_TekCatwalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekCatwalk.EngramEntry_TekCatwalk_C.ExecuteUbergraph_EngramEntry_TekCatwalk");

	UEngramEntry_TekCatwalk_C_ExecuteUbergraph_EngramEntry_TekCatwalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
