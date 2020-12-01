// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFishingRod_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFishingRod.WeapFishingRod_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ReceiveEndPlay");

	AWeapFishingRod_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.Draw Crosshair While Riding Dino
// ()
// Parameters:
// bool                           shouldDraw                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::Draw_Crosshair_While_Riding_Dino(bool shouldDraw)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.Draw Crosshair While Riding Dino");

	AWeapFishingRod_C_Draw_Crosshair_While_Riding_Dino_Params params;
	params.shouldDraw = shouldDraw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.AllowFishing
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::AllowFishing(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.AllowFishing");

	AWeapFishingRod_C_AllowFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WeapFishingRod.WeapFishingRod_C.IsOwnerInCaveVolume
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::IsOwnerInCaveVolume(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.IsOwnerInCaveVolume");

	AWeapFishingRod_C_IsOwnerInCaveVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function WeapFishingRod.WeapFishingRod_C.GiveFishLoot
// ()
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutQuality                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::GiveFishLoot(class UClass* Class, class APrimalDinoCharacter* Outer, float* OutQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.GiveFishLoot");

	AWeapFishingRod_C_GiveFishLoot_Params params;
	params.Class = Class;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutQuality != nullptr)
		*OutQuality = params.OutQuality;
}


// Function WeapFishingRod.WeapFishingRod_C.GetNum Remaining Reel Keys
// ()
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::GetNum_Remaining_Reel_Keys(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.GetNum Remaining Reel Keys");

	AWeapFishingRod_C_GetNum_Remaining_Reel_Keys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeapFishingRod.WeapFishingRod_C.CalculateDistanceToCover
// ()
// Parameters:
// bool                           UnderWater                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceToCover                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::CalculateDistanceToCover(bool UnderWater, float* DistanceToCover)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.CalculateDistanceToCover");

	AWeapFishingRod_C_CalculateDistanceToCover_Params params;
	params.UnderWater = UnderWater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistanceToCover != nullptr)
		*DistanceToCover = params.DistanceToCover;
}


// Function WeapFishingRod.WeapFishingRod_C.Get Reeled Fish Target Location
// ()
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::Get_Reeled_Fish_Target_Location(struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.Get Reeled Fish Target Location");

	AWeapFishingRod_C_Get_Reeled_Fish_Target_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
}


// Function WeapFishingRod.WeapFishingRod_C.UpdateBaitMeshLocation
// ()

void AWeapFishingRod_C::UpdateBaitMeshLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.UpdateBaitMeshLocation");

	AWeapFishingRod_C_UpdateBaitMeshLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.PlayFishAttackAnimation
// ()

void AWeapFishingRod_C::PlayFishAttackAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.PlayFishAttackAnimation");

	AWeapFishingRod_C_PlayFishAttackAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.IsPointInWater
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, DLLImport, Const, NetValidate)
// Parameters:
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::STATIC_IsPointInWater(const struct FVector& Point, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.IsPointInWater");

	AWeapFishingRod_C_IsPointInWater_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function WeapFishingRod.WeapFishingRod_C.HandleReleasingFish
// ()

void AWeapFishingRod_C::HandleReleasingFish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.HandleReleasingFish");

	AWeapFishingRod_C_HandleReleasingFish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.OnInstigatorPlayDyingEvent
// ()

void AWeapFishingRod_C::OnInstigatorPlayDyingEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnInstigatorPlayDyingEvent");

	AWeapFishingRod_C_OnInstigatorPlayDyingEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.StartUnequipEvent
// ()

void AWeapFishingRod_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.StartUnequipEvent");

	AWeapFishingRod_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.BPGetSeatingAnimation
// ()
// Parameters:
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* AWeapFishingRod_C::BPGetSeatingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.BPGetSeatingAnimation");

	AWeapFishingRod_C_BPGetSeatingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapFishingRod.WeapFishingRod_C.UpdateToBeSnaredFish
// ()

void AWeapFishingRod_C::UpdateToBeSnaredFish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.UpdateToBeSnaredFish");

	AWeapFishingRod_C_UpdateToBeSnaredFish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.Finish SnaringFish
// ()

void AWeapFishingRod_C::Finish_SnaringFish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.Finish SnaringFish");

	AWeapFishingRod_C_Finish_SnaringFish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.OnRGKeySuccess
// ()

void AWeapFishingRod_C::OnRGKeySuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnRGKeySuccess");

	AWeapFishingRod_C_OnRGKeySuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.TugFishingCable
// (NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, DLLImport, Const, NetValidate)
// Parameters:
// int                            remainingMoves                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::TugFishingCable(int remainingMoves)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.TugFishingCable");

	AWeapFishingRod_C_TugFishingCable_Params params;
	params.remainingMoves = remainingMoves;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.GetReelingGameDuration
// ()
// Parameters:
// class APrimalDinoCharacter*    ReeledFish                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::GetReelingGameDuration(class APrimalDinoCharacter* ReeledFish, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.GetReelingGameDuration");

	AWeapFishingRod_C_GetReelingGameDuration_Params params;
	params.ReeledFish = ReeledFish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function WeapFishingRod.WeapFishingRod_C.OnStartPlayAnimation
// ()

void AWeapFishingRod_C::OnStartPlayAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnStartPlayAnimation");

	AWeapFishingRod_C_OnStartPlayAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.StartSecondaryActionEvent
// ()

void AWeapFishingRod_C::StartSecondaryActionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.StartSecondaryActionEvent");

	AWeapFishingRod_C_StartSecondaryActionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.CanSnareFish
// ()
// Parameters:
// class APrimalDinoCharacter*    Fish                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSnare                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::CanSnareFish(class APrimalDinoCharacter* Fish, bool* CanSnare)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.CanSnareFish");

	AWeapFishingRod_C_CanSnareFish_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSnare != nullptr)
		*CanSnare = params.CanSnare;
}


// Function WeapFishingRod.WeapFishingRod_C.GenerateRandomKeys
// (NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, DLLImport, Const, NetValidate)
// Parameters:
// int                            NumSets                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumSetKeys                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            Keys                           (Parm, OutParm, ZeroConstructor)

void AWeapFishingRod_C::STATIC_GenerateRandomKeys(int NumSets, int NumSetKeys, TArray<struct FKey>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.GenerateRandomKeys");

	AWeapFishingRod_C_GenerateRandomKeys_Params params;
	params.NumSets = NumSets;
	params.NumSetKeys = NumSetKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keys != nullptr)
		*Keys = params.Keys;
}


// Function WeapFishingRod.WeapFishingRod_C.FishSnared
// ()
// Parameters:
// class APrimalDinoCharacter*    Fish                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::FishSnared(class APrimalDinoCharacter* Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.FishSnared");

	AWeapFishingRod_C_FishSnared_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.UpdateSurroundingPrey
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, DLLImport, Const, NetValidate)

void AWeapFishingRod_C::STATIC_UpdateSurroundingPrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.UpdateSurroundingPrey");

	AWeapFishingRod_C_UpdateSurroundingPrey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.GetCableEndPoint
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, DLLImport, Const, NetValidate)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndPoint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::GetCableEndPoint(float DeltaTime, struct FVector* EndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.GetCableEndPoint");

	AWeapFishingRod_C_GetCableEndPoint_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndPoint != nullptr)
		*EndPoint = params.EndPoint;
}


// Function WeapFishingRod.WeapFishingRod_C.StartFishing
// ()
// Parameters:
// struct FVector                 BaitTargetLocation             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BaitWaterSurfaceLocation       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::StartFishing(const struct FVector& BaitTargetLocation, const struct FVector& BaitWaterSurfaceLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.StartFishing");

	AWeapFishingRod_C_StartFishing_Params params;
	params.BaitTargetLocation = BaitTargetLocation;
	params.BaitWaterSurfaceLocation = BaitWaterSurfaceLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.OnFishReleased
// ()
// Parameters:
// class APrimalDinoCharacter*    Fish                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::OnFishReleased(class APrimalDinoCharacter* Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnFishReleased");

	AWeapFishingRod_C_OnFishReleased_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.OnFishSnared
// ()
// Parameters:
// class APrimalDinoCharacter*    Fish                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::OnFishSnared(class APrimalDinoCharacter* Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnFishSnared");

	AWeapFishingRod_C_OnFishSnared_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.ReleaseReeledFish
// ()

void AWeapFishingRod_C::ReleaseReeledFish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ReleaseReeledFish");

	AWeapFishingRod_C_ReleaseReeledFish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.CaughtFish
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, BlueprintCallable, Const, NetValidate)
// Parameters:
// class APrimalDinoCharacter*    CaughtFish                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::CaughtFish(class APrimalDinoCharacter* CaughtFish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.CaughtFish");

	AWeapFishingRod_C_CaughtFish_Params params;
	params.CaughtFish = CaughtFish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.ReelingGameFinished
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::ReelingGameFinished(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ReelingGameFinished");

	AWeapFishingRod_C_ReelingGameFinished_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.StartReelingGame
// ()
// Parameters:
// class APrimalDinoCharacter*    ReeledFish                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::StartReelingGame(class APrimalDinoCharacter* ReeledFish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.StartReelingGame");

	AWeapFishingRod_C_StartReelingGame_Params params;
	params.ReeledFish = ReeledFish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.End Fishing
// ()
// Parameters:
// bool                           releaseFish                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::End_Fishing(bool releaseFish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.End Fishing");

	AWeapFishingRod_C_End_Fishing_Params params;
	params.releaseFish = releaseFish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.CheckFishingConditions
// ()
// Parameters:
// bool                           retCanFish                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::CheckFishingConditions(bool* retCanFish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.CheckFishingConditions");

	AWeapFishingRod_C_CheckFishingConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retCanFish != nullptr)
		*retCanFish = params.retCanFish;
}


// Function WeapFishingRod.WeapFishingRod_C.ReceiveBeginPlay
// ()

void AWeapFishingRod_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ReceiveBeginPlay");

	AWeapFishingRod_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.GetCableAttachComponent
// ()
// Parameters:
// class USceneComponent*         Comp                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::GetCableAttachComponent(class USceneComponent** Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.GetCableAttachComponent");

	AWeapFishingRod_C_GetCableAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Comp != nullptr)
		*Comp = params.Comp;
}


// Function WeapFishingRod.WeapFishingRod_C.UpdateCableComponent
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::UpdateCableComponent(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.UpdateCableComponent");

	AWeapFishingRod_C_UpdateCableComponent_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ReceiveTick");

	AWeapFishingRod_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.BPWeaponCanFire
// (Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapFishingRod_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.BPWeaponCanFire");

	AWeapFishingRod_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapFishingRod.WeapFishingRod_C.UserConstructionScript
// ()

void AWeapFishingRod_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.UserConstructionScript");

	AWeapFishingRod_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.EndFishingEvent
// ()
// Parameters:
// bool                           releaseFish                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::EndFishingEvent(bool releaseFish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.EndFishingEvent");

	AWeapFishingRod_C_EndFishingEvent_Params params;
	params.releaseFish = releaseFish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.StartReelingGameEvent
// ()
// Parameters:
// class APrimalDinoCharacter*    ReeledInFish                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::StartReelingGameEvent(class APrimalDinoCharacter* ReeledInFish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.StartReelingGameEvent");

	AWeapFishingRod_C_StartReelingGameEvent_Params params;
	params.ReeledInFish = ReeledInFish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.ReelingGameFinishedEvent
// ()
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::ReelingGameFinishedEvent(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ReelingGameFinishedEvent");

	AWeapFishingRod_C_ReelingGameFinishedEvent_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.OnFishSnaredEvent
// ()
// Parameters:
// class APrimalDinoCharacter*    Fish                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::OnFishSnaredEvent(class APrimalDinoCharacter* Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnFishSnaredEvent");

	AWeapFishingRod_C_OnFishSnaredEvent_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.OnFishReleasedEvent
// ()
// Parameters:
// class APrimalDinoCharacter*    Fish                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::OnFishReleasedEvent(class APrimalDinoCharacter* Fish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.OnFishReleasedEvent");

	AWeapFishingRod_C_OnFishReleasedEvent_Params params;
	params.Fish = Fish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.BPAnimNotifyCustomState_Begin
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState**       AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::BPAnimNotifyCustomState_Begin(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, float* TotalDuration, class UAnimNotifyState** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.BPAnimNotifyCustomState_Begin");

	AWeapFishingRod_C_BPAnimNotifyCustomState_Begin_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.ServerStartFishing
// ()
// Parameters:
// struct FVector                 BaitTargetLocation             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BaitWaterSurfaceLocation       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::ServerStartFishing(const struct FVector& BaitTargetLocation, const struct FVector& BaitWaterSurfaceLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ServerStartFishing");

	AWeapFishingRod_C_ServerStartFishing_Params params;
	params.BaitTargetLocation = BaitTargetLocation;
	params.BaitWaterSurfaceLocation = BaitWaterSurfaceLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.ServerEndFishing
// ()
// Parameters:
// bool                           releaseFish                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::ServerEndFishing(bool releaseFish)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ServerEndFishing");

	AWeapFishingRod_C_ServerEndFishing_Params params;
	params.releaseFish = releaseFish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.ServerTugCable
// ()
// Parameters:
// int                            remainingMoves                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::ServerTugCable(int remainingMoves)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ServerTugCable");

	AWeapFishingRod_C_ServerTugCable_Params params;
	params.remainingMoves = remainingMoves;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.TugCableEvent
// ()
// Parameters:
// int                            remainingMoves                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::TugCableEvent(int remainingMoves)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.TugCableEvent");

	AWeapFishingRod_C_TugCableEvent_Params params;
	params.remainingMoves = remainingMoves;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.StartFishingEventMulti
// ()
// Parameters:
// struct FVector                 BaitTargetLocation             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BaitWaterSurfaceLocation       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::StartFishingEventMulti(const struct FVector& BaitTargetLocation, const struct FVector& BaitWaterSurfaceLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.StartFishingEventMulti");

	AWeapFishingRod_C_StartFishingEventMulti_Params params;
	params.BaitTargetLocation = BaitTargetLocation;
	params.BaitWaterSurfaceLocation = BaitWaterSurfaceLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.DrawRotation
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewParam1                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::DrawRotation(const struct FVector& NewParam, const struct FVector& NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.DrawRotation");

	AWeapFishingRod_C_DrawRotation_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.ServerStartDeathHarvest
// ()
// Parameters:
// class APrimalDinoCharacter*    PrimalDinoChar                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::ServerStartDeathHarvest(class APrimalDinoCharacter* PrimalDinoChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ServerStartDeathHarvest");

	AWeapFishingRod_C_ServerStartDeathHarvest_Params params;
	params.PrimalDinoChar = PrimalDinoChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.ExecuteUbergraph_WeapFishingRod
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::ExecuteUbergraph_WeapFishingRod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.ExecuteUbergraph_WeapFishingRod");

	AWeapFishingRod_C_ExecuteUbergraph_WeapFishingRod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFishingRod.WeapFishingRod_C.FishCaughtDispatcherSingle__DelegateSignature
// ()
// Parameters:
// float                          Caught_Fish_Wild_Scale         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Net_Owner                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Fish_Class                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Fish_Reference                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFishingRod_C::FishCaughtDispatcherSingle__DelegateSignature(float Caught_Fish_Wild_Scale, class AActor* Net_Owner, class UClass* Fish_Class, class UObject* Fish_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFishingRod.WeapFishingRod_C.FishCaughtDispatcherSingle__DelegateSignature");

	AWeapFishingRod_C_FishCaughtDispatcherSingle__DelegateSignature_Params params;
	params.Caught_Fish_Wild_Scale = Caught_Fish_Wild_Scale;
	params.Net_Owner = Net_Owner;
	params.Fish_Class = Fish_Class;
	params.Fish_Reference = Fish_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
