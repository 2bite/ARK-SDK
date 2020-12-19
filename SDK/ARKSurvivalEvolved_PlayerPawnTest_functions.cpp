// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerPawnTest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps
// ()
// Parameters:
// int                            OutVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_C::GetTheNumChibiLevelUps(int* OutVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps");

	APlayerPawnTest_C_GetTheNumChibiLevelUps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVal != nullptr)
		*OutVal = params.OutVal;
}


// Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps
// ()
// Parameters:
// int                            NewNum                         (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_C::SetNumChibiLevelUps(int NewNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps");

	APlayerPawnTest_C_SetNumChibiLevelUps_Params params;
	params.NewNum = NewNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APlayerPawnTest_C::BPGetPlayerHexagonCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount");

	APlayerPawnTest_C_BPGetPlayerHexagonCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
// ()
// Parameters:
// int*                           NewHexagonCount                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerPawnTest_C::BPSetPlayerHexagonCount(int* NewHexagonCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount");

	APlayerPawnTest_C_BPSetPlayerHexagonCount_Params params;
	params.NewHexagonCount = NewHexagonCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
// ()
// Parameters:
// TArray<class USkeletalMeshComponent*> SkelMeshComponents             (Parm, OutParm, ZeroConstructor)

void APlayerPawnTest_C::BPGetShowDebugAnimationComponents(TArray<class USkeletalMeshComponent*>* SkelMeshComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents");

	APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkelMeshComponents != nullptr)
		*SkelMeshComponents = params.SkelMeshComponents;
}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed
// ()
// Parameters:
// float*                         DefaultTPVCameraSpeedInterpolationMultiplier (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultTPVOffsetInterpSpeed    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TPVCameraSpeedInterpolationMultiplier (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TPVOffsetInterpSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_C::BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed");

	APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params params;
	params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
	params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TPVCameraSpeedInterpolationMultiplier != nullptr)
		*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
	if (TPVOffsetInterpSpeed != nullptr)
		*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
}


// Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification
// ()
// Parameters:
// class FString                  Text                           (Parm, ZeroConstructor)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          LifetimeSeconds                (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayScale                   (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_C::ShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, float LifetimeSeconds, float DisplayScale, class USoundCue* SoundToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification");

	APlayerPawnTest_C_ShowHUDNotification_Params params;
	params.Text = Text;
	params.Color = Color;
	params.LifetimeSeconds = LifetimeSeconds;
	params.DisplayScale = DisplayScale;
	params.SoundToPlay = SoundToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMound
// ()

void APlayerPawnTest_C::TrySpawnMound()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMound");

	APlayerPawnTest_C_TrySpawnMound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx
// ()
// Parameters:
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_C::TrySpawnMoundEx(float Angle, float Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx");

	APlayerPawnTest_C_TrySpawnMoundEx_Params params;
	params.Angle = Angle;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent
// ()
// Parameters:
// class USkeletalMeshComponent** firstPersonMasterPosecomponent (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_C::BPSetFirstPersonMasterPoseComponent(class USkeletalMeshComponent** firstPersonMasterPosecomponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent");

	APlayerPawnTest_C_BPSetFirstPersonMasterPoseComponent_Params params;
	params.firstPersonMasterPosecomponent = firstPersonMasterPosecomponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss
// ()
// Parameters:
// class APrimalDinoCharacter*    BossCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BossTag                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            BossDifficulty                 (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_C::DefeatedBoss(class APrimalDinoCharacter* BossCharacter, const struct FName& BossTag, int BossDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss");

	APlayerPawnTest_C_DefeatedBoss_Params params;
	params.BossCharacter = BossCharacter;
	params.BossTag = BossTag;
	params.BossDifficulty = BossDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
// ()
// Parameters:
// int                            DifficultyIndex                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediateAscend               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuppressAchievements          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_C::ServerAscend(int DifficultyIndex, bool bImmediateAscend, bool bSuppressAchievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend");

	APlayerPawnTest_C_ServerAscend_Params params;
	params.DifficultyIndex = DifficultyIndex;
	params.bImmediateAscend = bImmediateAscend;
	params.bSuppressAchievements = bSuppressAchievements;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
// ()
// Parameters:
// class FString*                 TheCommand                     (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString APlayerPawnTest_C::PlayerCommand(class FString* TheCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand");

	APlayerPawnTest_C_PlayerCommand_Params params;
	params.TheCommand = TheCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerPawnTest.PlayerPawnTest_C.InitHairRestDistance
// ()

void APlayerPawnTest_C::InitHairRestDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.InitHairRestDistance");

	APlayerPawnTest_C_InitHairRestDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.SetLastTransforms
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, Const)

void APlayerPawnTest_C::STATIC_SetLastTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetLastTransforms");

	APlayerPawnTest_C_SetLastTransforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.BPNonDedicatedPostAnimUpdate
// ()

void APlayerPawnTest_C::BPNonDedicatedPostAnimUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPNonDedicatedPostAnimUpdate");

	APlayerPawnTest_C_BPNonDedicatedPostAnimUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.Setup Collision Volumes
// ()

void APlayerPawnTest_C::Setup_Collision_Volumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.Setup Collision Volumes");

	APlayerPawnTest_C_Setup_Collision_Volumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.SetupNewHairstyle
// (Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, Const)

void APlayerPawnTest_C::STATIC_SetupNewHairstyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetupNewHairstyle");

	APlayerPawnTest_C_SetupNewHairstyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.UpdateHair
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, Const)

void APlayerPawnTest_C::STATIC_UpdateHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.UpdateHair");

	APlayerPawnTest_C_UpdateHair_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.SetHairParams
// ()
// Parameters:
// struct FVector                 HairSocketLoc                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                HairSocketRot                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 NeckSocketLoc                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                NeckSocketrot                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void APlayerPawnTest_C::SetHairParams(struct FVector* HairSocketLoc, struct FRotator* HairSocketRot, struct FVector* NeckSocketLoc, struct FRotator* NeckSocketrot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetHairParams");

	APlayerPawnTest_C_SetHairParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HairSocketLoc != nullptr)
		*HairSocketLoc = params.HairSocketLoc;
	if (HairSocketRot != nullptr)
		*HairSocketRot = params.HairSocketRot;
	if (NeckSocketLoc != nullptr)
		*NeckSocketLoc = params.NeckSocketLoc;
	if (NeckSocketrot != nullptr)
		*NeckSocketrot = params.NeckSocketrot;
}


// Function PlayerPawnTest.PlayerPawnTest_C.SimulateHair
// ()
// Parameters:
// struct FVector                 HairSocketLoc                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                HairSocketRot                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ChestSocketLoc                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ChestSocketRot                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_C::SimulateHair(float DeltaTime, struct FVector* HairSocketLoc, struct FRotator* HairSocketRot, struct FVector* ChestSocketLoc, struct FRotator* ChestSocketRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SimulateHair");

	APlayerPawnTest_C_SimulateHair_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HairSocketLoc != nullptr)
		*HairSocketLoc = params.HairSocketLoc;
	if (HairSocketRot != nullptr)
		*HairSocketRot = params.HairSocketRot;
	if (ChestSocketLoc != nullptr)
		*ChestSocketLoc = params.ChestSocketLoc;
	if (ChestSocketRot != nullptr)
		*ChestSocketRot = params.ChestSocketRot;
}


// Function PlayerPawnTest.PlayerPawnTest_C.UserConstructionScript
// ()

void APlayerPawnTest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.UserConstructionScript");

	APlayerPawnTest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.ReceiveBeginPlay
// ()

void APlayerPawnTest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ReceiveBeginPlay");

	APlayerPawnTest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend
// ()
// Parameters:
// int                            AscendIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediateAscend               (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_C::NetClientAscend(int AscendIndex, bool bImmediateAscend)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend");

	APlayerPawnTest_C_NetClientAscend_Params params;
	params.AscendIndex = AscendIndex;
	params.bImmediateAscend = bImmediateAscend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification
// ()
// Parameters:
// class FString                  Text                           (Parm, ZeroConstructor)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          LifetimeSeconds                (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayScale                   (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_C::ClientShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, float LifetimeSeconds, float DisplayScale, class USoundCue* SoundToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification");

	APlayerPawnTest_C_ClientShowHUDNotification_Params params;
	params.Text = Text;
	params.Color = Color;
	params.LifetimeSeconds = LifetimeSeconds;
	params.DisplayScale = DisplayScale;
	params.SoundToPlay = SoundToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.NetClientPreLoadAcension
// ()

void APlayerPawnTest_C::NetClientPreLoadAcension()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.NetClientPreLoadAcension");

	APlayerPawnTest_C_NetClientPreLoadAcension_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnTest_C::ExecuteUbergraph_PlayerPawnTest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest");

	APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
