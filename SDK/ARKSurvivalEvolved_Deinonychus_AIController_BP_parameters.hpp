#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deinonychus_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.DinoUberpounce
struct ADeinonychus_AIController_BP_C_DinoUberpounce_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.LocationUberpounce
struct ADeinonychus_AIController_BP_C_LocationUberpounce_Params
{
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.AllowSurfaceNormalForUberpounce
struct ADeinonychus_AIController_BP_C_AllowSurfaceNormalForUberpounce_Params
{
	struct FVector                                     SurfaceNormal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.Enable
struct ADeinonychus_AIController_BP_C_Enable_Params
{
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.Start Uberpounce
struct ADeinonychus_AIController_BP_C_Start_Uberpounce_Params
{
	struct FUberpounceData                             Data;                                                     // (Parm)
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.Deinonychus AttackedWhileLatched
struct ADeinonychus_AIController_BP_C_Deinonychus_AttackedWhileLatched_Params
{
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.OnUberpounceStateChanged
struct ADeinonychus_AIController_BP_C_OnUberpounceStateChanged_Params
{
	TEnumAsByte<EUberpounceState>                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUberpounceState>                      PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.UpdateUberpounce
struct ADeinonychus_AIController_BP_C_UpdateUberpounce_Params
{
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.ReceiveBeginPlay
struct ADeinonychus_AIController_BP_C_ReceiveBeginPlay_Params
{
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.ReceiveTick
struct ADeinonychus_AIController_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.GetPrimalTarget
struct ADeinonychus_AIController_BP_C_GetPrimalTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.GetDino
struct ADeinonychus_AIController_BP_C_GetDino_Params
{
	class ADeinonychus_Character_BP_C*                 Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.UserConstructionScript
struct ADeinonychus_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.ExecuteUbergraph_Deinonychus_AIController_BP
struct ADeinonychus_AIController_BP_C_ExecuteUbergraph_Deinonychus_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
