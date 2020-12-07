// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoaFrill_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Get Scaled Affinity Based on Dino
// ()
// Parameters:
// float                          InputAffinity                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABoaFrill_Character_BP_C::Get_Scaled_Affinity_Based_on_Dino(float InputAffinity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Get Scaled Affinity Based on Dino");

	ABoaFrill_Character_BP_C_Get_Scaled_Affinity_Based_on_Dino_Params params;
	params.InputAffinity = InputAffinity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABoaFrill_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPAdjustDamage");

	ABoaFrill_Character_BP_C_BPAdjustDamage_Params params;
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


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.TameIfAllowed
// ()

void ABoaFrill_Character_BP_C::TameIfAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.TameIfAllowed");

	ABoaFrill_Character_BP_C_TameIfAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.ResetEggSeeking
// ()

void ABoaFrill_Character_BP_C::ResetEggSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.ResetEggSeeking");

	ABoaFrill_Character_BP_C_ResetEggSeeking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.IncreaseTamingAffinity
// ()
// Parameters:
// class AShooterCharacter*       TamingPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueForTaming                 (Parm, ZeroConstructor, IsPlainOldData)

void ABoaFrill_Character_BP_C::IncreaseTamingAffinity(class AShooterCharacter* TamingPlayer, float ValueForTaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.IncreaseTamingAffinity");

	ABoaFrill_Character_BP_C_IncreaseTamingAffinity_Params params;
	params.TamingPlayer = TamingPlayer;
	params.ValueForTaming = ValueForTaming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Update Taming
// ()
// Parameters:
// float                          ValueForTaming                 (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        DroppedByShooterChar           (Parm, ZeroConstructor, IsPlainOldData)

void ABoaFrill_Character_BP_C::Update_Taming(float ValueForTaming, class APrimalCharacter* DroppedByShooterChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Update Taming");

	ABoaFrill_Character_BP_C_Update_Taming_Params params;
	params.ValueForTaming = ValueForTaming;
	params.DroppedByShooterChar = DroppedByShooterChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ABoaFrill_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPSetupTamed");

	ABoaFrill_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.UserConstructionScript
// ()

void ABoaFrill_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.UserConstructionScript");

	ABoaFrill_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Timeline_0__FinishedFunc
// ()

void ABoaFrill_Character_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Timeline_0__FinishedFunc");

	ABoaFrill_Character_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Timeline_0__UpdateFunc
// ()

void ABoaFrill_Character_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.Timeline_0__UpdateFunc");

	ABoaFrill_Character_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPTimerServer
// ()

void ABoaFrill_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.BPTimerServer");

	ABoaFrill_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.DissolveEggItem
// ()

void ABoaFrill_Character_BP_C::DissolveEggItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.DissolveEggItem");

	ABoaFrill_Character_BP_C_DissolveEggItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.EatEgg
// ()

void ABoaFrill_Character_BP_C::EatEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.EatEgg");

	ABoaFrill_Character_BP_C_EatEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.UpdateSeekEgg
// ()

void ABoaFrill_Character_BP_C::UpdateSeekEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.UpdateSeekEgg");

	ABoaFrill_Character_BP_C_UpdateSeekEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.RestartBrain
// ()

void ABoaFrill_Character_BP_C::RestartBrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.RestartBrain");

	ABoaFrill_Character_BP_C_RestartBrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.StartEggMoving
// ()

void ABoaFrill_Character_BP_C::StartEggMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.StartEggMoving");

	ABoaFrill_Character_BP_C_StartEggMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.StartUpdateEggSeekTimer
// ()

void ABoaFrill_Character_BP_C::StartUpdateEggSeekTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.StartUpdateEggSeekTimer");

	ABoaFrill_Character_BP_C_StartUpdateEggSeekTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.MoveToEgg
// ()

void ABoaFrill_Character_BP_C::MoveToEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.MoveToEgg");

	ABoaFrill_Character_BP_C_MoveToEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.ExecuteUbergraph_BoaFrill_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABoaFrill_Character_BP_C::ExecuteUbergraph_BoaFrill_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoaFrill_Character_BP.BoaFrill_Character_BP_C.ExecuteUbergraph_BoaFrill_Character_BP");

	ABoaFrill_Character_BP_C_ExecuteUbergraph_BoaFrill_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
