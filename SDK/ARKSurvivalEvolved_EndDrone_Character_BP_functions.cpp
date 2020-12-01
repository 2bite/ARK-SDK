// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndDrone_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndDrone_Character_BP.EndDrone_Character_BP_C.BPTimerServer
// ()

void AEndDrone_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.BPTimerServer");

	AEndDrone_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.UpdateAccel
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AEndDrone_Character_BP_C::UpdateAccel(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.UpdateAccel");

	AEndDrone_Character_BP_C_UpdateAccel_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.Update Turn Anims And Rate
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AEndDrone_Character_BP_C::Update_Turn_Anims_And_Rate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.Update Turn Anims And Rate");

	AEndDrone_Character_BP_C_Update_Turn_Anims_And_Rate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.Update Visual Roll and Pitch
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AEndDrone_Character_BP_C::Update_Visual_Roll_and_Pitch(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.Update Visual Roll and Pitch");

	AEndDrone_Character_BP_C_Update_Visual_Roll_and_Pitch_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.UpdateDamageEffect
// ()

void AEndDrone_Character_BP_C::UpdateDamageEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.UpdateDamageEffect");

	AEndDrone_Character_BP_C_UpdateDamageEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEndDrone_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.BPAdjustDamage");

	AEndDrone_Character_BP_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.UserConstructionScript
// ()

void AEndDrone_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.UserConstructionScript");

	AEndDrone_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.ReceiveBeginPlay
// ()

void AEndDrone_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.ReceiveBeginPlay");

	AEndDrone_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AEndDrone_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.OnDied_Event");

	AEndDrone_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.Multi_UpdateDamage
// ()

void AEndDrone_Character_BP_C::Multi_UpdateDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.Multi_UpdateDamage");

	AEndDrone_Character_BP_C_Multi_UpdateDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.Multi_DeathUpdateParticles
// ()

void AEndDrone_Character_BP_C::Multi_DeathUpdateParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.Multi_DeathUpdateParticles");

	AEndDrone_Character_BP_C_Multi_DeathUpdateParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.BPTimerNonDedicated
// ()

void AEndDrone_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.BPTimerNonDedicated");

	AEndDrone_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.DestroySelf
// ()

void AEndDrone_Character_BP_C::DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.DestroySelf");

	AEndDrone_Character_BP_C_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.ServerUpdateVisuals
// ()

void AEndDrone_Character_BP_C::ServerUpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.ServerUpdateVisuals");

	AEndDrone_Character_BP_C_ServerUpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_Character_BP.EndDrone_Character_BP_C.ExecuteUbergraph_EndDrone_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndDrone_Character_BP_C::ExecuteUbergraph_EndDrone_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_Character_BP.EndDrone_Character_BP_C.ExecuteUbergraph_EndDrone_Character_BP");

	AEndDrone_Character_BP_C_ExecuteUbergraph_EndDrone_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
