#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mosa_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mosa_Character_BP.Mosa_Character_BP_C.BPModifyFOV
struct AMosa_Character_BP_C_BPModifyFOV_Params
{
	float*                                             FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mosa_Character_BP.Mosa_Character_BP_C.BPNotifyClearRider
struct AMosa_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mosa_Character_BP.Mosa_Character_BP_C.BPHandleControllerInitiatedAttack
struct AMosa_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mosa_Character_BP.Mosa_Character_BP_C.BPHandleOnStopTargeting
struct AMosa_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mosa_Character_BP.Mosa_Character_BP_C.UserConstructionScript
struct AMosa_Character_BP_C_UserConstructionScript_Params
{
};

// Function Mosa_Character_BP.Mosa_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_178
struct AMosa_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_178_Params
{
};

// Function Mosa_Character_BP.Mosa_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_177
struct AMosa_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_177_Params
{
};

// Function Mosa_Character_BP.Mosa_Character_BP_C.ExecuteUbergraph_Mosa_Character_BP
struct AMosa_Character_BP_C_ExecuteUbergraph_Mosa_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
