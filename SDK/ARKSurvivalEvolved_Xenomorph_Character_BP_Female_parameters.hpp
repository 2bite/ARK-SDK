#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Female_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPTimerNonDedicated
struct AXenomorph_Character_BP_Female_C_BPTimerNonDedicated_Params
{
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.HasBuffsOfClasses
struct AXenomorph_Character_BP_Female_C_HasBuffsOfClasses_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ParentClassesArray;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ReadyToImpregnateNonPure
struct AXenomorph_Character_BP_Female_C_ReadyToImpregnateNonPure_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ReadyToImpregnate
struct AXenomorph_Character_BP_Female_C_ReadyToImpregnate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.GetNewTimeForImpregnate
struct AXenomorph_Character_BP_Female_C_GetNewTimeForImpregnate_Params
{
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.InitializeDive
struct AXenomorph_Character_BP_Female_C_InitializeDive_Params
{
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.OnChargeEvent
struct AXenomorph_Character_BP_Female_C_OnChargeEvent_Params
{
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPAdjustDamage
struct AXenomorph_Character_BP_Female_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPDidClearCarriedCharacter
struct AXenomorph_Character_BP_Female_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BlueprintCanAttack
struct AXenomorph_Character_BP_Female_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPDidSetCarriedCharacter
struct AXenomorph_Character_BP_Female_C_BPDidSetCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.DisableEyeGlow
struct AXenomorph_Character_BP_Female_C_DisableEyeGlow_Params
{
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.UserConstructionScript
struct AXenomorph_Character_BP_Female_C_UserConstructionScript_Params
{
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_EndBury
struct AXenomorph_Character_BP_Female_C_AnimNotify_EndBury_Params
{
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_CheckForGrab
struct AXenomorph_Character_BP_Female_C_AnimNotify_CheckForGrab_Params
{
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_Impregnate
struct AXenomorph_Character_BP_Female_C_AnimNotify_Impregnate_Params
{
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ImpregnateStart
struct AXenomorph_Character_BP_Female_C_ImpregnateStart_Params
{
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_StartBury
struct AXenomorph_Character_BP_Female_C_AnimNotify_StartBury_Params
{
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_ImpregnateRelease
struct AXenomorph_Character_BP_Female_C_AnimNotify_ImpregnateRelease_Params
{
};

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ExecuteUbergraph_Xenomorph_Character_BP_Female
struct AXenomorph_Character_BP_Female_C_ExecuteUbergraph_Xenomorph_Character_BP_Female_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
