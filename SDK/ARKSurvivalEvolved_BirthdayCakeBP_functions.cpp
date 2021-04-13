// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BirthdayCakeBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BirthdayCakeBP.BirthdayCakeBP_C.BPPreventReleaseSeatingStructure
// ()
// Parameters:
// class AShooterCharacter**      ForSitter                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABirthdayCakeBP_C::BPPreventReleaseSeatingStructure(class AShooterCharacter** ForSitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.BPPreventReleaseSeatingStructure");

	ABirthdayCakeBP_C_BPPreventReleaseSeatingStructure_Params params;
	params.ForSitter = ForSitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.BPDefaultProcessEditText
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 TextToUse                      (Parm, ZeroConstructor)
// bool*                          checkedBox                     (Parm, ZeroConstructor, IsPlainOldData)

void ABirthdayCakeBP_C::BPDefaultProcessEditText(class AShooterPlayerController** ForPC, class FString* TextToUse, bool* checkedBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.BPDefaultProcessEditText");

	ABirthdayCakeBP_C_BPDefaultProcessEditText_Params params;
	params.ForPC = ForPC;
	params.TextToUse = TextToUse;
	params.checkedBox = checkedBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABirthdayCakeBP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.BPClientDoMultiUse");

	ABirthdayCakeBP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.BPGetMultiUseEntries
// (MulticastDelegate, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABirthdayCakeBP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.BPGetMultiUseEntries");

	ABirthdayCakeBP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.BlueprintDrawHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void ABirthdayCakeBP_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.BlueprintDrawHUD");

	ABirthdayCakeBP_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABirthdayCakeBP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.BPServerHandleNetExecCommand");

	ABirthdayCakeBP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.OnRep_bIsOpen
// (NetReliable, Exec, Event, MulticastDelegate, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintPure, Const, NetValidate)

void ABirthdayCakeBP_C::OnRep_bIsOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.OnRep_bIsOpen");

	ABirthdayCakeBP_C_OnRep_bIsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.BPReleasedPlayer
// ()
// Parameters:
// class AShooterCharacter**      ReleasedChar                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void ABirthdayCakeBP_C::BPReleasedPlayer(class AShooterCharacter** ReleasedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.BPReleasedPlayer");

	ABirthdayCakeBP_C_BPReleasedPlayer_Params params;
	params.ReleasedChar = ReleasedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.BPSeatedPlayer
// ()
// Parameters:
// class AShooterCharacter**      SeatedChar                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AtSeatNumber                   (Parm, ZeroConstructor, IsPlainOldData)

void ABirthdayCakeBP_C::BPSeatedPlayer(class AShooterCharacter** SeatedChar, int* AtSeatNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.BPSeatedPlayer");

	ABirthdayCakeBP_C_BPSeatedPlayer_Params params;
	params.SeatedChar = SeatedChar;
	params.AtSeatNumber = AtSeatNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.UserConstructionScript
// ()

void ABirthdayCakeBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.UserConstructionScript");

	ABirthdayCakeBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.SeatedTicker
// ()

void ABirthdayCakeBP_C::SeatedTicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.SeatedTicker");

	ABirthdayCakeBP_C_SeatedTicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.ForceDestroyMe
// ()

void ABirthdayCakeBP_C::ForceDestroyMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.ForceDestroyMe");

	ABirthdayCakeBP_C_ForceDestroyMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.DisplayTextTicker
// ()

void ABirthdayCakeBP_C::DisplayTextTicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.DisplayTextTicker");

	ABirthdayCakeBP_C_DisplayTextTicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BirthdayCakeBP.BirthdayCakeBP_C.ExecuteUbergraph_BirthdayCakeBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABirthdayCakeBP_C::ExecuteUbergraph_BirthdayCakeBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BirthdayCakeBP.BirthdayCakeBP_C.ExecuteUbergraph_BirthdayCakeBP");

	ABirthdayCakeBP_C_ExecuteUbergraph_BirthdayCakeBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
