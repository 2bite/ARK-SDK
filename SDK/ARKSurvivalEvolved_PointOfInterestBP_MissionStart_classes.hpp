#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PointOfInterestBP_MissionStart_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C
// 0x0028 (0x08D8 - 0x08B0)
class APointOfInterestBP_MissionStart_C : public APointOfInterest_Base_BP_C
{
public:
	class AMissionDispatcher*                          MyMissionDispatcher;                                      // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class FString                                      ActivateMissionMultiUseString;                            // 0x08B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AMissionType*                                CurrentMission;                                           // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           MissionStartedByPlayer;                                   // 0x08D0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PointOfInterestBP_MissionStart.PointOfInterestBP_MissionStart_C");
		return ptr;
	}


	void StartMyMission(class APlayerController* WithPC);
	bool CanBeViewed(class AActor** ByActor);
	void STATIC_CanPlayerStartMyMission(class APlayerController* PC, bool* Result);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void UserConstructionScript();
	void ExecuteUbergraph_PointOfInterestBP_MissionStart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
