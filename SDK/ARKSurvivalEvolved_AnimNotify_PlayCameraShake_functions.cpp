// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AnimNotify_PlayCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotify_PlayCameraShake.AnimNotify_PlayCameraShake_C.GetNotifyName
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAnimNotify_PlayCameraShake_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_PlayCameraShake.AnimNotify_PlayCameraShake_C.GetNotifyName");

	UAnimNotify_PlayCameraShake_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotify_PlayCameraShake.AnimNotify_PlayCameraShake_C.Received_Notify
// ()
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotify_PlayCameraShake_C::Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_PlayCameraShake.AnimNotify_PlayCameraShake_C.Received_Notify");

	UAnimNotify_PlayCameraShake_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
