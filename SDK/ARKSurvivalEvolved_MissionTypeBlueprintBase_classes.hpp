#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionTypeBlueprintBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionTypeBlueprintBase.MissionTypeBlueprintBase_C
// 0x00A3 (0x0B53 - 0x0AB0)
class AMissionTypeBlueprintBase_C : public AMissionType
{
public:
	TArray<TEnumAsByte<EMissionMetaTags>>              MissionMetaTags;                                          // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EMissionMetaTags>                      RequireMetaTagMissionsInactive;                           // 0x0AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AC1(0x0003) MISSED OFFSET
	struct FName                                       PhaseNameForIntroMusic;                                   // 0x0AC4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0ACC(0x0004) MISSED OFFSET
	class USoundBase*                                  IntroMusic;                                               // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PhaseNameToStartDefaultMissionMusic;                      // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DefaultMissionMusic;                                      // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FMissionAudioData>                   MissionPhaseMusic;                                        // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLeaderboardRow>                     CallFunc_GetMissionLeaderboardRows_OutRows;               // 0x0AF8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_GetMissionLeaderboardRows_ReturnValue;           // 0x0B08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x0B09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0B0A(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0B0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0B10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B15(0x0003) MISSED OFFSET
	struct FName                                       K2Node_Event_OldPhase;                                    // 0x0B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_NewPhase;                                    // 0x0B20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x0B28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue2;                // 0x0B29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue3;                // 0x0B2A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode;                // 0x0B2B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0B2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0B2D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue4;                // 0x0B2E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0B2F(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0B30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	struct FMissionAudioData                           CallFunc_Array_Get_Item;                                  // 0x0B38(0x0018) (Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0B50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0B51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue5;                // 0x0B52(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionTypeBlueprintBase.MissionTypeBlueprintBase_C");
		return ptr;
	}


	void STATIC_PlaySoundForPlayersOnMission(class USoundBase* Sound);
	bool STATIC_BPStaticIsPlayerEligibleForMission(class APlayerController** Controller, class AShooterCharacter** PlayerPawn, class APrimalBuff_MissionData** PlayerMissionData, class FString* OutReason);
	void BPGetMetaTagsAsInts(TArray<int>* OutTagIds);
	void UserConstructionScript();
	void OnMissionPhaseStarted(struct FName* OldPhase, struct FName* NewPhase);
	void BPOnMissionDeactivated();
	void ExecuteUbergraph_MissionTypeBlueprintBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
