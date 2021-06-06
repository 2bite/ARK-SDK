#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArrowNet_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArrowNet_Interface.ArrowNet_Interface_C.Remote Set Crosshair Size
struct UArrowNet_Interface_C_Remote_Set_Crosshair_Size_Params
{
	float                                              InSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutSize;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ArrowNet_Interface.ArrowNet_Interface_C.Remote Set Crosshair Color
struct UArrowNet_Interface_C_Remote_Set_Crosshair_Color_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                outColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ArrowNet_Interface.ArrowNet_Interface_C.GetHudData
struct UArrowNet_Interface_C_GetHudData_Params
{
	class UClass*                                      ProjectileClass;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FireDirection;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AimedTargetCheckRadius;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFPV;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
