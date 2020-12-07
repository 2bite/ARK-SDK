// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekRoof_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekRoof.EngramEntry_TekRoof_C.ExecuteUbergraph_EngramEntry_TekRoof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekRoof_C::ExecuteUbergraph_EngramEntry_TekRoof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekRoof.EngramEntry_TekRoof_C.ExecuteUbergraph_EngramEntry_TekRoof");

	UEngramEntry_TekRoof_C_ExecuteUbergraph_EngramEntry_TekRoof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
