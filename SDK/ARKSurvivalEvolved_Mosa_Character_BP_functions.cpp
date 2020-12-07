// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mosa_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mosa_Character_BP.Mosa_Character_BP_C.BPModifyFOV
// ()
// Parameters:
// float*                         FOVIn                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMosa_Character_BP_C::BPModifyFOV(float* FOVIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_Character_BP.Mosa_Character_BP_C.BPModifyFOV");

	AMosa_Character_BP_C_BPModifyFOV_Params params;
	params.FOVIn = FOVIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mosa_Character_BP.Mosa_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AMosa_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_Character_BP.Mosa_Character_BP_C.BPNotifyClearRider");

	AMosa_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mosa_Character_BP.Mosa_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMosa_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_Character_BP.Mosa_Character_BP_C.BPHandleControllerInitiatedAttack");

	AMosa_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mosa_Character_BP.Mosa_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMosa_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_Character_BP.Mosa_Character_BP_C.BPHandleOnStopTargeting");

	AMosa_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mosa_Character_BP.Mosa_Character_BP_C.UserConstructionScript
// ()

void AMosa_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_Character_BP.Mosa_Character_BP_C.UserConstructionScript");

	AMosa_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mosa_Character_BP.Mosa_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_174
// ()

void AMosa_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_174()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_Character_BP.Mosa_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_174");

	AMosa_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_174_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mosa_Character_BP.Mosa_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_173
// ()

void AMosa_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_173()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_Character_BP.Mosa_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_173");

	AMosa_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_173_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mosa_Character_BP.Mosa_Character_BP_C.ExecuteUbergraph_Mosa_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMosa_Character_BP_C::ExecuteUbergraph_Mosa_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_Character_BP.Mosa_Character_BP_C.ExecuteUbergraph_Mosa_Character_BP");

	AMosa_Character_BP_C_ExecuteUbergraph_Mosa_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
