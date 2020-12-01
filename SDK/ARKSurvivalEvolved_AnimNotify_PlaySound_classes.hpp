#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AnimNotify_PlaySound_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_PlaySound.AnimNotify_PlaySound_C
// 0x0029 (0x0061 - 0x0038)
class UAnimNotify_PlaySound_C : public UAnimNotify
{
public:
	float                                              VolumeMultiplier;                                         // 0x0038(0x0004) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // 0x003C(0x0004) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      AttachName;                                               // 0x0040(0x0010) (Edit, ConstParm, BlueprintVisible, ZeroConstructor)
	class USoundBase*                                  Sound;                                                    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentChanceToPlay;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPawnIgnoreInFPV;                                         // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPawnIgnoreInTPV;                                         // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreForLocallyControlled;                              // 0x005E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoFollow;                                                // 0x005F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreIfMeshHidden;                                      // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_PlaySound.AnimNotify_PlaySound_C");
		return ptr;
	}


	class FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
