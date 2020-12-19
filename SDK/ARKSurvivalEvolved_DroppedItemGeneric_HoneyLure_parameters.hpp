#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_HoneyLure_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.IsDinoInConsumeRange
struct ADroppedItemGeneric_HoneyLure_C_IsDinoInConsumeRange_Params
{
	class AActor*                                      Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoAIController*                     DinoAI;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.SetMovePointNearLure
struct ADroppedItemGeneric_HoneyLure_C_SetMovePointNearLure_Params
{
	class APrimalDinoCharacter*                        DinoToMove;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoAIController*                     DinoAI;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Can Dino Consume Bait
struct ADroppedItemGeneric_HoneyLure_C_Can_Dino_Consume_Bait_Params
{
	class APrimalDinoCharacter*                        InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.BPPostInitializeComponents
struct ADroppedItemGeneric_HoneyLure_C_BPPostInitializeComponents_Params
{
};

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.UserConstructionScript
struct ADroppedItemGeneric_HoneyLure_C_UserConstructionScript_Params
{
};

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Dissolve__FinishedFunc
struct ADroppedItemGeneric_HoneyLure_C_Dissolve__FinishedFunc_Params
{
};

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Dissolve__UpdateFunc
struct ADroppedItemGeneric_HoneyLure_C_Dissolve__UpdateFunc_Params
{
};

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.ReceiveBeginPlay
struct ADroppedItemGeneric_HoneyLure_C_ReceiveBeginPlay_Params
{
};

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.UpdateBait
struct ADroppedItemGeneric_HoneyLure_C_UpdateBait_Params
{
};

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.DestroyBait
struct ADroppedItemGeneric_HoneyLure_C_DestroyBait_Params
{
};

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.AttractCreatures
struct ADroppedItemGeneric_HoneyLure_C_AttractCreatures_Params
{
};

// Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.ExecuteUbergraph_DroppedItemGeneric_HoneyLure
struct ADroppedItemGeneric_HoneyLure_C_ExecuteUbergraph_DroppedItemGeneric_HoneyLure_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
