// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateFlyerPassengerGrab_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Grab Character
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFlyerPassengerGrab_C::Grab_Character(class APrimalCharacter* Character, bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Grab Character");

	UDinoAttackStateFlyerPassengerGrab_C_Grab_Character_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Can Grab Character
// ()
// Parameters:
// class APrimalCharacter*        ACharacter                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            PassengerSeatIndex             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackStateFlyerPassengerGrab_C::Can_Grab_Character(class APrimalCharacter* ACharacter, int PassengerSeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Can Grab Character");

	UDinoAttackStateFlyerPassengerGrab_C_Can_Grab_Character_Params params;
	params.ACharacter = ACharacter;
	params.PassengerSeatIndex = PassengerSeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Reset State
// ()

void UDinoAttackStateFlyerPassengerGrab_C::Reset_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Reset State");

	UDinoAttackStateFlyerPassengerGrab_C_Reset_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnEndEvent
// ()

void UDinoAttackStateFlyerPassengerGrab_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnEndEvent");

	UDinoAttackStateFlyerPassengerGrab_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnTickEvent
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFlyerPassengerGrab_C::OnTickEvent(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnTickEvent");

	UDinoAttackStateFlyerPassengerGrab_C_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.StartAnimationStateEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFlyerPassengerGrab_C::StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.StartAnimationStateEvent");

	UDinoAttackStateFlyerPassengerGrab_C_StartAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.GetAttackSocketLocations
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Private, Protected, Delegate)
// Parameters:
// TArray<struct UObject_FTransform> Locations                      (Parm, OutParm, ZeroConstructor)

void UDinoAttackStateFlyerPassengerGrab_C::GetAttackSocketLocations(TArray<struct UObject_FTransform>* Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.GetAttackSocketLocations");

	UDinoAttackStateFlyerPassengerGrab_C_GetAttackSocketLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;
}


// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Find Best Grab Target
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate)
// Parameters:
// class APrimalCharacter*        bestTarget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFlyerPassengerGrab_C::Find_Best_Grab_Target(class APrimalCharacter** bestTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Find Best Grab Target");

	UDinoAttackStateFlyerPassengerGrab_C_Find_Best_Grab_Target_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bestTarget != nullptr)
		*bestTarget = params.bestTarget;
}


// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Get Best Passenger Candidate
// ()
// Parameters:
// TArray<class AActor*>          Chars                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 SocketWorldPos                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BestChar                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFlyerPassengerGrab_C::Get_Best_Passenger_Candidate(const struct FVector& SocketWorldPos, TArray<class AActor*>* Chars, class AActor** BestChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Get Best Passenger Candidate");

	UDinoAttackStateFlyerPassengerGrab_C_Get_Best_Passenger_Candidate_Params params;
	params.SocketWorldPos = SocketWorldPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Chars != nullptr)
		*Chars = params.Chars;
	if (BestChar != nullptr)
		*BestChar = params.BestChar;
}


// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFlyerPassengerGrab_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnBeginEvent");

	UDinoAttackStateFlyerPassengerGrab_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFlyerPassengerGrab_C::ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab");

	UDinoAttackStateFlyerPassengerGrab_C_ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
