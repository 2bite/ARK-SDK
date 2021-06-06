#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapHarpoon_Net_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapHarpoon_Net.WeapHarpoon_Net_C.Remote Set Crosshair Size
struct AWeapHarpoon_Net_C_Remote_Set_Crosshair_Size_Params
{
	float                                              InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutSize;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapHarpoon_Net.WeapHarpoon_Net_C.Remote Set Crosshair Color
struct AWeapHarpoon_Net_C_Remote_Set_Crosshair_Color_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                outColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapHarpoon_Net.WeapHarpoon_Net_C.GetHudData
struct AWeapHarpoon_Net_C_GetHudData_Params
{
	class UClass*                                      ProjectileClass;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FireDirection;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AimedTargetCheckRadius;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFPV;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapHarpoon_Net.WeapHarpoon_Net_C.BPGetCrosshairColor
struct AWeapHarpoon_Net_C_BPGetCrosshairColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapHarpoon_Net.WeapHarpoon_Net_C.BPStartEquippedNotify
struct AWeapHarpoon_Net_C_BPStartEquippedNotify_Params
{
};

// Function WeapHarpoon_Net.WeapHarpoon_Net_C.StartUnequipEvent
struct AWeapHarpoon_Net_C_StartUnequipEvent_Params
{
};

// Function WeapHarpoon_Net.WeapHarpoon_Net_C.ReceiveDestroyed
struct AWeapHarpoon_Net_C_ReceiveDestroyed_Params
{
};

// Function WeapHarpoon_Net.WeapHarpoon_Net_C.GetCrosshairColor
struct AWeapHarpoon_Net_C_GetCrosshairColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapHarpoon_Net.WeapHarpoon_Net_C.BPDrawHud
struct AWeapHarpoon_Net_C_BPDrawHud_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapHarpoon_Net.WeapHarpoon_Net_C.UserConstructionScript
struct AWeapHarpoon_Net_C_UserConstructionScript_Params
{
};

// Function WeapHarpoon_Net.WeapHarpoon_Net_C.ExecuteUbergraph_WeapHarpoon_Net
struct AWeapHarpoon_Net_C_ExecuteUbergraph_WeapHarpoon_Net_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
