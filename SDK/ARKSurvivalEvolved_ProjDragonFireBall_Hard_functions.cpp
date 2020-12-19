// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDragonFireBall_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjDragonFireBall_Hard.ProjDragonFireBall_Hard_C.UserConstructionScript
// ()

void AProjDragonFireBall_Hard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDragonFireBall_Hard.ProjDragonFireBall_Hard_C.UserConstructionScript");

	AProjDragonFireBall_Hard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDragonFireBall_Hard.ProjDragonFireBall_Hard_C.ExecuteUbergraph_ProjDragonFireBall_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjDragonFireBall_Hard_C::ExecuteUbergraph_ProjDragonFireBall_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDragonFireBall_Hard.ProjDragonFireBall_Hard_C.ExecuteUbergraph_ProjDragonFireBall_Hard");

	AProjDragonFireBall_Hard_C_ExecuteUbergraph_ProjDragonFireBall_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
