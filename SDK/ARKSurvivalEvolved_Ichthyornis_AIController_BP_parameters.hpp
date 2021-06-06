#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ichthyornis_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingDesireTamed
struct AIchthyornis_AIController_BP_C_GetTargetingDesireTamed_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              initialDesire;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              initialMultiplier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              desire;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              desireMultiplier;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.StandardTargetChecks
struct AIchthyornis_AIController_BP_C_StandardTargetChecks_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AIchthyornis_Character_BP_C*                 IchthyPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Get Targeting Desire Wild
struct AIchthyornis_AIController_BP_C_Get_Targeting_Desire_Wild_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              initialDesire;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              initialMultiplier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              desire;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetAggroNotifyNeighborsRange
struct AIchthyornis_AIController_BP_C_GetAggroNotifyNeighborsRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingRangeForPlayers
struct AIchthyornis_AIController_BP_C_GetTargetingRangeForPlayers_Params
{
	float                                              targetingRange;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.DoDepthCheck
struct AIchthyornis_AIController_BP_C_DoDepthCheck_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NotTooDeep;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.UpdateFlyingOffset
struct AIchthyornis_AIController_BP_C_UpdateFlyingOffset_Params
{
};

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Update Combat Offset
struct AIchthyornis_AIController_BP_C_Update_Combat_Offset_Params
{
};

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.ChangedAITarget
struct AIchthyornis_AIController_BP_C_ChangedAITarget_Params
{
};

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.BPGetTargetingDesire
struct AIchthyornis_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.UserConstructionScript
struct AIchthyornis_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.ExecuteUbergraph_Ichthyornis_AIController_BP
struct AIchthyornis_AIController_BP_C_ExecuteUbergraph_Ichthyornis_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
