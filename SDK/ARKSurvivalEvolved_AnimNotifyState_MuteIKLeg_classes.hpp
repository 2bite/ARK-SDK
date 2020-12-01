#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AnimNotifyState_MuteIKLeg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotifyState_MuteIKLeg.AnimNotifyState_MuteIKLeg_C
// 0x0004 (0x0034 - 0x0030)
class UAnimNotifyState_MuteIKLeg_C : public UAnimNotifyState
{
public:
	int                                                Leg;                                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotifyState_MuteIKLeg.AnimNotifyState_MuteIKLeg_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
