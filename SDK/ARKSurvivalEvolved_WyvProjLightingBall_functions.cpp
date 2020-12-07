// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvProjLightingBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvProjLightingBall.WyvProjLightingBall_C.UserConstructionScript
// ()

void AWyvProjLightingBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjLightingBall.WyvProjLightingBall_C.UserConstructionScript");

	AWyvProjLightingBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvProjLightingBall.WyvProjLightingBall_C.ReceiveBeginPlay
// ()

void AWyvProjLightingBall_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjLightingBall.WyvProjLightingBall_C.ReceiveBeginPlay");

	AWyvProjLightingBall_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvProjLightingBall.WyvProjLightingBall_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWyvProjLightingBall_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjLightingBall.WyvProjLightingBall_C.ReceiveTick");

	AWyvProjLightingBall_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvProjLightingBall.WyvProjLightingBall_C.DisableBeam
// ()

void AWyvProjLightingBall_C::DisableBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjLightingBall.WyvProjLightingBall_C.DisableBeam");

	AWyvProjLightingBall_C_DisableBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvProjLightingBall.WyvProjLightingBall_C.ClearTargets
// ()

void AWyvProjLightingBall_C::ClearTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjLightingBall.WyvProjLightingBall_C.ClearTargets");

	AWyvProjLightingBall_C_ClearTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvProjLightingBall.WyvProjLightingBall_C.ExecuteUbergraph_WyvProjLightingBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvProjLightingBall_C::ExecuteUbergraph_WyvProjLightingBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjLightingBall.WyvProjLightingBall_C.ExecuteUbergraph_WyvProjLightingBall");

	AWyvProjLightingBall_C_ExecuteUbergraph_WyvProjLightingBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
