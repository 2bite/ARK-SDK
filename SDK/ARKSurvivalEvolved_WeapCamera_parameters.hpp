#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCamera_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapCamera.WeapCamera_C.BPWeaponZoom
struct AWeapCamera_C_BPWeaponZoom_Params
{
	bool*                                              bZoomingIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapCamera.WeapCamera_C.ReceiveTick
struct AWeapCamera_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapCamera.WeapCamera_C.ReceiveBeginPlay
struct AWeapCamera_C_ReceiveBeginPlay_Params
{
};

// Function WeapCamera.WeapCamera_C.BPConstrainAspectRatio
struct AWeapCamera_C_BPConstrainAspectRatio_Params
{
	float                                              OutAspectRatio;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapCamera.WeapCamera_C.BPTryFireWeapon
struct AWeapCamera_C_BPTryFireWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapCamera.WeapCamera_C.BPAllowNativeFireWeapon
struct AWeapCamera_C_BPAllowNativeFireWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapCamera.WeapCamera_C.UserConstructionScript
struct AWeapCamera_C_UserConstructionScript_Params
{
};

// Function WeapCamera.WeapCamera_C.ServerTookScreenshot
struct AWeapCamera_C_ServerTookScreenshot_Params
{
	bool                                               bUsingFlash;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapCamera.WeapCamera_C.NetTookScreenshot
struct AWeapCamera_C_NetTookScreenshot_Params
{
	bool                                               bUsingFlash;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapCamera.WeapCamera_C.ExecuteUbergraph_WeapCamera
struct AWeapCamera_C_ExecuteUbergraph_WeapCamera_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
