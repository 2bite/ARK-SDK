// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOneShotRifleTranq_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.UserConstructionScript
// ()

void AWeapOneShotRifleTranq_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.UserConstructionScript");

	AWeapOneShotRifleTranq_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.ReceiveBeginPlay
// ()

void AWeapOneShotRifleTranq_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.ReceiveBeginPlay");

	AWeapOneShotRifleTranq_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.BPAnimNotifyCustomState_Begin
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState**       AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapOneShotRifleTranq_C::BPAnimNotifyCustomState_Begin(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration, class UAnimNotifyState** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.BPAnimNotifyCustomState_Begin");

	AWeapOneShotRifleTranq_C_BPAnimNotifyCustomState_Begin_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.BPAnimNotifyCustomState_End
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState**       AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapOneShotRifleTranq_C::BPAnimNotifyCustomState_End(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotifyState** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.BPAnimNotifyCustomState_End");

	AWeapOneShotRifleTranq_C_BPAnimNotifyCustomState_End_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.ExecuteUbergraph_WeapOneShotRifleTranq
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapOneShotRifleTranq_C::ExecuteUbergraph_WeapOneShotRifleTranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.ExecuteUbergraph_WeapOneShotRifleTranq");

	AWeapOneShotRifleTranq_C_ExecuteUbergraph_WeapOneShotRifleTranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
