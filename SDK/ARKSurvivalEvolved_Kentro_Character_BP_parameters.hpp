#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Kentro_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Kentro_Character_BP.Kentro_Character_BP_C.BPDidSetCarriedCharacter
struct AKentro_Character_BP_C_BPDidSetCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kentro_Character_BP.Kentro_Character_BP_C.BPDidClearCarriedCharacter
struct AKentro_Character_BP_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kentro_Character_BP.Kentro_Character_BP_C.BPDoAttack
struct AKentro_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kentro_Character_BP.Kentro_Character_BP_C.BlueprintCanRiderAttack
struct AKentro_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kentro_Character_BP.Kentro_Character_BP_C.BlueprintCanAttack
struct AKentro_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kentro_Character_BP.Kentro_Character_BP_C.BPSetupTamed
struct AKentro_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kentro_Character_BP.Kentro_Character_BP_C.BPTimerServer
struct AKentro_Character_BP_C_BPTimerServer_Params
{
};

// Function Kentro_Character_BP.Kentro_Character_BP_C.BPAdjustDamage
struct AKentro_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kentro_Character_BP.Kentro_Character_BP_C.UserConstructionScript
struct AKentro_Character_BP_C_UserConstructionScript_Params
{
};

// Function Kentro_Character_BP.Kentro_Character_BP_C.Bleed
struct AKentro_Character_BP_C_Bleed_Params
{
	class APrimalCharacter*                            ImpaledChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kentro_Character_BP.Kentro_Character_BP_C.PrepareToDrop
struct AKentro_Character_BP_C_PrepareToDrop_Params
{
};

// Function Kentro_Character_BP.Kentro_Character_BP_C.ExecuteUbergraph_Kentro_Character_BP
struct AKentro_Character_BP_C_ExecuteUbergraph_Kentro_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
