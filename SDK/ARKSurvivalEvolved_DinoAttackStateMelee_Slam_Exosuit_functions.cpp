// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Slam_Exosuit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C.StartAnimationStateEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_Slam_Exosuit_C::StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C.StartAnimationStateEvent");

	UDinoAttackStateMelee_Slam_Exosuit_C_StartAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C.BPGetSocketLocation
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, NetClient, BlueprintEvent)
// Parameters:
// struct FName                   SocketName                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 SocketLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_Slam_Exosuit_C::STATIC_BPGetSocketLocation(struct FName* SocketName, struct FVector* SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C.BPGetSocketLocation");

	UDinoAttackStateMelee_Slam_Exosuit_C_BPGetSocketLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocketName != nullptr)
		*SocketName = params.SocketName;
	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
}


// Function DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C.ExecuteUbergraph_DinoAttackStateMelee_Slam_Exosuit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_Slam_Exosuit_C::ExecuteUbergraph_DinoAttackStateMelee_Slam_Exosuit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C.ExecuteUbergraph_DinoAttackStateMelee_Slam_Exosuit");

	UDinoAttackStateMelee_Slam_Exosuit_C_ExecuteUbergraph_DinoAttackStateMelee_Slam_Exosuit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
