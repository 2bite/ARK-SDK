// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_Scout_Strafe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_Scout_Strafe.Task_Scout_Strafe_C.UpdateStrafeState
// ()
// Parameters:
// class AActor*                  Scout                          (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UTask_Scout_Strafe_C::UpdateStrafeState(class AActor* Scout, class APrimalCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Scout_Strafe.Task_Scout_Strafe_C.UpdateStrafeState");

	UTask_Scout_Strafe_C_UpdateStrafeState_Params params;
	params.Scout = Scout;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_Scout_Strafe.Task_Scout_Strafe_C.GetStrafeZChange
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_Scout_Strafe_C::GetStrafeZChange(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Scout_Strafe.Task_Scout_Strafe_C.GetStrafeZChange");

	UTask_Scout_Strafe_C_GetStrafeZChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Task_Scout_Strafe.Task_Scout_Strafe_C.Get Strafe Max HeightMult
// ()
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_Scout_Strafe_C::Get_Strafe_Max_HeightMult(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Scout_Strafe.Task_Scout_Strafe_C.Get Strafe Max HeightMult");

	UTask_Scout_Strafe_C_Get_Strafe_Max_HeightMult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function Task_Scout_Strafe.Task_Scout_Strafe_C.Get Strafe Min HeightMult
// ()
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_Scout_Strafe_C::Get_Strafe_Min_HeightMult(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Scout_Strafe.Task_Scout_Strafe_C.Get Strafe Min HeightMult");

	UTask_Scout_Strafe_C_Get_Strafe_Min_HeightMult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function Task_Scout_Strafe.Task_Scout_Strafe_C.Initialize
// ()
// Parameters:
// class AScout_AIController_BP_C* Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_Scout_Strafe_C::Initialize(class AScout_AIController_BP_C* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Scout_Strafe.Task_Scout_Strafe_C.Initialize");

	UTask_Scout_Strafe_C_Initialize_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_Scout_Strafe.Task_Scout_Strafe_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_Scout_Strafe_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Scout_Strafe.Task_Scout_Strafe_C.ReceiveTick");

	UTask_Scout_Strafe_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_Scout_Strafe.Task_Scout_Strafe_C.ExecuteUbergraph_Task_Scout_Strafe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_Scout_Strafe_C::ExecuteUbergraph_Task_Scout_Strafe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Scout_Strafe.Task_Scout_Strafe_C.ExecuteUbergraph_Task_Scout_Strafe");

	UTask_Scout_Strafe_C_ExecuteUbergraph_Task_Scout_Strafe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
