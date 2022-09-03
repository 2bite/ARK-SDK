// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AnimNotify_BuffEvent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotify_BuffEvent.AnimNotify_BuffEvent_C.GetNotifyName
// ()
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAnimNotify_BuffEvent_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_BuffEvent.AnimNotify_BuffEvent_C.GetNotifyName");

	UAnimNotify_BuffEvent_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotify_BuffEvent.AnimNotify_BuffEvent_C.Received_Notify
// ()
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotify_BuffEvent_C::Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_BuffEvent.AnimNotify_BuffEvent_C.Received_Notify");

	UAnimNotify_BuffEvent_C_Received_Notify_Params params;
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
