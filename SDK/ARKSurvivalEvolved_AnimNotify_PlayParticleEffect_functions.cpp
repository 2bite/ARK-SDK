// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AnimNotify_PlayParticleEffect_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.GetNotifyName
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAnimNotify_PlayParticleEffect_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.GetNotifyName");

	UAnimNotify_PlayParticleEffect_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.Received_Notify
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotify_PlayParticleEffect_C::Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.Received_Notify");

	UAnimNotify_PlayParticleEffect_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.ExecuteUbergraph_AnimNotify_PlayParticleEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_PlayParticleEffect_C::ExecuteUbergraph_AnimNotify_PlayParticleEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_PlayParticleEffect.AnimNotify_PlayParticleEffect_C.ExecuteUbergraph_AnimNotify_PlayParticleEffect");

	UAnimNotify_PlayParticleEffect_C_ExecuteUbergraph_AnimNotify_PlayParticleEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
