#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaTrike_Character_BP_Corrupt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.ShowSmallDino
struct AMegaTrike_Character_BP_Corrupt_C_ShowSmallDino_Params
{
	class APrimalCharacter*                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit_Info;                                                 // (Parm)
};

// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.Stop Ram Attack Buildup
struct AMegaTrike_Character_BP_Corrupt_C_Stop_Ram_Attack_Buildup_Params
{
};

// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.HandleRamStructureCollision
struct AMegaTrike_Character_BP_Corrupt_C_HandleRamStructureCollision_Params
{
};

// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.CanDamageActor
struct AMegaTrike_Character_BP_Corrupt_C_CanDamageActor_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TargetCanBeDamaged;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.UserConstructionScript
struct AMegaTrike_Character_BP_Corrupt_C_UserConstructionScript_Params
{
};

// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.OnComponentBeginOverlap_Event
struct AMegaTrike_Character_BP_Corrupt_C_OnComponentBeginOverlap_Event_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.OnRamStarted_Copy
struct AMegaTrike_Character_BP_Corrupt_C_OnRamStarted_Copy_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.ClientOnRamEnded_Copy
struct AMegaTrike_Character_BP_Corrupt_C_ClientOnRamEnded_Copy_Params
{
	bool                                               HitSomething;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.Private__RamEnded_Copy
struct AMegaTrike_Character_BP_Corrupt_C_Private__RamEnded_Copy_Params
{
	bool                                               HitSomething;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C.ExecuteUbergraph_MegaTrike_Character_BP_Corrupt
struct AMegaTrike_Character_BP_Corrupt_C_ExecuteUbergraph_MegaTrike_Character_BP_Corrupt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
