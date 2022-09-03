// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionType_GlitchCounter_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.OnUnlockedExplorerNote
// ()

void AMissionType_GlitchCounter_Base_C::OnUnlockedExplorerNote()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.OnUnlockedExplorerNote");

	AMissionType_GlitchCounter_Base_C_OnUnlockedExplorerNote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetCompletedGlitchCount
// ()
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            CountCompleted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_GlitchCounter_Base_C::GetCompletedGlitchCount(class AShooterCharacter* Character, int* CountCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetCompletedGlitchCount");

	AMissionType_GlitchCounter_Base_C_GetCompletedGlitchCount_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CountCompleted != nullptr)
		*CountCompleted = params.CountCompleted;
}


// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.StaticOnReplicatedMissionDataUpdated
// ()
// Parameters:
// class APrimalBuff_MissionData** missionData                    (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GlitchCounter_Base_C::StaticOnReplicatedMissionDataUpdated(class APrimalBuff_MissionData** missionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.StaticOnReplicatedMissionDataUpdated");

	AMissionType_GlitchCounter_Base_C_StaticOnReplicatedMissionDataUpdated_Params params;
	params.missionData = missionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.StaticOnMissionDataInitialized
// ()
// Parameters:
// class APrimalBuff_MissionData** missionData                    (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GlitchCounter_Base_C::StaticOnMissionDataInitialized(class APrimalBuff_MissionData** missionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.StaticOnMissionDataInitialized");

	AMissionType_GlitchCounter_Base_C_StaticOnMissionDataInitialized_Params params;
	params.missionData = missionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetMissionDisplayName
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ShootCont                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AMissionType_GlitchCounter_Base_C::GetMissionDisplayName(class APlayerController** ShootCont)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetMissionDisplayName");

	AMissionType_GlitchCounter_Base_C_GetMissionDisplayName_Params params;
	params.ShootCont = ShootCont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetNumGlitchesCompleted
// ()
// Parameters:
// class AShooterCharacter*       ShooterCharacter               (Parm, ZeroConstructor, IsPlainOldData)
// int                            Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMissionType_GlitchCounter_Base_C::GetNumGlitchesCompleted(class AShooterCharacter* ShooterCharacter, int* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetNumGlitchesCompleted");

	AMissionType_GlitchCounter_Base_C_GetNumGlitchesCompleted_Params params;
	params.ShooterCharacter = ShooterCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetIntFromMissionType
// ()
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMissionType_GlitchCounter_Base_C::GetIntFromMissionType(struct FName* Tag, class AShooterCharacter** PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetIntFromMissionType");

	AMissionType_GlitchCounter_Base_C_GetIntFromMissionType_Params params;
	params.Tag = Tag;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.IsMissionComplete
// ()
// Parameters:
// class AShooterCharacter**      forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_GlitchCounter_Base_C::IsMissionComplete(class AShooterCharacter** forCharacter, class AShooterPlayerController** ForController)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.IsMissionComplete");

	AMissionType_GlitchCounter_Base_C_IsMissionComplete_Params params;
	params.forCharacter = forCharacter;
	params.ForController = ForController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.UserConstructionScript
// ()

void AMissionType_GlitchCounter_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.UserConstructionScript");

	AMissionType_GlitchCounter_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.ExecuteUbergraph_MissionType_GlitchCounter_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GlitchCounter_Base_C::ExecuteUbergraph_MissionType_GlitchCounter_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.ExecuteUbergraph_MissionType_GlitchCounter_Base");

	AMissionType_GlitchCounter_Base_C_ExecuteUbergraph_MissionType_GlitchCounter_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
