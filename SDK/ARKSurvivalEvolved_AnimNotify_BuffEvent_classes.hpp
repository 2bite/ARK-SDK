#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AnimNotify_BuffEvent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_BuffEvent.AnimNotify_BuffEvent_C
// 0x0018 (0x0050 - 0x0038)
class UAnimNotify_BuffEvent_C : public UAnimNotify
{
public:
	struct FName                                       BuffAnimEventName;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      BuffAnimEventStringData;                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_BuffEvent.AnimNotify_BuffEvent_C");
		return ptr;
	}


	class FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
