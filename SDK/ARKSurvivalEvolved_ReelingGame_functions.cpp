// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ReelingGame_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReelingGame.ReelingGame_C.HandleKeyPress
// (NetRequest, Exec, Native, Event, NetMulticast, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const)
// Parameters:
// struct FKey                    Key                            (Parm)
// bool                           retReply                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UReelingGame_C::HandleKeyPress(const struct FKey& Key, bool* retReply)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.HandleKeyPress");

	UReelingGame_C_HandleKeyPress_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retReply != nullptr)
		*retReply = params.retReply;
}


// Function ReelingGame.ReelingGame_C.OnControllerButtonReleased
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FControllerEvent*       ControllerEvent                (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UReelingGame_C::OnControllerButtonReleased(struct FGeometry* MyGeometry, struct FControllerEvent* ControllerEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.OnControllerButtonReleased");

	UReelingGame_C_OnControllerButtonReleased_Params params;
	params.MyGeometry = MyGeometry;
	params.ControllerEvent = ControllerEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReelingGame.ReelingGame_C.OnMouseButtonDown
// (Exec, Event, NetResponse, NetMulticast, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UReelingGame_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.OnMouseButtonDown");

	UReelingGame_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function ReelingGame.ReelingGame_C.CycleToNextKey
// ()

void UReelingGame_C::CycleToNextKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.CycleToNextKey");

	UReelingGame_C_CycleToNextKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReelingGame.ReelingGame_C.UpdateRemainingTime
// (NetRequest, Native, Event, NetResponse, NetMulticast, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const)

void UReelingGame_C::UpdateRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.UpdateRemainingTime");

	UReelingGame_C_UpdateRemainingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReelingGame.ReelingGame_C.OnKeyUp
// (NetReliable, NetRequest, Static, NetMulticast, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyboardEvent*         InKeyboardEvent                (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UReelingGame_C::STATIC_OnKeyUp(struct FGeometry* MyGeometry, struct FKeyboardEvent* InKeyboardEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.OnKeyUp");

	UReelingGame_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyboardEvent = InKeyboardEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReelingGame.ReelingGame_C.CycleKeys
// (NetRequest, Exec, Static, NetMulticast, HasDefaults, NetClient, DLLImport, BlueprintEvent, Const)
// Parameters:
// bool                           FinishedGame                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UReelingGame_C::STATIC_CycleKeys(bool* FinishedGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.CycleKeys");

	UReelingGame_C_CycleKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinishedGame != nullptr)
		*FinishedGame = params.FinishedGame;
}


// Function ReelingGame.ReelingGame_C.EndGame
// ()
// Parameters:
// bool                           succeeded                      (Parm, ZeroConstructor, IsPlainOldData)

void UReelingGame_C::EndGame(bool succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.EndGame");

	UReelingGame_C_EndGame_Params params;
	params.succeeded = succeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReelingGame.ReelingGame_C.Init
// ()
// Parameters:
// float                          KeyDisplayDuration             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            GameKeys                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AWeapFishingRod_C*       rod                            (Parm, ZeroConstructor, IsPlainOldData)

void UReelingGame_C::Init(float KeyDisplayDuration, class AWeapFishingRod_C* rod, TArray<struct FKey>* GameKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.Init");

	UReelingGame_C_Init_Params params;
	params.KeyDisplayDuration = KeyDisplayDuration;
	params.rod = rod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameKeys != nullptr)
		*GameKeys = params.GameKeys;
}


// Function ReelingGame.ReelingGame_C.Tick
// (NetReliable, NetRequest, Native, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UReelingGame_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.Tick");

	UReelingGame_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReelingGame.ReelingGame_C.ExecuteUbergraph_ReelingGame
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UReelingGame_C::ExecuteUbergraph_ReelingGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReelingGame.ReelingGame_C.ExecuteUbergraph_ReelingGame");

	UReelingGame_C_ExecuteUbergraph_ReelingGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
