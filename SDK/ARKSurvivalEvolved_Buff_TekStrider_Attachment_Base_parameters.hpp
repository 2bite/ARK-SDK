#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_Attachment_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.get socket loc
struct ABuff_TekStrider_Attachment_Base_C_get_socket_loc_Params
{
	struct FVector                                     fallback_loc;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       socket_name;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               could_get_socket_loc;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.is head clear
struct ABuff_TekStrider_Attachment_Base_C_is_head_clear_Params
{
	struct FName                                       extra_socket;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               from_animbp;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               head_is_clear;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               could_find_socket;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.trace check for blockers between locations
struct ABuff_TekStrider_Attachment_Base_C_trace_check_for_blockers_between_locations_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignore_foliage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BuffTickServer
struct ABuff_TekStrider_Attachment_Base_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.clear rider
struct ABuff_TekStrider_Attachment_Base_C_clear_rider_Params
{
	class AShooterCharacter*                           prev_rider;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.set rider
struct ABuff_TekStrider_Attachment_Base_C_set_rider_Params
{
};

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.TriggerDoubletapped
struct ABuff_TekStrider_Attachment_Base_C_TriggerDoubletapped_Params
{
};

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.TriggerReleased
struct ABuff_TekStrider_Attachment_Base_C_TriggerReleased_Params
{
};

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BPDeactivated
struct ABuff_TekStrider_Attachment_Base_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.BPSetupForInstigator
struct ABuff_TekStrider_Attachment_Base_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.Trigger
struct ABuff_TekStrider_Attachment_Base_C_Trigger_Params
{
};

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.UserConstructionScript
struct ABuff_TekStrider_Attachment_Base_C_UserConstructionScript_Params
{
};

// Function Buff_TekStrider_Attachment_Base.Buff_TekStrider_Attachment_Base_C.ExecuteUbergraph_Buff_TekStrider_Attachment_Base
struct ABuff_TekStrider_Attachment_Base_C_ExecuteUbergraph_Buff_TekStrider_Attachment_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
