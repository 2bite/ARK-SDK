// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ModernBed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ModernBed.EngramEntry_ModernBed_C.ExecuteUbergraph_EngramEntry_ModernBed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ModernBed_C::ExecuteUbergraph_EngramEntry_ModernBed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ModernBed.EngramEntry_ModernBed_C.ExecuteUbergraph_EngramEntry_ModernBed");

	UEngramEntry_ModernBed_C_ExecuteUbergraph_EngramEntry_ModernBed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
