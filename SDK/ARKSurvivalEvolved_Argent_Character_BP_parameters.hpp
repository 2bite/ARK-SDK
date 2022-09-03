#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Argent_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Argent_Character_BP.Argent_Character_BP_C.BPDidClearCarriedCharacter
struct AArgent_Character_BP_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.Allow Passenger in Slot
struct AArgent_Character_BP_C_Allow_Passenger_in_Slot_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.BPAllowCarryCharacter
struct AArgent_Character_BP_C_BPAllowCarryCharacter_Params
{
	class APrimalCharacter**                           checkCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.Remove Passenger In Slot
struct AArgent_Character_BP_C_Remove_Passenger_In_Slot_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.Get Passenger
struct AArgent_Character_BP_C_Get_Passenger_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            Char;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.Has Passenger In Slot
struct AArgent_Character_BP_C_Has_Passenger_In_Slot_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyClearRider
struct AArgent_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.BPDoAttack
struct AArgent_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.UpdateCarryAnim
struct AArgent_Character_BP_C_UpdateCarryAnim_Params
{
};

// Function Argent_Character_BP.Argent_Character_BP_C.BPOnMovementModeChangedNotify
struct AArgent_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.ReceiveBeginPlay
struct AArgent_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyClearPassenger
struct AArgent_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.ReceiveTick
struct AArgent_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.BlueprintCanRiderAttack
struct AArgent_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.BPCanTakePassenger
struct AArgent_Character_BP_C_BPCanTakePassenger_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PassengerSeatIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForcePassenger;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowFlyersAndWaterDinos;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.BPNotifyAddPassenger
struct AArgent_Character_BP_C_BPNotifyAddPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Argent_Character_BP.Argent_Character_BP_C.UserConstructionScript
struct AArgent_Character_BP_C_UserConstructionScript_Params
{
};

// Function Argent_Character_BP.Argent_Character_BP_C.MulticastOnAttack
struct AArgent_Character_BP_C_MulticastOnAttack_Params
{
};

// Function Argent_Character_BP.Argent_Character_BP_C.MulticastUpdateCarryAnim
struct AArgent_Character_BP_C_MulticastUpdateCarryAnim_Params
{
};

// Function Argent_Character_BP.Argent_Character_BP_C.ExecuteUbergraph_Argent_Character_BP
struct AArgent_Character_BP_C_ExecuteUbergraph_Argent_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
