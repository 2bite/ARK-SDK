#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Meteor_launcher_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Meteor_launcher.Meteor_launcher_C.Update Location
struct AMeteor_launcher_C_Update_Location_Params
{
};

// Function Meteor_launcher.Meteor_launcher_C.Shoot
struct AMeteor_launcher_C_Shoot_Params
{
	bool                                               NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Meteor_launcher.Meteor_launcher_C.UserConstructionScript
struct AMeteor_launcher_C_UserConstructionScript_Params
{
};

// Function Meteor_launcher.Meteor_launcher_C.ReceiveBeginPlay
struct AMeteor_launcher_C_ReceiveBeginPlay_Params
{
};

// Function Meteor_launcher.Meteor_launcher_C.ReceiveTick
struct AMeteor_launcher_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Meteor_launcher.Meteor_launcher_C.Destroy_MeteorLauncher
struct AMeteor_launcher_C_Destroy_MeteorLauncher_Params
{
};

// Function Meteor_launcher.Meteor_launcher_C.ExecuteUbergraph_Meteor_launcher
struct AMeteor_launcher_C_ExecuteUbergraph_Meteor_launcher_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
