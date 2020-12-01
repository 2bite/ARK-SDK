#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Pack_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Get RadiusToJoinPack
struct ADino_Character_BP_Pack_C_Get_RadiusToJoinPack_Params
{
	bool                                               belongsToOldPack;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              firstTimeRadius;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.CanDinoBeAddedToPack
struct ADino_Character_BP_Pack_C_CanDinoBeAddedToPack_Params
{
	class APrimalDinoCharacter*                        NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              oldPack;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               canBeAdded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Add Dino to Pack
struct ADino_Character_BP_Pack_C_Add_Dino_to_Pack_Params
{
	class AActor*                                      actorToAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsValidClassForPack
struct ADino_Character_BP_Pack_C_IsValidClassForPack_Params
{
	class AActor*                                      joiningActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPTimerServer
struct ADino_Character_BP_Pack_C_BPTimerServer_Params
{
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Put Join Pack On Cooldown
struct ADino_Character_BP_Pack_C_Put_Join_Pack_On_Cooldown_Params
{
	float                                              DurationOfPackPrevention;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Can Join Pack
struct ADino_Character_BP_Pack_C_Can_Join_Pack_Params
{
	bool                                               Can_Join;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPShouldForceFlee
struct ADino_Character_BP_Pack_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ClearPack
struct ADino_Character_BP_Pack_C_ClearPack_Params
{
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.InitPackDino
struct ADino_Character_BP_Pack_C_InitPackDino_Params
{
	bool                                               isBeginPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackRoar
struct ADino_Character_BP_Pack_C_PackRoar_Params
{
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.UpdatePack
struct ADino_Character_BP_Pack_C_UpdatePack_Params
{
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPDoAttack
struct ADino_Character_BP_Pack_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanRiderAttack
struct ADino_Character_BP_Pack_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanAttack
struct ADino_Character_BP_Pack_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsPackLeader
struct ADino_Character_BP_Pack_C_IsPackLeader_Params
{
	bool                                               bIsLeader;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPUnstasis
struct ADino_Character_BP_Pack_C_BPUnstasis_Params
{
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.GatherPack
struct ADino_Character_BP_Pack_C_GatherPack_Params
{
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.OverrideRandomWanderLocation
struct ADino_Character_BP_Pack_C_OverrideRandomWanderLocation_Params
{
	struct FVector                                     originalDestination;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     inVec;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.UserConstructionScript
struct ADino_Character_BP_Pack_C_UserConstructionScript_Params
{
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ReceiveBeginPlay
struct ADino_Character_BP_Pack_C_ReceiveBeginPlay_Params
{
};

// Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ExecuteUbergraph_Dino_Character_BP_Pack
struct ADino_Character_BP_Pack_C_ExecuteUbergraph_Dino_Character_BP_Pack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
