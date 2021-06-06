#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Exosuit_RTS_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPNotifyClearRider
struct AExosuit_RTS_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPOrderedMoveToLoc
struct AExosuit_RTS_Character_BP_C_BPOrderedMoveToLoc_Params
{
	struct FVector                                     DestLoc;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BP_GetCustomModifier_RotationRate
struct AExosuit_RTS_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.OnRep_IsInRtsMode
struct AExosuit_RTS_Character_BP_C_OnRep_IsInRtsMode_Params
{
};

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPServerHandleNetExecCommand
struct AExosuit_RTS_Character_BP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.BPHandleUseButtonPress
struct AExosuit_RTS_Character_BP_C_BPHandleUseButtonPress_Params
{
	class AShooterPlayerController**                   RiderController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.ServerStartRTS
struct AExosuit_RTS_Character_BP_C_ServerStartRTS_Params
{
};

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.UserConstructionScript
struct AExosuit_RTS_Character_BP_C_UserConstructionScript_Params
{
};

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_310
struct AExosuit_RTS_Character_BP_C_InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_310_Params
{
};

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_309
struct AExosuit_RTS_Character_BP_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_309_Params
{
};

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_308
struct AExosuit_RTS_Character_BP_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_308_Params
{
};

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_307
struct AExosuit_RTS_Character_BP_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_307_Params
{
};

// Function Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C.ExecuteUbergraph_Exosuit_RTS_Character_BP
struct AExosuit_RTS_Character_BP_C_ExecuteUbergraph_Exosuit_RTS_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
