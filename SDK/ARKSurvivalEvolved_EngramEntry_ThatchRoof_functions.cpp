// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ThatchRoof_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ThatchRoof.EngramEntry_ThatchRoof_C.ExecuteUbergraph_EngramEntry_ThatchRoof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ThatchRoof_C::ExecuteUbergraph_EngramEntry_ThatchRoof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ThatchRoof.EngramEntry_ThatchRoof_C.ExecuteUbergraph_EngramEntry_ThatchRoof");

	UEngramEntry_ThatchRoof_C_ExecuteUbergraph_EngramEntry_ThatchRoof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
