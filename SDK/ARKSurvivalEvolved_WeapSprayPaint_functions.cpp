// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSprayPaint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSprayPaint.WeapSprayPaint_C.UserConstructionScript
// ()

void AWeapSprayPaint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSprayPaint.WeapSprayPaint_C.UserConstructionScript");

	AWeapSprayPaint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapSprayPaint.WeapSprayPaint_C.ExecuteUbergraph_WeapSprayPaint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapSprayPaint_C::ExecuteUbergraph_WeapSprayPaint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSprayPaint.WeapSprayPaint_C.ExecuteUbergraph_WeapSprayPaint");

	AWeapSprayPaint_C_ExecuteUbergraph_WeapSprayPaint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
