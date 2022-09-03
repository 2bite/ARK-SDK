#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WaterCurrentFlowForce_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnClearPassenger
struct ABuff_WaterCurrentFlowForce_C_OnClearPassenger_Params
{
	class APrimalCharacter*                            Passenger;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        ForDino;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnClearRider
struct ABuff_WaterCurrentFlowForce_C_OnClearRider_Params
{
	class AShooterCharacter*                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        ForDino;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.On Set Passenger
struct ABuff_WaterCurrentFlowForce_C_On_Set_Passenger_Params
{
	class APrimalCharacter*                            Passenger;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        ForDino;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.OnSetRider
struct ABuff_WaterCurrentFlowForce_C_OnSetRider_Params
{
	class AShooterCharacter*                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        ForDino;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.SetWaterCurrentBuffActivation
struct ABuff_WaterCurrentFlowForce_C_SetWaterCurrentBuffActivation_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPCustomAllowAddBuff
struct ABuff_WaterCurrentFlowForce_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPSetupForInstigator
struct ABuff_WaterCurrentFlowForce_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPOnInstigatorMovementModeChangedNotify
struct ABuff_WaterCurrentFlowForce_C_BPOnInstigatorMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BP_OverrideCharacterSwimmingVelocity
struct ABuff_WaterCurrentFlowForce_C_BP_OverrideCharacterSwimmingVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              FluidFriction;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              NetBuoyancy;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.AllowPostProcessEffect
struct ABuff_WaterCurrentFlowForce_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BuffTickServer
struct ABuff_WaterCurrentFlowForce_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPDeactivated
struct ABuff_WaterCurrentFlowForce_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.BPActivated
struct ABuff_WaterCurrentFlowForce_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.UserConstructionScript
struct ABuff_WaterCurrentFlowForce_C_UserConstructionScript_Params
{
};

// Function Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C.ExecuteUbergraph_Buff_WaterCurrentFlowForce
struct ABuff_WaterCurrentFlowForce_C_ExecuteUbergraph_Buff_WaterCurrentFlowForce_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
