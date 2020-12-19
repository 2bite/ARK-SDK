#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionSpline_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionSpline_Base.MissionSpline_Base_C.ActivateParticlesBetweenLocations
struct AMissionSpline_Base_C_ActivateParticlesBetweenLocations_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Finish;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionSpline_Base.MissionSpline_Base_C.ClearParticles
struct AMissionSpline_Base_C_ClearParticles_Params
{
};

// Function MissionSpline_Base.MissionSpline_Base_C.UpdateSpline
struct AMissionSpline_Base_C_UpdateSpline_Params
{
};

// Function MissionSpline_Base.MissionSpline_Base_C.MakeSpline
struct AMissionSpline_Base_C_MakeSpline_Params
{
};

// Function MissionSpline_Base.MissionSpline_Base_C.UserConstructionScript
struct AMissionSpline_Base_C_UserConstructionScript_Params
{
};

// Function MissionSpline_Base.MissionSpline_Base_C.ReceiveBeginPlay
struct AMissionSpline_Base_C_ReceiveBeginPlay_Params
{
};

// Function MissionSpline_Base.MissionSpline_Base_C.ReceiveTick
struct AMissionSpline_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionSpline_Base.MissionSpline_Base_C.ExecuteUbergraph_MissionSpline_Base
struct AMissionSpline_Base_C_ExecuteUbergraph_MissionSpline_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
