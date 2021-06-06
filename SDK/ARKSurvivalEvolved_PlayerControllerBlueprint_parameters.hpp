#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerControllerBlueprint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanFit
struct APlayerControllerBlueprint_C_CanFit_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VerticalOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawningActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      IgnoreActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanDeploy
struct APlayerControllerBlueprint_C_CanDeploy_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      IgnoreActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPCheckCanDinoSpawnFromLocation
struct APlayerControllerBlueprint_C_BPCheckCanDinoSpawnFromLocation_Params
{
	class UClass**                                     DinoClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CheckLocation;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.UserConstructionScript
struct APlayerControllerBlueprint_C_UserConstructionScript_Params
{
};

// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ExecuteUbergraph_PlayerControllerBlueprint
struct APlayerControllerBlueprint_C_ExecuteUbergraph_PlayerControllerBlueprint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
