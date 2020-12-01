#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalodon_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPHandleControllerInitiatedAttack
struct AMegalodon_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPHandleOnStopTargeting
struct AMegalodon_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPNotifyClearRider
struct AMegalodon_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPModifyFOV
struct AMegalodon_Character_BP_C_BPModifyFOV_Params
{
	float*                                             FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megalodon_Character_BP.Megalodon_Character_BP_C.UserConstructionScript
struct AMegalodon_Character_BP_C_UserConstructionScript_Params
{
};

// Function Megalodon_Character_BP.Megalodon_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_170
struct AMegalodon_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_170_Params
{
};

// Function Megalodon_Character_BP.Megalodon_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_169
struct AMegalodon_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_169_Params
{
};

// Function Megalodon_Character_BP.Megalodon_Character_BP_C.ExecuteUbergraph_Megalodon_Character_BP
struct AMegalodon_Character_BP_C_ExecuteUbergraph_Megalodon_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
