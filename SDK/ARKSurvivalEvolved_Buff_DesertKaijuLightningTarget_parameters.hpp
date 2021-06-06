#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DesertKaijuLightningTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.FindClosestFXSocket
struct ABuff_DesertKaijuLightningTarget_C_FindClosestFXSocket_Params
{
	struct FVector                                     CompareLoc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ClosestSocket;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BuffTickServer
struct ABuff_DesertKaijuLightningTarget_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BPSetupForInstigator
struct ABuff_DesertKaijuLightningTarget_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BPDeactivated
struct ABuff_DesertKaijuLightningTarget_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.SetBuffCauser
struct ABuff_DesertKaijuLightningTarget_C_SetBuffCauser_Params
{
	class AActor**                                     CausedBy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.UserConstructionScript
struct ABuff_DesertKaijuLightningTarget_C_UserConstructionScript_Params
{
};

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.SetLightningLoc
struct ABuff_DesertKaijuLightningTarget_C_SetLightningLoc_Params
{
};

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Client_DeactivateParticle
struct ABuff_DesertKaijuLightningTarget_C_Client_DeactivateParticle_Params
{
};

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.FireDelayedLightning
struct ABuff_DesertKaijuLightningTarget_C_FireDelayedLightning_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseRelative;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Multi_AttachFXToKaiju
struct ABuff_DesertKaijuLightningTarget_C_Multi_AttachFXToKaiju_Params
{
	class USceneComponent*                             Root;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Multi_SpawnNextLightning
struct ABuff_DesertKaijuLightningTarget_C_Multi_SpawnNextLightning_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Relative;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ClosestSocket;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DmgCauser;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLoc;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.ExecuteUbergraph_Buff_DesertKaijuLightningTarget
struct ABuff_DesertKaijuLightningTarget_C_ExecuteUbergraph_Buff_DesertKaijuLightningTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
