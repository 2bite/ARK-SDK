#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpaceWhale_Passenger_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BuffTickServer
struct ABuff_SpaceWhale_Passenger_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ReceiveBeginPlay
struct ABuff_SpaceWhale_Passenger_C_ReceiveBeginPlay_Params
{
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPHandleOnStopFire
struct ABuff_SpaceWhale_Passenger_C_BPHandleOnStopFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPHandleOnStartFire
struct ABuff_SpaceWhale_Passenger_C_BPHandleOnStartFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BuffTickClient
struct ABuff_SpaceWhale_Passenger_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPCheckPreventInput
struct ABuff_SpaceWhale_Passenger_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetFireTransform
struct ABuff_SpaceWhale_Passenger_C_GetFireTransform_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Heading;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               FireLeft;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.IsElectricalStormActive
struct ABuff_SpaceWhale_Passenger_C_IsElectricalStormActive_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetSocketClampDelta
struct ABuff_SpaceWhale_Passenger_C_GetSocketClampDelta_Params
{
	float                                              OutSocketClampDelta;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPSetupForInstigator
struct ABuff_SpaceWhale_Passenger_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.BPDrawBuffStatusHUD
struct ABuff_SpaceWhale_Passenger_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.IsAllowedToFire
struct ABuff_SpaceWhale_Passenger_C_IsAllowedToFire_Params
{
	bool                                               bAllowed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.SetTargeting
struct ABuff_SpaceWhale_Passenger_C_SetTargeting_Params
{
	bool                                               bTargetingEnabled;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.LocalDoAttack
struct ABuff_SpaceWhale_Passenger_C_LocalDoAttack_Params
{
	bool                                               bDidFire;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.GetTekSaddleItem
struct ABuff_SpaceWhale_Passenger_C_GetTekSaddleItem_Params
{
	class UPrimalItem*                                 TekSaddleItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.UserConstructionScript
struct ABuff_SpaceWhale_Passenger_C_UserConstructionScript_Params
{
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ServerDoAttack
struct ABuff_SpaceWhale_Passenger_C_ServerDoAttack_Params
{
	struct FVector                                     AimAtLoc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ServerSpawnAtLoc;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FireLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.DoAttack
struct ABuff_SpaceWhale_Passenger_C_DoAttack_Params
{
	struct FVector                                     AimAtLoc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ServerSpawnAtLoc;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FireLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.CheckForItem
struct ABuff_SpaceWhale_Passenger_C_CheckForItem_Params
{
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ServerNotifyCurrentAimRotation
struct ABuff_SpaceWhale_Passenger_C_ServerNotifyCurrentAimRotation_Params
{
	struct FRotator                                    Rot;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhale_Passenger.Buff_SpaceWhale_Passenger_C.ExecuteUbergraph_Buff_SpaceWhale_Passenger
struct ABuff_SpaceWhale_Passenger_C_ExecuteUbergraph_Buff_SpaceWhale_Passenger_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
