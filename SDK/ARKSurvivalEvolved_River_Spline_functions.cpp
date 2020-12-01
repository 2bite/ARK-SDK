// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_River_Spline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function River_Spline.River_Spline_C.UserConstructionScript
// ()

void ARiver_Spline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function River_Spline.River_Spline_C.UserConstructionScript");

	ARiver_Spline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function River_Spline.River_Spline_C.ExecuteUbergraph_River_Spline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARiver_Spline_C::ExecuteUbergraph_River_Spline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function River_Spline.River_Spline_C.ExecuteUbergraph_River_Spline");

	ARiver_Spline_C_ExecuteUbergraph_River_Spline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
