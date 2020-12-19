// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_SpindlesSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_SpindlesSaddle.EngramEntry_SpindlesSaddle_C.ExecuteUbergraph_EngramEntry_SpindlesSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_SpindlesSaddle_C::ExecuteUbergraph_EngramEntry_SpindlesSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_SpindlesSaddle.EngramEntry_SpindlesSaddle_C.ExecuteUbergraph_EngramEntry_SpindlesSaddle");

	UEngramEntry_SpindlesSaddle_C_ExecuteUbergraph_EngramEntry_SpindlesSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
