// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AnimNotifyState_MuteIKLeg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotifyState_MuteIKLeg.AnimNotifyState_MuteIKLeg_C.Received_NotifyEnd
// ()
// Parameters:
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotifyState_MuteIKLeg_C::Received_NotifyEnd(class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyState_MuteIKLeg.AnimNotifyState_MuteIKLeg_C.Received_NotifyEnd");

	UAnimNotifyState_MuteIKLeg_C_Received_NotifyEnd_Params params;
	params.meshComp = meshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotifyState_MuteIKLeg.AnimNotifyState_MuteIKLeg_C.Received_NotifyBegin
// ()
// Parameters:
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotifyState_MuteIKLeg_C::Received_NotifyBegin(class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, float* TotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyState_MuteIKLeg.AnimNotifyState_MuteIKLeg_C.Received_NotifyBegin");

	UAnimNotifyState_MuteIKLeg_C_Received_NotifyBegin_Params params;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
