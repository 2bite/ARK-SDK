// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOneShotRifleRefinedTranq_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.UserConstructionScript
// ()

void AWeapOneShotRifleRefinedTranq_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.UserConstructionScript");

	AWeapOneShotRifleRefinedTranq_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.ReceiveBeginPlay
// ()

void AWeapOneShotRifleRefinedTranq_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.ReceiveBeginPlay");

	AWeapOneShotRifleRefinedTranq_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.BPAnimNotifyCustomState_Begin
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState**       AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapOneShotRifleRefinedTranq_C::BPAnimNotifyCustomState_Begin(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration, class UAnimNotifyState** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.BPAnimNotifyCustomState_Begin");

	AWeapOneShotRifleRefinedTranq_C_BPAnimNotifyCustomState_Begin_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.BPAnimNotifyCustomState_End
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState**       AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapOneShotRifleRefinedTranq_C::BPAnimNotifyCustomState_End(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotifyState** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.BPAnimNotifyCustomState_End");

	AWeapOneShotRifleRefinedTranq_C_BPAnimNotifyCustomState_End_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.ExecuteUbergraph_WeapOneShotRifleRefinedTranq
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapOneShotRifleRefinedTranq_C::ExecuteUbergraph_WeapOneShotRifleRefinedTranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.ExecuteUbergraph_WeapOneShotRifleRefinedTranq");

	AWeapOneShotRifleRefinedTranq_C_ExecuteUbergraph_WeapOneShotRifleRefinedTranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
