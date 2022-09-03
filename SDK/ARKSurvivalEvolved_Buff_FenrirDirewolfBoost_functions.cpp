// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FenrirDirewolfBoost_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FenrirDirewolfBoost_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.BuffTickServer");

	ABuff_FenrirDirewolfBoost_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.UpdateParticleColor
// ()

void ABuff_FenrirDirewolfBoost_C::UpdateParticleColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.UpdateParticleColor");

	ABuff_FenrirDirewolfBoost_C_UpdateParticleColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.UserConstructionScript
// ()

void ABuff_FenrirDirewolfBoost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.UserConstructionScript");

	ABuff_FenrirDirewolfBoost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.ReceiveBeginPlay
// ()

void ABuff_FenrirDirewolfBoost_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.ReceiveBeginPlay");

	ABuff_FenrirDirewolfBoost_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.ExecuteUbergraph_Buff_FenrirDirewolfBoost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FenrirDirewolfBoost_C::ExecuteUbergraph_Buff_FenrirDirewolfBoost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.ExecuteUbergraph_Buff_FenrirDirewolfBoost");

	ABuff_FenrirDirewolfBoost_C_ExecuteUbergraph_Buff_FenrirDirewolfBoost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
