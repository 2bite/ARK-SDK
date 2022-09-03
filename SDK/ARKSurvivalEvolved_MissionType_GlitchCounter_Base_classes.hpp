#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionType_GlitchCounter_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C
// 0x001D (0x0B70 - 0x0B53)
class AMissionType_GlitchCounter_Base_C : public AMissionTypeBlueprintBase_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0B53(0x0005) MISSED OFFSET
	TArray<struct FName>                               GlitchTags;                                               // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       CompleteGlitchesKey;                                      // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C");
		return ptr;
	}


	void OnUnlockedExplorerNote();
	void GetCompletedGlitchCount(class AShooterCharacter* Character, int* CountCompleted);
	void StaticOnReplicatedMissionDataUpdated(class APrimalBuff_MissionData** missionData);
	void StaticOnMissionDataInitialized(class APrimalBuff_MissionData** missionData);
	class FString GetMissionDisplayName(class APlayerController** ShootCont);
	void GetNumGlitchesCompleted(class AShooterCharacter* ShooterCharacter, int* Ret);
	int GetIntFromMissionType(struct FName* Tag, class AShooterCharacter** PlayerPawn);
	bool IsMissionComplete(class AShooterCharacter** forCharacter, class AShooterPlayerController** ForController);
	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_GlitchCounter_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
