#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sheep_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Sheep_Character_BP.Sheep_Character_BP_C.BPTryMultiUse
struct ASheep_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.BPGetMultiUseEntries
struct ASheep_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.Get Time Interval for Full Wool
struct ASheep_Character_BP_C_Get_Time_Interval_for_Full_Wool_Params
{
	float                                              OutVal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoARKDownloadedBegin
struct ASheep_Character_BP_C_BPDinoARKDownloadedBegin_Params
{
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoPrepareForARKUploading
struct ASheep_Character_BP_C_BPDinoPrepareForARKUploading_Params
{
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.SetWoolPercentage
struct ASheep_Character_BP_C_SetWoolPercentage_Params
{
	float                                              NewPercentage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.DoHaircut
struct ASheep_Character_BP_C_DoHaircut_Params
{
	class AShooterCharacter**                          FromPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.BPDinoPostBeginPlay
struct ASheep_Character_BP_C_BPDinoPostBeginPlay_Params
{
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.BPUnstasis
struct ASheep_Character_BP_C_BPUnstasis_Params
{
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.UpdateWoolMaterial
struct ASheep_Character_BP_C_UpdateWoolMaterial_Params
{
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.BPTimerNonDedicated
struct ASheep_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.GetWoolPercentage
struct ASheep_Character_BP_C_GetWoolPercentage_Params
{
	float                                              OutPercent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.UserConstructionScript
struct ASheep_Character_BP_C_UserConstructionScript_Params
{
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.DoSpawnHairParticles
struct ASheep_Character_BP_C_DoSpawnHairParticles_Params
{
	struct FVector                                     AtLoc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sheep_Character_BP.Sheep_Character_BP_C.ExecuteUbergraph_Sheep_Character_BP
struct ASheep_Character_BP_C_ExecuteUbergraph_Sheep_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
