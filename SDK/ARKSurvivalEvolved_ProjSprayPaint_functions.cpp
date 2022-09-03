// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSprayPaint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSprayPaint.ProjSprayPaint_C.UserConstructionScript
// ()

void AProjSprayPaint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSprayPaint.ProjSprayPaint_C.UserConstructionScript");

	AProjSprayPaint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSprayPaint.ProjSprayPaint_C.ExecuteUbergraph_ProjSprayPaint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSprayPaint_C::ExecuteUbergraph_ProjSprayPaint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSprayPaint.ProjSprayPaint_C.ExecuteUbergraph_ProjSprayPaint");

	AProjSprayPaint_C_ExecuteUbergraph_ProjSprayPaint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
