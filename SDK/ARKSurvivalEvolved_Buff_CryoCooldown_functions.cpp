// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CryoCooldown_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CryoCooldown.Buff_CryoCooldown_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CryoCooldown_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryoCooldown.Buff_CryoCooldown_C.BPActivated");

	ABuff_CryoCooldown_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CryoCooldown.Buff_CryoCooldown_C.UpdateBuffPersistentData
// ()

void ABuff_CryoCooldown_C::UpdateBuffPersistentData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryoCooldown.Buff_CryoCooldown_C.UpdateBuffPersistentData");

	ABuff_CryoCooldown_C_UpdateBuffPersistentData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CryoCooldown.Buff_CryoCooldown_C.ReceiveBeginPlay
// ()

void ABuff_CryoCooldown_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryoCooldown.Buff_CryoCooldown_C.ReceiveBeginPlay");

	ABuff_CryoCooldown_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CryoCooldown.Buff_CryoCooldown_C.BPDrawBuffStatusHUD
// (HasDefaults, DLLImport, Const, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CryoCooldown_C::BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryoCooldown.Buff_CryoCooldown_C.BPDrawBuffStatusHUD");

	ABuff_CryoCooldown_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CryoCooldown.Buff_CryoCooldown_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CryoCooldown_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryoCooldown.Buff_CryoCooldown_C.BuffTickServer");

	ABuff_CryoCooldown_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CryoCooldown.Buff_CryoCooldown_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CryoCooldown_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryoCooldown.Buff_CryoCooldown_C.BuffTickClient");

	ABuff_CryoCooldown_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CryoCooldown.Buff_CryoCooldown_C.UserConstructionScript
// ()

void ABuff_CryoCooldown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryoCooldown.Buff_CryoCooldown_C.UserConstructionScript");

	ABuff_CryoCooldown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CryoCooldown.Buff_CryoCooldown_C.ExecuteUbergraph_Buff_CryoCooldown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CryoCooldown_C::ExecuteUbergraph_Buff_CryoCooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CryoCooldown.Buff_CryoCooldown_C.ExecuteUbergraph_Buff_CryoCooldown");

	ABuff_CryoCooldown_C_ExecuteUbergraph_Buff_CryoCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
