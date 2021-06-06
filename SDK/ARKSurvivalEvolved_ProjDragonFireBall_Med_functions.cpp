// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDragonFireBall_Med_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjDragonFireBall_Med.ProjDragonFireBall_Med_C.UserConstructionScript
// ()

void AProjDragonFireBall_Med_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDragonFireBall_Med.ProjDragonFireBall_Med_C.UserConstructionScript");

	AProjDragonFireBall_Med_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDragonFireBall_Med.ProjDragonFireBall_Med_C.ExecuteUbergraph_ProjDragonFireBall_Med
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjDragonFireBall_Med_C::ExecuteUbergraph_ProjDragonFireBall_Med(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDragonFireBall_Med.ProjDragonFireBall_Med_C.ExecuteUbergraph_ProjDragonFireBall_Med");

	AProjDragonFireBall_Med_C_ExecuteUbergraph_ProjDragonFireBall_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
