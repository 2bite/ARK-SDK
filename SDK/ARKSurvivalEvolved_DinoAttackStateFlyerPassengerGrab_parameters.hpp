#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateFlyerPassengerGrab_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Grab Character
struct UDinoAttackStateFlyerPassengerGrab_C_Grab_Character_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               return_value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Can Grab Character
struct UDinoAttackStateFlyerPassengerGrab_C_Can_Grab_Character_Params
{
	class APrimalCharacter*                            ACharacter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PassengerSeatIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Reset State
struct UDinoAttackStateFlyerPassengerGrab_C_Reset_State_Params
{
};

// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnEndEvent
struct UDinoAttackStateFlyerPassengerGrab_C_OnEndEvent_Params
{
};

// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnTickEvent
struct UDinoAttackStateFlyerPassengerGrab_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.StartAnimationStateEvent
struct UDinoAttackStateFlyerPassengerGrab_C_StartAnimationStateEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.GetAttackSocketLocations
struct UDinoAttackStateFlyerPassengerGrab_C_GetAttackSocketLocations_Params
{
	TArray<struct UObject_FTransform>                  Locations;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Find Best Grab Target
struct UDinoAttackStateFlyerPassengerGrab_C_Find_Best_Grab_Target_Params
{
	class APrimalCharacter*                            bestTarget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.Get Best Passenger Candidate
struct UDinoAttackStateFlyerPassengerGrab_C_Get_Best_Passenger_Candidate_Params
{
	TArray<class AActor*>                              Chars;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     SocketWorldPos;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BestChar;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.OnBeginEvent
struct UDinoAttackStateFlyerPassengerGrab_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C.ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab
struct UDinoAttackStateFlyerPassengerGrab_C_ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
