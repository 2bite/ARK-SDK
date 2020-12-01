// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapScissors_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapScissors.WeapScissors_C.ReceiveBeginPlay
// ()

void AWeapScissors_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.ReceiveBeginPlay");

	AWeapScissors_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.IsValidHairCutTarget
// (NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Private, Protected, Delegate, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class AActor*                  PotentialTarget                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapScissors_C::STATIC_IsValidHairCutTarget(class AActor* PotentialTarget, bool* bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.IsValidHairCutTarget");

	AWeapScissors_C_IsValidHairCutTarget_Params params;
	params.PotentialTarget = PotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
}


// Function WeapScissors.WeapScissors_C.OpenUI
// ()
// Parameters:
// class AShooterCharacter*       TheTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScissors_C::OpenUI(class AShooterCharacter* TheTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.OpenUI");

	AWeapScissors_C_OpenUI_Params params;
	params.TheTarget = TheTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.GiveHairLocks
// ()
// Parameters:
// int                            NumLocks                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScissors_C::GiveHairLocks(int NumLocks)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.GiveHairLocks");

	AWeapScissors_C_GiveHairLocks_Params params;
	params.NumLocks = NumLocks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.BPAnimNotifyCustomEvent
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, HasDefaults, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapScissors_C::STATIC_BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.BPAnimNotifyCustomEvent");

	AWeapScissors_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.BPGetSelectedMeleeAttackAnim
// ()
// Parameters:
// struct FWeaponAnim             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FWeaponAnim AWeapScissors_C::BPGetSelectedMeleeAttackAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.BPGetSelectedMeleeAttackAnim");

	AWeapScissors_C_BPGetSelectedMeleeAttackAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapScissors.WeapScissors_C.UserConstructionScript
// ()

void AWeapScissors_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.UserConstructionScript");

	AWeapScissors_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.InitializeUI
// ()
// Parameters:
// class UUI_Hairstyle*           TheUI                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScissors_C::InitializeUI(class UUI_Hairstyle* TheUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.InitializeUI");

	AWeapScissors_C_InitializeUI_Params params;
	params.TheUI = TheUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.OnHairStyleAccepted__DelegateSignature_Event
// ()
// Parameters:
// int                            newHeadHairIndex               (Parm, ZeroConstructor, IsPlainOldData)
// int                            newFacialHairIndex             (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHeadHairPercent             (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewFacialHairPercent           (Parm, ZeroConstructor, IsPlainOldData)
// int                            HeadHairDyeID1                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            HeadHairDyeID2                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            FacialHairDyeID1               (Parm, ZeroConstructor, IsPlainOldData)
// int                            FacialHairDyeID2               (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScissors_C::OnHairStyleAccepted__DelegateSignature_Event(int newHeadHairIndex, int newFacialHairIndex, float NewHeadHairPercent, float NewFacialHairPercent, int HeadHairDyeID1, int HeadHairDyeID2, int FacialHairDyeID1, int FacialHairDyeID2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.OnHairStyleAccepted__DelegateSignature_Event");

	AWeapScissors_C_OnHairStyleAccepted__DelegateSignature_Event_Params params;
	params.newHeadHairIndex = newHeadHairIndex;
	params.newFacialHairIndex = newFacialHairIndex;
	params.NewHeadHairPercent = NewHeadHairPercent;
	params.NewFacialHairPercent = NewFacialHairPercent;
	params.HeadHairDyeID1 = HeadHairDyeID1;
	params.HeadHairDyeID2 = HeadHairDyeID2;
	params.FacialHairDyeID1 = FacialHairDyeID1;
	params.FacialHairDyeID2 = FacialHairDyeID2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.ClearFacialHairClicked
// ()

void AWeapScissors_C::ClearFacialHairClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.ClearFacialHairClicked");

	AWeapScissors_C_ClearFacialHairClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.ClearHeadHairClicked
// ()

void AWeapScissors_C::ClearHeadHairClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.ClearHeadHairClicked");

	AWeapScissors_C_ClearHeadHairClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.ServerClearFacialHairColor
// ()
// Parameters:
// class AShooterCharacter*       TargetChar                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScissors_C::ServerClearFacialHairColor(class AShooterCharacter* TargetChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.ServerClearFacialHairColor");

	AWeapScissors_C_ServerClearFacialHairColor_Params params;
	params.TargetChar = TargetChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.ServerClearHeadHairColor
// ()
// Parameters:
// class AShooterCharacter*       TargetChar                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScissors_C::ServerClearHeadHairColor(class AShooterCharacter* TargetChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.ServerClearHeadHairColor");

	AWeapScissors_C_ServerClearHeadHairColor_Params params;
	params.TargetChar = TargetChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.TheServerHairStyleAccepted
// ()
// Parameters:
// int                            newHeadHairIndex               (Parm, ZeroConstructor, IsPlainOldData)
// int                            newFacialHairIndex             (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHeadHairPercent             (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewFacialHairPercent           (Parm, ZeroConstructor, IsPlainOldData)
// int                            HeadHairDyeID1                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            HeadHairDyeID2                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            FacialHairDyeID1               (Parm, ZeroConstructor, IsPlainOldData)
// int                            FacialHairDyeID2               (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       forTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScissors_C::TheServerHairStyleAccepted(int newHeadHairIndex, int newFacialHairIndex, float NewHeadHairPercent, float NewFacialHairPercent, int HeadHairDyeID1, int HeadHairDyeID2, int FacialHairDyeID1, int FacialHairDyeID2, class AShooterCharacter* forTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.TheServerHairStyleAccepted");

	AWeapScissors_C_TheServerHairStyleAccepted_Params params;
	params.newHeadHairIndex = newHeadHairIndex;
	params.newFacialHairIndex = newFacialHairIndex;
	params.NewHeadHairPercent = NewHeadHairPercent;
	params.NewFacialHairPercent = NewFacialHairPercent;
	params.HeadHairDyeID1 = HeadHairDyeID1;
	params.HeadHairDyeID2 = HeadHairDyeID2;
	params.FacialHairDyeID1 = FacialHairDyeID1;
	params.FacialHairDyeID2 = FacialHairDyeID2;
	params.forTarget = forTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.DoServerRequestDinoHaircut
// ()
// Parameters:
// class ADino_Character_BP_Haircuttable_C* DoRequestOnDino                (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScissors_C::DoServerRequestDinoHaircut(class ADino_Character_BP_Haircuttable_C* DoRequestOnDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.DoServerRequestDinoHaircut");

	AWeapScissors_C_DoServerRequestDinoHaircut_Params params;
	params.DoRequestOnDino = DoRequestOnDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapScissors.WeapScissors_C.ExecuteUbergraph_WeapScissors
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapScissors_C::ExecuteUbergraph_WeapScissors(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapScissors.WeapScissors_C.ExecuteUbergraph_WeapScissors");

	AWeapScissors_C_ExecuteUbergraph_WeapScissors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
