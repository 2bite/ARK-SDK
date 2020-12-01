// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gorilla_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.BPGetHealthBarColor
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AGorilla_Character_BP_C::BPGetHealthBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorilla_Character_BP.Gorilla_Character_BP_C.BPGetHealthBarColor");

	AGorilla_Character_BP_C_BPGetHealthBarColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gorilla_Character_BP.Gorilla_Character_BP_C.BPSentKilledNotification
// ()
// Parameters:
// class AShooterPlayerController** ToPC                           (Parm, ZeroConstructor, IsPlainOldData)

void AGorilla_Character_BP_C::BPSentKilledNotification(class AShooterPlayerController** ToPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorilla_Character_BP.Gorilla_Character_BP_C.BPSentKilledNotification");

	AGorilla_Character_BP_C_BPSentKilledNotification_Params params;
	params.ToPC = ToPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorilla_Character_BP.Gorilla_Character_BP_C.UserConstructionScript
// ()

void AGorilla_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorilla_Character_BP.Gorilla_Character_BP_C.UserConstructionScript");

	AGorilla_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorilla_Character_BP.Gorilla_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGorilla_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorilla_Character_BP.Gorilla_Character_BP_C.ReceiveTick");

	AGorilla_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorilla_Character_BP.Gorilla_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGorilla_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorilla_Character_BP.Gorilla_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AGorilla_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gorilla_Character_BP.Gorilla_Character_BP_C.ExecuteUbergraph_Gorilla_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGorilla_Character_BP_C::ExecuteUbergraph_Gorilla_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gorilla_Character_BP.Gorilla_Character_BP_C.ExecuteUbergraph_Gorilla_Character_BP");

	AGorilla_Character_BP_C_ExecuteUbergraph_Gorilla_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
