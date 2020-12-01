#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapAdminBlinkRifle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetBuffDetails
struct AWeapAdminBlinkRifle_C_GetBuffDetails_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              BuffInfo;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetInspectText
struct AWeapAdminBlinkRifle_C_GetInspectText_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              Desc;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetActorDescriptiveName
struct AWeapAdminBlinkRifle_C_GetActorDescriptiveName_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Desc;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetActorScreenLocation
struct AWeapAdminBlinkRifle_C_GetActorScreenLocation_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenLoc;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.InspectTrace
struct AWeapAdminBlinkRifle_C_InspectTrace_Params
{
	struct FVector2D                                   Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.HasAdminPermission
struct AWeapAdminBlinkRifle_C_HasAdminPermission_Params
{
	bool                                               IsAdmin;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Destroy
struct AWeapAdminBlinkRifle_C_Tick_Destroy_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Inspect
struct AWeapAdminBlinkRifle_C_Tick_Inspect_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Blink
struct AWeapAdminBlinkRifle_C_Tick_Blink_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ReceiveBeginPlay
struct AWeapAdminBlinkRifle_C_ReceiveBeginPlay_Params
{
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPOnStartTargeting
struct AWeapAdminBlinkRifle_C_BPOnStartTargeting_Params
{
	bool*                                              bFromGamepadLeft;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ReceiveTick
struct AWeapAdminBlinkRifle_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPFiredWeapon
struct AWeapAdminBlinkRifle_C_BPFiredWeapon_Params
{
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPAllowNativeFireWeapon
struct AWeapAdminBlinkRifle_C_BPAllowNativeFireWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPDrawHud
struct AWeapAdminBlinkRifle_C_BPDrawHud_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.UserConstructionScript
struct AWeapAdminBlinkRifle_C_UserConstructionScript_Params
{
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestBlinkToTarget
struct AWeapAdminBlinkRifle_C_ServerRequestBlinkToTarget_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAirTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestSetMode
struct AWeapAdminBlinkRifle_C_ServerRequestSetMode_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.MultiUpdateCurrentMode
struct AWeapAdminBlinkRifle_C_MultiUpdateCurrentMode_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.OnModeEntered
struct AWeapAdminBlinkRifle_C_OnModeEntered_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.OnModeExited
struct AWeapAdminBlinkRifle_C_OnModeExited_Params
{
	int                                                OldMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ClientUpdatePermissionCheck
struct AWeapAdminBlinkRifle_C_ClientUpdatePermissionCheck_Params
{
	bool                                               CanOwnerCheat;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestSetInspectTarget
struct AWeapAdminBlinkRifle_C_ServerRequestSetInspectTarget_Params
{
	class AActor*                                      InspectTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InspectComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestDestroyTarget
struct AWeapAdminBlinkRifle_C_ServerRequestDestroyTarget_Params
{
	class AActor*                                      DestroyTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestActorDescription
struct AWeapAdminBlinkRifle_C_ServerRequestActorDescription_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ClientReceiveActorDescription
struct AWeapAdminBlinkRifle_C_ClientReceiveActorDescription_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              Desc;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class FString>                              Buffs;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ExecuteUbergraph_WeapAdminBlinkRifle
struct AWeapAdminBlinkRifle_C_ExecuteUbergraph_WeapAdminBlinkRifle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
