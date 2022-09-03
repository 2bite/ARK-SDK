// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTD_CanReachTarget_Fjordhawk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.IsFacing
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Facing                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTD_CanReachTarget_Fjordhawk_C::IsFacing(class AActor* Actor, const struct FVector& Point, float Angle, bool* Facing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.IsFacing");

	UBTD_CanReachTarget_Fjordhawk_C_IsFacing_Params params;
	params.Actor = Actor;
	params.Point = Point;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Facing != nullptr)
		*Facing = params.Facing;
}


// Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTD_CanReachTarget_Fjordhawk_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.ReceiveConditionCheck");

	UBTD_CanReachTarget_Fjordhawk_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTD_CanReachTarget_Fjordhawk_C::ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk");

	UBTD_CanReachTarget_Fjordhawk_C_ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
