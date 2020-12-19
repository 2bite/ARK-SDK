// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CameraAnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CameraAnimBP.CameraAnimBP_C.ExecuteUbergraph_CameraAnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCameraAnimBP_C::ExecuteUbergraph_CameraAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraAnimBP.CameraAnimBP_C.ExecuteUbergraph_CameraAnimBP");

	UCameraAnimBP_C_ExecuteUbergraph_CameraAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
