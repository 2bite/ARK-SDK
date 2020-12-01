// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_EndBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.RemoveElementFromCharacter
// ()
// Parameters:
// class APrimalCharacter*        forChar                        (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_EndBoss_C::RemoveElementFromCharacter(class APrimalCharacter* forChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.RemoveElementFromCharacter");

	ABossArenaManager_EndBoss_C_RemoveElementFromCharacter_Params params;
	params.forChar = forChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.ApplyDamageIfInFinalStages
// ()

void ABossArenaManager_EndBoss_C::ApplyDamageIfInFinalStages()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.ApplyDamageIfInFinalStages");

	ABossArenaManager_EndBoss_C_ApplyDamageIfInFinalStages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.CheckAndSpawnDamageDeathParticle
// ()

void ABossArenaManager_EndBoss_C::CheckAndSpawnDamageDeathParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.CheckAndSpawnDamageDeathParticle");

	ABossArenaManager_EndBoss_C_CheckAndSpawnDamageDeathParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.ShouldBossEnterFinalStage
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABossArenaManager_EndBoss_C::ShouldBossEnterFinalStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.ShouldBossEnterFinalStage");

	ABossArenaManager_EndBoss_C_ShouldBossEnterFinalStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.DestroyImproperSubbosses
// ()

void ABossArenaManager_EndBoss_C::DestroyImproperSubbosses()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.DestroyImproperSubbosses");

	ABossArenaManager_EndBoss_C_DestroyImproperSubbosses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.SetBossRevealLocation
// ()

void ABossArenaManager_EndBoss_C::SetBossRevealLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.SetBossRevealLocation");

	ABossArenaManager_EndBoss_C_SetBossRevealLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.SetCoreTransformTimes
// ()

void ABossArenaManager_EndBoss_C::SetCoreTransformTimes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.SetCoreTransformTimes");

	ABossArenaManager_EndBoss_C_SetCoreTransformTimes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.GetBossSpawnPointAboveGround
// (NetReliable, NetRequest, Exec, Static, NetServer, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  BossClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundPoint                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_EndBoss_C::STATIC_GetBossSpawnPointAboveGround(const struct FVector& Start, class UClass* BossClass, bool* FoundPoint, struct FVector* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.GetBossSpawnPointAboveGround");

	ABossArenaManager_EndBoss_C_GetBossSpawnPointAboveGround_Params params;
	params.Start = Start;
	params.BossClass = BossClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundPoint != nullptr)
		*FoundPoint = params.FoundPoint;
	if (Point != nullptr)
		*Point = params.Point;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.Get Random Boss
// ()

void ABossArenaManager_EndBoss_C::Get_Random_Boss()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.Get Random Boss");

	ABossArenaManager_EndBoss_C_Get_Random_Boss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.AdvanceStage
// ()

void ABossArenaManager_EndBoss_C::AdvanceStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.AdvanceStage");

	ABossArenaManager_EndBoss_C_AdvanceStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.SpawnBossCreature
// ()
// Parameters:
// int                            BossIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnedValidBoss               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsMainBoss                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    SpawnedCharacter               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_EndBoss_C::SpawnBossCreature(int BossIndex, bool* SpawnedValidBoss, bool* IsMainBoss, class APrimalDinoCharacter** SpawnedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.SpawnBossCreature");

	ABossArenaManager_EndBoss_C_SpawnBossCreature_Params params;
	params.BossIndex = BossIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedValidBoss != nullptr)
		*SpawnedValidBoss = params.SpawnedValidBoss;
	if (IsMainBoss != nullptr)
		*IsMainBoss = params.IsMainBoss;
	if (SpawnedCharacter != nullptr)
		*SpawnedCharacter = params.SpawnedCharacter;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.DecollideAndDamageImmune
// ()
// Parameters:
// bool                           IsSubBoss                      (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_EndBoss_C::DecollideAndDamageImmune(bool IsSubBoss)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.DecollideAndDamageImmune");

	ABossArenaManager_EndBoss_C_DecollideAndDamageImmune_Params params;
	params.IsSubBoss = IsSubBoss;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.RevealEndBoss
// ()
// Parameters:
// int                            Selection                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasRevealed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_EndBoss_C::RevealEndBoss(int Selection, bool* WasRevealed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.RevealEndBoss");

	ABossArenaManager_EndBoss_C_RevealEndBoss_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasRevealed != nullptr)
		*WasRevealed = params.WasRevealed;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.Was Sub Boss Killed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABossArenaManager_EndBoss_C::Was_Sub_Boss_Killed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.Was Sub Boss Killed");

	ABossArenaManager_EndBoss_C_Was_Sub_Boss_Killed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.EvaluateArenaState
// ()

void ABossArenaManager_EndBoss_C::EvaluateArenaState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.EvaluateArenaState");

	ABossArenaManager_EndBoss_C_EvaluateArenaState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.KillAllOccupants
// ()

void ABossArenaManager_EndBoss_C::KillAllOccupants()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.KillAllOccupants");

	ABossArenaManager_EndBoss_C_KillAllOccupants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.UserConstructionScript
// ()

void ABossArenaManager_EndBoss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.UserConstructionScript");

	ABossArenaManager_EndBoss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_EndBoss_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.ReceiveTick");

	ABossArenaManager_EndBoss_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.Do Boss Spawn
// ()
// Parameters:
// int                            BossToSpawn                    (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_EndBoss_C::Do_Boss_Spawn(int BossToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.Do Boss Spawn");

	ABossArenaManager_EndBoss_C_Do_Boss_Spawn_Params params;
	params.BossToSpawn = BossToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.StartBoss
// ()

void ABossArenaManager_EndBoss_C::StartBoss()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.StartBoss");

	ABossArenaManager_EndBoss_C_StartBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.RemoveBossImmunityHidden
// ()

void ABossArenaManager_EndBoss_C::RemoveBossImmunityHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.RemoveBossImmunityHidden");

	ABossArenaManager_EndBoss_C_RemoveBossImmunityHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.DissolveBoss
// ()
// Parameters:
// bool                           IsSubBoss                      (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_EndBoss_C::DissolveBoss(bool IsSubBoss)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.DissolveBoss");

	ABossArenaManager_EndBoss_C_DissolveBoss_Params params;
	params.IsSubBoss = IsSubBoss;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.DelayForceSpawnMinions
// ()
// Parameters:
// bool                           NewSpawn                       (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_EndBoss_C::DelayForceSpawnMinions(bool NewSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.DelayForceSpawnMinions");

	ABossArenaManager_EndBoss_C_DelayForceSpawnMinions_Params params;
	params.NewSpawn = NewSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.OnDeathEffects
// ()

void ABossArenaManager_EndBoss_C::OnDeathEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.OnDeathEffects");

	ABossArenaManager_EndBoss_C_OnDeathEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.EventTeleportToHome
// ()

void ABossArenaManager_EndBoss_C::EventTeleportToHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.EventTeleportToHome");

	ABossArenaManager_EndBoss_C_EventTeleportToHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.ExecuteUbergraph_BossArenaManager_EndBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABossArenaManager_EndBoss_C::ExecuteUbergraph_BossArenaManager_EndBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.ExecuteUbergraph_BossArenaManager_EndBoss");

	ABossArenaManager_EndBoss_C_ExecuteUbergraph_BossArenaManager_EndBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
