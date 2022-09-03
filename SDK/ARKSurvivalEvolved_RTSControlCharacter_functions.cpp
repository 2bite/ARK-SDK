// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RTSControlCharacter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RTSControlCharacter.RTSControlCharacter_C.ToggleKeybindUI
// ()

void ARTSControlCharacter_C::ToggleKeybindUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ToggleKeybindUI");

	ARTSControlCharacter_C_ToggleKeybindUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.UpdateSelection
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::UpdateSelection(class APrimalDinoCharacter* Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.UpdateSelection");

	ARTSControlCharacter_C_UpdateSelection_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.RemoveClassFromSelection
// ()

void ARTSControlCharacter_C::RemoveClassFromSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.RemoveClassFromSelection");

	ARTSControlCharacter_C_RemoveClassFromSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.RemoveGroupFromSelection
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Protected, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// int                            groupIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::RemoveGroupFromSelection(int groupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.RemoveGroupFromSelection");

	ARTSControlCharacter_C_RemoveGroupFromSelection_Params params;
	params.groupIndex = groupIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.RemoveSelectionFromGroup
// (Exec, Native, Event, NetResponse, NetMulticast, Public, Protected, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// int                            groupIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::RemoveSelectionFromGroup(int groupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.RemoveSelectionFromGroup");

	ARTSControlCharacter_C_RemoveSelectionFromGroup_Params params;
	params.groupIndex = groupIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.UpdateCursorLocation
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsX                            (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::UpdateCursorLocation(float AxisValue, bool IsX)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.UpdateCursorLocation");

	ARTSControlCharacter_C_UpdateCursorLocation_Params params;
	params.AxisValue = AxisValue;
	params.IsX = IsX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.CalcCursorOffset
// ()
// Parameters:
// bool                           UseOffsets                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CursorRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          X_Offset                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Y_Offset                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::CalcCursorOffset(bool* UseOffsets, float* CursorRotation, float* X_Offset, float* Y_Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.CalcCursorOffset");

	ARTSControlCharacter_C_CalcCursorOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseOffsets != nullptr)
		*UseOffsets = params.UseOffsets;
	if (CursorRotation != nullptr)
		*CursorRotation = params.CursorRotation;
	if (X_Offset != nullptr)
		*X_Offset = params.X_Offset;
	if (Y_Offset != nullptr)
		*Y_Offset = params.Y_Offset;
}


// Function RTSControlCharacter.RTSControlCharacter_C.DrawCursor
// ()
// Parameters:
// class AShooterHUD*             ShooterHUD                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::DrawCursor(class AShooterHUD* ShooterHUD, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.DrawCursor");

	ARTSControlCharacter_C_DrawCursor_Params params;
	params.ShooterHUD = ShooterHUD;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.BPHandleUseButtonPress
// ()
// Parameters:
// class AShooterPlayerController** RiderController                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARTSControlCharacter_C::BPHandleUseButtonPress(class AShooterPlayerController** RiderController)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPHandleUseButtonPress");

	ARTSControlCharacter_C_BPHandleUseButtonPress_Params params;
	params.RiderController = RiderController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideHeldItemSlot
// ()
// Parameters:
// int*                           ItemSlot                       (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::BPOverrideHeldItemSlot(int* ItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideHeldItemSlot");

	ARTSControlCharacter_C_BPOverrideHeldItemSlot_Params params;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideReleaseItemSlot
// ()
// Parameters:
// int*                           ItemSlot                       (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::BPOverrideReleaseItemSlot(int* ItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideReleaseItemSlot");

	ARTSControlCharacter_C_BPOverrideReleaseItemSlot_Params params;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideUseItemSlot
// ()
// Parameters:
// int*                           ItemSlot                       (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::BPOverrideUseItemSlot(int* ItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideUseItemSlot");

	ARTSControlCharacter_C_BPOverrideUseItemSlot_Params params;
	params.ItemSlot = ItemSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.TrimSelectedCharacters
// ()

void ARTSControlCharacter_C::TrimSelectedCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.TrimSelectedCharacters");

	ARTSControlCharacter_C_TrimSelectedCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.IsValidRTSControlLocatioon
// ()
// Parameters:
// class UWorld*                  TheWorld                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AtLoc                          (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterGameMode*        TheGameMode                    (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController* ShooterPC                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::IsValidRTSControlLocatioon(class UWorld* TheWorld, const struct FVector& AtLoc, class AShooterGameMode* TheGameMode, class AShooterPlayerController* ShooterPC, bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.IsValidRTSControlLocatioon");

	ARTSControlCharacter_C_IsValidRTSControlLocatioon_Params params;
	params.TheWorld = TheWorld;
	params.AtLoc = AtLoc;
	params.TheGameMode = TheGameMode;
	params.ShooterPC = ShooterPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function RTSControlCharacter.RTSControlCharacter_C.Get ActorUnderCursor
// (NetReliable, Exec, Native, MulticastDelegate, Private, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::Get_ActorUnderCursor(class AActor** TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.Get ActorUnderCursor");

	ARTSControlCharacter_C_Get_ActorUnderCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetActor != nullptr)
		*TargetActor = params.TargetActor;
}


// Function RTSControlCharacter.RTSControlCharacter_C.BPLocalUnpossessed
// ()

void ARTSControlCharacter_C::BPLocalUnpossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPLocalUnpossessed");

	ARTSControlCharacter_C_BPLocalUnpossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.UnpossessThis
// ()
// Parameters:
// class AController*             ForController                  (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::UnpossessThis(class AController* ForController)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.UnpossessThis");

	ARTSControlCharacter_C_UnpossessThis_Params params;
	params.ForController = ForController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.ReceivePossessed
// ()
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ReceivePossessed");

	ARTSControlCharacter_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARTSControlCharacter_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPTryMultiUse");

	ARTSControlCharacter_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RTSControlCharacter.RTSControlCharacter_C.IsDinoOnScreen
// ()
// Parameters:
// class APrimalDinoCharacter*    dinoChar                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnScreen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::IsDinoOnScreen(class APrimalDinoCharacter* dinoChar, bool* bOnScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.IsDinoOnScreen");

	ARTSControlCharacter_C_IsDinoOnScreen_Params params;
	params.dinoChar = dinoChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOnScreen != nullptr)
		*bOnScreen = params.bOnScreen;
}


// Function RTSControlCharacter.RTSControlCharacter_C.SelectAllDinos
// ()

void ARTSControlCharacter_C::SelectAllDinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.SelectAllDinos");

	ARTSControlCharacter_C_SelectAllDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.CenterCameraOnSelection
// ()

void ARTSControlCharacter_C::CenterCameraOnSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.CenterCameraOnSelection");

	ARTSControlCharacter_C_CenterCameraOnSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.ReceiveDestroyed
// ()

void ARTSControlCharacter_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ReceiveDestroyed");

	ARTSControlCharacter_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.ServerClearAllDinoSelections
// ()

void ARTSControlCharacter_C::ServerClearAllDinoSelections()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ServerClearAllDinoSelections");

	ARTSControlCharacter_C_ServerClearAllDinoSelections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.ServerSetDinoSelected
// ()
// Parameters:
// class APrimalDinoCharacter*    theDino                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::ServerSetDinoSelected(class APrimalDinoCharacter* theDino, bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ServerSetDinoSelected");

	ARTSControlCharacter_C_ServerSetDinoSelected_Params params;
	params.theDino = theDino;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.NetServerReceiveSelectedCharacters
// ()
// Parameters:
// TArray<class APrimalDinoCharacter*> SelectedChars                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ARTSControlCharacter_C::NetServerReceiveSelectedCharacters(TArray<class APrimalDinoCharacter*>* SelectedChars)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.NetServerReceiveSelectedCharacters");

	ARTSControlCharacter_C_NetServerReceiveSelectedCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedChars != nullptr)
		*SelectedChars = params.SelectedChars;
}


// Function RTSControlCharacter.RTSControlCharacter_C.Draw Actor Selection Box
// ()
// Parameters:
// class APlayerController*       thePC                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCanvas*                 thecanvas                      (Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              TheTargetChar                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DrawColor                      (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::Draw_Actor_Selection_Box(class APlayerController* thePC, class UCanvas* thecanvas, class ACharacter* TheTargetChar, const struct FLinearColor& DrawColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.Draw Actor Selection Box");

	ARTSControlCharacter_C_Draw_Actor_Selection_Box_Params params;
	params.thePC = thePC;
	params.thecanvas = thecanvas;
	params.TheTargetChar = TheTargetChar;
	params.DrawColor = DrawColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.UseDinoSelectionGroup
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// int                            groupIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::UseDinoSelectionGroup(int groupIndex, bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.UseDinoSelectionGroup");

	ARTSControlCharacter_C_UseDinoSelectionGroup_Params params;
	params.groupIndex = groupIndex;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.GetCurrentWorldPointUnderCursor
// ()
// Parameters:
// struct FVector                 OutPoint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::GetCurrentWorldPointUnderCursor(struct FVector* OutPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.GetCurrentWorldPointUnderCursor");

	ARTSControlCharacter_C_GetCurrentWorldPointUnderCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPoint != nullptr)
		*OutPoint = params.OutPoint;
}


// Function RTSControlCharacter.RTSControlCharacter_C.SelectionReleased
// ()

void ARTSControlCharacter_C::SelectionReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.SelectionReleased");

	ARTSControlCharacter_C_SelectionReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.SelectionPressed
// ()

void ARTSControlCharacter_C::SelectionPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.SelectionPressed");

	ARTSControlCharacter_C_SelectionPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.OrderPressed
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, HasOutParms, NetClient, BlueprintEvent)

void ARTSControlCharacter_C::STATIC_OrderPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.OrderPressed");

	ARTSControlCharacter_C_OrderPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.GetPointOrTargetUnderCursor
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Private, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// struct FVector                 TargetPoint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TheTargetActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::GetPointOrTargetUnderCursor(struct FVector* TargetPoint, class AActor** TheTargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.GetPointOrTargetUnderCursor");

	ARTSControlCharacter_C_GetPointOrTargetUnderCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetPoint != nullptr)
		*TargetPoint = params.TargetPoint;
	if (TheTargetActor != nullptr)
		*TheTargetActor = params.TheTargetActor;
}


// Function RTSControlCharacter.RTSControlCharacter_C.BPLocalPossessedBy
// ()
// Parameters:
// class APlayerController**      ByController                   (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::BPLocalPossessedBy(class APlayerController** ByController)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPLocalPossessedBy");

	ARTSControlCharacter_C_BPLocalPossessedBy_Params params;
	params.ByController = ByController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.UpdateLocalPlayer
// (Native, NetResponse, Static, MulticastDelegate, Private, HasOutParms, NetClient, BlueprintEvent)

void ARTSControlCharacter_C::STATIC_UpdateLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.UpdateLocalPlayer");

	ARTSControlCharacter_C_UpdateLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.IsDinoValidToPossess
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoToPossess                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::IsDinoValidToPossess(class APrimalDinoCharacter* DinoToPossess, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.IsDinoValidToPossess");

	ARTSControlCharacter_C_IsDinoValidToPossess_Params params;
	params.DinoToPossess = DinoToPossess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function RTSControlCharacter.RTSControlCharacter_C.GetDinoUnderCursor
// ()
// Parameters:
// class APrimalDinoCharacter*    OutDino                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::GetDinoUnderCursor(class APrimalDinoCharacter** OutDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.GetDinoUnderCursor");

	ARTSControlCharacter_C_GetDinoUnderCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDino != nullptr)
		*OutDino = params.OutDino;
}


// Function RTSControlCharacter.RTSControlCharacter_C.ReceiveTick
// (NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Private, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ReceiveTick");

	ARTSControlCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.BlueprintDrawFloatingHUD
// (NetReliable, Exec, Native, MulticastDelegate, Public, Private, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BlueprintDrawFloatingHUD");

	ARTSControlCharacter_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideCameraViewTarget
// ()
// Parameters:
// struct FName*                  CurrentCameraMode              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DesiredCameraLocation          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DesiredCameraRotation          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DesiredFOV                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraLocation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraRotation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideCameraFOV             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideCameraViewTarget");

	ARTSControlCharacter_C_BPOverrideCameraViewTarget_Params params;
	params.CurrentCameraMode = CurrentCameraMode;
	params.DesiredCameraLocation = DesiredCameraLocation;
	params.DesiredCameraRotation = DesiredCameraRotation;
	params.DesiredFOV = DesiredFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOverrideCameraLocation != nullptr)
		*bOverrideCameraLocation = params.bOverrideCameraLocation;
	if (CameraLocation != nullptr)
		*CameraLocation = params.CameraLocation;
	if (bOverrideCameraRotation != nullptr)
		*bOverrideCameraRotation = params.bOverrideCameraRotation;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (bOverrideCameraFOV != nullptr)
		*bOverrideCameraFOV = params.bOverrideCameraFOV;
	if (CameraFOV != nullptr)
		*CameraFOV = params.CameraFOV;
}


// Function RTSControlCharacter.RTSControlCharacter_C.UserConstructionScript
// ()

void ARTSControlCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.UserConstructionScript");

	ARTSControlCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomIn_K2Node_InputActionEvent_398
// ()

void ARTSControlCharacter_C::InpActEvt_ZoomIn_K2Node_InputActionEvent_398()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomIn_K2Node_InputActionEvent_398");

	ARTSControlCharacter_C_InpActEvt_ZoomIn_K2Node_InputActionEvent_398_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomOut_K2Node_InputActionEvent_397
// ()

void ARTSControlCharacter_C::InpActEvt_ZoomOut_K2Node_InputActionEvent_397()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomOut_K2Node_InputActionEvent_397");

	ARTSControlCharacter_C_InpActEvt_ZoomOut_K2Node_InputActionEvent_397_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_84
// ()

void ARTSControlCharacter_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_84()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_84");

	ARTSControlCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_84_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_83
// ()

void ARTSControlCharacter_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_83()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_83");

	ARTSControlCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_83_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_396
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem1_K2Node_InputActionEvent_396()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_396");

	ARTSControlCharacter_C_InpActEvt_UseItem1_K2Node_InputActionEvent_396_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_395
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem1_K2Node_InputActionEvent_395()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_395");

	ARTSControlCharacter_C_InpActEvt_UseItem1_K2Node_InputActionEvent_395_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_394
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem2_K2Node_InputActionEvent_394()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_394");

	ARTSControlCharacter_C_InpActEvt_UseItem2_K2Node_InputActionEvent_394_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_393
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem2_K2Node_InputActionEvent_393()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_393");

	ARTSControlCharacter_C_InpActEvt_UseItem2_K2Node_InputActionEvent_393_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_392
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem3_K2Node_InputActionEvent_392()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_392");

	ARTSControlCharacter_C_InpActEvt_UseItem3_K2Node_InputActionEvent_392_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_391
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem3_K2Node_InputActionEvent_391()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_391");

	ARTSControlCharacter_C_InpActEvt_UseItem3_K2Node_InputActionEvent_391_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_390
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem4_K2Node_InputActionEvent_390()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_390");

	ARTSControlCharacter_C_InpActEvt_UseItem4_K2Node_InputActionEvent_390_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_389
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem4_K2Node_InputActionEvent_389()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_389");

	ARTSControlCharacter_C_InpActEvt_UseItem4_K2Node_InputActionEvent_389_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_388
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem5_K2Node_InputActionEvent_388()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_388");

	ARTSControlCharacter_C_InpActEvt_UseItem5_K2Node_InputActionEvent_388_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_387
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem5_K2Node_InputActionEvent_387()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_387");

	ARTSControlCharacter_C_InpActEvt_UseItem5_K2Node_InputActionEvent_387_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_386
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem6_K2Node_InputActionEvent_386()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_386");

	ARTSControlCharacter_C_InpActEvt_UseItem6_K2Node_InputActionEvent_386_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_385
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem6_K2Node_InputActionEvent_385()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_385");

	ARTSControlCharacter_C_InpActEvt_UseItem6_K2Node_InputActionEvent_385_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_384
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem7_K2Node_InputActionEvent_384()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_384");

	ARTSControlCharacter_C_InpActEvt_UseItem7_K2Node_InputActionEvent_384_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_383
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem7_K2Node_InputActionEvent_383()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_383");

	ARTSControlCharacter_C_InpActEvt_UseItem7_K2Node_InputActionEvent_383_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_382
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem8_K2Node_InputActionEvent_382()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_382");

	ARTSControlCharacter_C_InpActEvt_UseItem8_K2Node_InputActionEvent_382_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_381
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem8_K2Node_InputActionEvent_381()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_381");

	ARTSControlCharacter_C_InpActEvt_UseItem8_K2Node_InputActionEvent_381_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_380
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem9_K2Node_InputActionEvent_380()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_380");

	ARTSControlCharacter_C_InpActEvt_UseItem9_K2Node_InputActionEvent_380_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_379
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem9_K2Node_InputActionEvent_379()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_379");

	ARTSControlCharacter_C_InpActEvt_UseItem9_K2Node_InputActionEvent_379_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378
// ()

void ARTSControlCharacter_C::InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378");

	ARTSControlCharacter_C_InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377
// ()

void ARTSControlCharacter_C::InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377");

	ARTSControlCharacter_C_InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376
// ()

void ARTSControlCharacter_C::InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376");

	ARTSControlCharacter_C_InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375
// ()

void ARTSControlCharacter_C::InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375");

	ARTSControlCharacter_C_InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374
// ()

void ARTSControlCharacter_C::InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374");

	ARTSControlCharacter_C_InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_82
// ()

void ARTSControlCharacter_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_82()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_82");

	ARTSControlCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_82_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_81
// ()

void ARTSControlCharacter_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_81()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_81");

	ARTSControlCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_81_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373
// ()

void ARTSControlCharacter_C::InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373");

	ARTSControlCharacter_C_InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372
// ()

void ARTSControlCharacter_C::InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372");

	ARTSControlCharacter_C_InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_371
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem10_K2Node_InputActionEvent_371()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_371");

	ARTSControlCharacter_C_InpActEvt_UseItem10_K2Node_InputActionEvent_371_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_370
// ()

void ARTSControlCharacter_C::InpActEvt_UseItem10_K2Node_InputActionEvent_370()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_370");

	ARTSControlCharacter_C_InpActEvt_UseItem10_K2Node_InputActionEvent_370_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344
// ()

void ARTSControlCharacter_C::InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344");

	ARTSControlCharacter_C_InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40");

	ARTSControlCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52");

	ARTSControlCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115");

	ARTSControlCharacter_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.NetServerSetLoc
// ()
// Parameters:
// struct FVector                 viewLoc                        (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::NetServerSetLoc(const struct FVector& viewLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.NetServerSetLoc");

	ARTSControlCharacter_C_NetServerSetLoc_Params params;
	params.viewLoc = viewLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.NetServerRequestedDinoMoveTo
// ()
// Parameters:
// class APrimalDinoCharacter*    forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MoveToLoc                      (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::NetServerRequestedDinoMoveTo(class APrimalDinoCharacter* forCharacter, const struct FVector& MoveToLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.NetServerRequestedDinoMoveTo");

	ARTSControlCharacter_C_NetServerRequestedDinoMoveTo_Params params;
	params.forCharacter = forCharacter;
	params.MoveToLoc = MoveToLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.NetServerRequestedDinoTarget
// ()
// Parameters:
// class APrimalDinoCharacter*    forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  attackTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::NetServerRequestedDinoTarget(class APrimalDinoCharacter* forCharacter, class AActor* attackTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.NetServerRequestedDinoTarget");

	ARTSControlCharacter_C_NetServerRequestedDinoTarget_Params params;
	params.forCharacter = forCharacter;
	params.attackTarget = attackTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.ServerDinosStopAndHold
// ()
// Parameters:
// TArray<class APrimalDinoCharacter*> Dinos                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::ServerDinosStopAndHold(bool bEnable, TArray<class APrimalDinoCharacter*>* Dinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ServerDinosStopAndHold");

	ARTSControlCharacter_C_ServerDinosStopAndHold_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dinos != nullptr)
		*Dinos = params.Dinos;
}


// Function RTSControlCharacter.RTSControlCharacter_C.SetDinoGroup
// ()

void ARTSControlCharacter_C::SetDinoGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.SetDinoGroup");

	ARTSControlCharacter_C_SetDinoGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.RequestExit
// ()
// Parameters:
// TArray<struct FDinoSelectionGroup> Groups                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ARTSControlCharacter_C::RequestExit(TArray<struct FDinoSelectionGroup>* Groups)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.RequestExit");

	ARTSControlCharacter_C_RequestExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Groups != nullptr)
		*Groups = params.Groups;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111");

	ARTSControlCharacter_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118");

	ARTSControlCharacter_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_132
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_132(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_132");

	ARTSControlCharacter_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_132_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_163
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_163(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_163");

	ARTSControlCharacter_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_163_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RTSControlCharacter.RTSControlCharacter_C.ClientSetSelectionsEvent
// ()
// Parameters:
// TArray<struct FDinoSelectionGroup> Groups                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class APrimalDinoCharacter*> Selected                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ARTSControlCharacter_C::ClientSetSelectionsEvent(TArray<struct FDinoSelectionGroup>* Groups, TArray<class APrimalDinoCharacter*>* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ClientSetSelectionsEvent");

	ARTSControlCharacter_C_ClientSetSelectionsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Groups != nullptr)
		*Groups = params.Groups;
	if (Selected != nullptr)
		*Selected = params.Selected;
}


// Function RTSControlCharacter.RTSControlCharacter_C.SetGroupsOnServerEvent
// ()
// Parameters:
// TArray<struct FDinoSelectionGroup> Groups                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ARTSControlCharacter_C::SetGroupsOnServerEvent(TArray<struct FDinoSelectionGroup>* Groups)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.SetGroupsOnServerEvent");

	ARTSControlCharacter_C_SetGroupsOnServerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Groups != nullptr)
		*Groups = params.Groups;
}


// Function RTSControlCharacter.RTSControlCharacter_C.ExecuteUbergraph_RTSControlCharacter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARTSControlCharacter_C::ExecuteUbergraph_RTSControlCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ExecuteUbergraph_RTSControlCharacter");

	ARTSControlCharacter_C_ExecuteUbergraph_RTSControlCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
