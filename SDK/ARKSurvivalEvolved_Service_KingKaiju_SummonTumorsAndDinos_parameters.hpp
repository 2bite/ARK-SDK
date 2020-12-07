#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_KingKaiju_SummonTumorsAndDinos_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.FindTumorSpawnFrequency
struct UService_KingKaiju_SummonTumorsAndDinos_C_FindTumorSpawnFrequency_Params
{
	class AKingKaiju_Character_BP_C*                   KKChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TumorSpawnFrequency;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.FindMaxTumorAllowed
struct UService_KingKaiju_SummonTumorsAndDinos_C_FindMaxTumorAllowed_Params
{
	class AKingKaiju_Character_BP_C*                   KKChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxTumors;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.ReceiveActivation
struct UService_KingKaiju_SummonTumorsAndDinos_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.TumorIsNearby
struct UService_KingKaiju_SummonTumorsAndDinos_C_TumorIsNearby_Params
{
	struct FVector                                     AtLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            KKChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundTumorNearby;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.FindAllTumors
struct UService_KingKaiju_SummonTumorsAndDinos_C_FindAllTumors_Params
{
	class AActor*                                      KKChar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tumors;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.ReceiveTick
struct UService_KingKaiju_SummonTumorsAndDinos_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_KingKaiju_SummonTumorsAndDinos.Service_KingKaiju_SummonTumorsAndDinos_C.ExecuteUbergraph_Service_KingKaiju_SummonTumorsAndDinos
struct UService_KingKaiju_SummonTumorsAndDinos_C_ExecuteUbergraph_Service_KingKaiju_SummonTumorsAndDinos_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
