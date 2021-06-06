// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsDragon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.RemoveDeadCharactersInContainer
// ()
// Parameters:
// TArray<class APrimalDinoCharacter*> Container_In                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class APrimalDinoCharacter*> ReturnArray                    (Parm, OutParm, ZeroConstructor)

void UDinoAttackStateMinionsDragon_C::RemoveDeadCharactersInContainer(TArray<class APrimalDinoCharacter*>* Container_In, TArray<class APrimalDinoCharacter*>* ReturnArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.RemoveDeadCharactersInContainer");

	UDinoAttackStateMinionsDragon_C_RemoveDeadCharactersInContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Container_In != nullptr)
		*Container_In = params.Container_In;
	if (ReturnArray != nullptr)
		*ReturnArray = params.ReturnArray;
}


// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.EndAnimationStateEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsDragon_C::EndAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.EndAnimationStateEvent");

	UDinoAttackStateMinionsDragon_C_EndAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.TickAnimationStateEvent
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsDragon_C::TickAnimationStateEvent(float* DeltaTime, struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.TickAnimationStateEvent");

	UDinoAttackStateMinionsDragon_C_TickAnimationStateEvent_Params params;
	params.DeltaTime = DeltaTime;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.StartAnimationStateEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsDragon_C::StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.StartAnimationStateEvent");

	UDinoAttackStateMinionsDragon_C_StartAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.OnCanUseStateEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackStateMinionsDragon_C::OnCanUseStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.OnCanUseStateEvent");

	UDinoAttackStateMinionsDragon_C_OnCanUseStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.OnEndEvent
// ()

void UDinoAttackStateMinionsDragon_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.OnEndEvent");

	UDinoAttackStateMinionsDragon_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.OnTickEvent
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsDragon_C::OnTickEvent(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.OnTickEvent");

	UDinoAttackStateMinionsDragon_C_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsDragon_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.OnBeginEvent");

	UDinoAttackStateMinionsDragon_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.ExecuteUbergraph_DinoAttackStateMinionsDragon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsDragon_C::ExecuteUbergraph_DinoAttackStateMinionsDragon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsDragon.DinoAttackStateMinionsDragon_C.ExecuteUbergraph_DinoAttackStateMinionsDragon");

	UDinoAttackStateMinionsDragon_C_ExecuteUbergraph_DinoAttackStateMinionsDragon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
