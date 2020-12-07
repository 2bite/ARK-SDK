#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Shapeshifter_Large_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.DinoUberpounce
struct AShapeshifter_Large_AIController_BP_C_DinoUberpounce_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.LocationUberpounce
struct AShapeshifter_Large_AIController_BP_C_LocationUberpounce_Params
{
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.AllowSurfaceNormalForUberpounce
struct AShapeshifter_Large_AIController_BP_C_AllowSurfaceNormalForUberpounce_Params
{
	struct FVector                                     surfaceNormal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Enable
struct AShapeshifter_Large_AIController_BP_C_Enable_Params
{
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Start Uberpounce
struct AShapeshifter_Large_AIController_BP_C_Start_Uberpounce_Params
{
	struct FUberpounceData                             Data;                                                     // (Parm)
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Deinonychus AttackedWhileLatched
struct AShapeshifter_Large_AIController_BP_C_Deinonychus_AttackedWhileLatched_Params
{
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.OnUberpounceStateChanged
struct AShapeshifter_Large_AIController_BP_C_OnUberpounceStateChanged_Params
{
	TEnumAsByte<EUberpounceState>                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUberpounceState>                      PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.UpdateUberpounce
struct AShapeshifter_Large_AIController_BP_C_UpdateUberpounce_Params
{
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ReceiveBeginPlay
struct AShapeshifter_Large_AIController_BP_C_ReceiveBeginPlay_Params
{
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ReceiveTick
struct AShapeshifter_Large_AIController_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.GetPrimalTarget
struct AShapeshifter_Large_AIController_BP_C_GetPrimalTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.GetDino
struct AShapeshifter_Large_AIController_BP_C_GetDino_Params
{
	class ADeinonychus_Character_BP_C*                 ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.UserConstructionScript
struct AShapeshifter_Large_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ExecuteUbergraph_Shapeshifter_Large_AIController_BP
struct AShapeshifter_Large_AIController_BP_C_ExecuteUbergraph_Shapeshifter_Large_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
