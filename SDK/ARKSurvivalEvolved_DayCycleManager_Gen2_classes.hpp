#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DayCycleManager_Gen2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DayCycleManager_Gen2.DayCycleManager_Gen2_C
// 0x02A7 (0x0850 - 0x05A9)
class ADayCycleManager_Gen2_C : public ADayCycleManagerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	TArray<struct FVector>                             RockwellIntensityVectors;                                 // 0x05B0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                               RockwellSnowstormActive;                                  // 0x05C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	TArray<struct FVector>                             EdenIntensityVectors;                                     // 0x05C8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                               EdenStormActive;                                          // 0x05D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05D9(0x0007) MISSED OFFSET
	TArray<class UStaticMesh*>                         DroppedItemMeshesMap;                                     // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UPrimalInventoryComponent*>           PrimalInventories;                                        // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             DroppedItemScalesMap;                                     // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<double>                                     EdenStormTime;                                            // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<double>                                     RockwellStormTime;                                        // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bInCave;                                                  // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnderwater;                                              // 0x0631(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0632(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    UpdateAreaBuffPlayerStatus;                               // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              EdenBaseStormRadius;                                      // 0x0648(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RockwellBaseStormRadius;                                  // 0x064C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AExponentialHeightFog*                       EdenHeightFog;                                            // 0x0650(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        EdenInfectedStorms;                                       // 0x0658(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsTrailerMode;                                            // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    UpdateSkyboxIndex;                                        // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                CurrentSkyboxIndex;                                       // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	TArray<float>                                      SkyboxIndexWeights;                                       // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Skybox_Rotation;                                          // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrailerShipRotation;                                      // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            TempExec;                                                 // 0x06A0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               AlternateSublevels;                                       // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSpaceHazardData>                    Alternate_Geo_Levels;                                     // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              LevelSwapDelay;                                           // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ClientInitialized;                                        // 0x0704(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0705(0x0003) MISSED OFFSET
	class AExponentialHeightFog*                       RockwellHeightFog;                                        // 0x0708(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnlyLoadSublevelsWhilePlayerInBiome;                      // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	TArray<class ULevelStreamingKismet*>               LoadedLevels;                                             // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     SpaceLightVector;                                         // 0x0728(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	class AMatineeActor*                               SpaceWarpMatinee;                                         // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ShipRoot_C*                              ShipRoot;                                                 // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                NextSkybox;                                               // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x074C(0x0004) MISSED OFFSET
	class ULevelStreamingKismet*                       WarpBackdropLevel;                                        // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WarpBackdropLevelName;                                    // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstTimeSetupCompleted;                                  // 0x0760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWarping;                                                // 0x0761(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               DebugWarpState;                                           // 0x0762(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x5];                                       // 0x0763(0x0005) MISSED OFFSET
	double                                             WarmupCompleteTime;                                       // 0x0768(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             CooldownCompleteTime;                                     // 0x0770(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WarpState;                                                // 0x0778(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x077C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         WarpTrail;                                                // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SkipWarpCleanupBossLevelName;                             // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0798(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x0799(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue3;                  // 0x079A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue4;                  // 0x079B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x079C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x07A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item;                                  // 0x07A4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x07AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	class ULevelStreaming*                             CallFunc_GetStreamingLevel_ReturnValue;                   // 0x07B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLevelLoaded_ReturnValue;                       // 0x07B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x07B9(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x07BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsStandalone_ReturnValue;                        // 0x07C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLowMemPlatform_ReturnValue;                    // 0x07C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x07C2(0x0002) MISSED OFFSET
	int                                                K2Node_CustomEvent_Index3;                                // 0x07C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_Index2;                                // 0x07C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x07CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x07CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x07CE(0x0002) MISSED OFFSET
	int                                                K2Node_CustomEvent_Index;                                 // 0x07D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x07D4(0x0004) MISSED OFFSET
	class ULevelStreaming*                             CallFunc_GetStreamingLevel_ReturnValue2;                  // 0x07D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLevelLoaded_ReturnValue2;                      // 0x07E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x07E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x07E2(0x0002) MISSED OFFSET
	int                                                CallFunc_RandomizeSkybox_NewIndex;                        // 0x07E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x07E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x07E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x07EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x07EB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_GetMatineeLengthsAndPlayRates_WarmUp;            // 0x07EC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_GetMatineeLengthsAndPlayRates_Loop;              // 0x07F4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_GetMatineeLengthsAndPlayRates_Cooldown;          // 0x07FC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x0804(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x0808(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode3;               // 0x080C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x080D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x080E(0x0002) MISSED OFFSET
	struct FVector2D                                   CallFunc_GetMatineeLengthsAndPlayRates_WarmUp2;           // 0x0810(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_GetMatineeLengthsAndPlayRates_Loop2;             // 0x0818(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_GetMatineeLengthsAndPlayRates_Cooldown2;         // 0x0820(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X2;                                // 0x0828(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y2;                                // 0x082C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode4;               // 0x0830(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x0831(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0832(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue5;                  // 0x0833(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0834(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetModeBP>                            CallFunc_SwitchNetworkMode_OutNetworkMode;                // 0x0835(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x0836(0x0002) MISSED OFFSET
	class ULevelStreaming*                             CallFunc_GetStreamingLevel_ReturnValue3;                  // 0x0838(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0x0840(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLevelLoaded_ReturnValue3;                      // 0x0841(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x6];                                       // 0x0842(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x0848(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DayCycleManager_Gen2.DayCycleManager_Gen2_C");
		return ptr;
	}


	bool BPAllowSpawningCrate(class UClass** CrateType);
	void SetupBackdropWarpMesh();
	void OnRep_WarpState();
	void DebugPrintWarpState(const class FString& WarpState);
	void SaveSkyboxInfo();
	void PlayWarpMatinee(int index, float TimeLeft);
	void LoadWarpBackdrop(bool Load);
	void LoadAsteroids(int index);
	void UnloadAsteroids();
	void GetShipRootFromBackdropLevel();
	void UpdateSublevels();
	void ShouldLoadSublevels(bool* NewParam);
	void ClearSpaceCrates();
	void RandomizeSkybox(int* newIndex);
	void SetupSkyboxTables();
	void BPOnDCMCheat(struct FName* CheatName, float* Value);
	void ClientInitializeHazards();
	void STATIC_SetupSpaceHazards();
	void GetRockwellStormLocations(TArray<struct FVector>* Locations);
	void GetEdenStormLocations(TArray<struct FVector>* Locations);
	void CompareWeatherLocation(const struct FVector& StormLocaiton, const struct FVector& LocationToCompare, float StormBaseRadius, bool* InStormRadius);
	void IsLocationInWeatherEvent(bool Location);
	bool IsRainingAtLocation(struct FVector* Location);
	void Earth_Quake_Drop_Item_at_Location(const struct FVector& AtLoc, int BiomeArea, const struct FRotator& AtRot);
	void ManageStormVectors(float ChanceToAddStorm, int MaxNumStorms, float BiomeXMin, float BiomeXMax, float BiomeYMin, float BiomeYMax, float StormRateOfTravel, float StormLifetime, TArray<struct FVector>* BiomeVectorArray, TArray<double>* StormTimeArray, bool* BiomeHasActiveStorm);
	void UserConstructionScript();
	void UpdateAreaBuff();
	void ReceiveBeginPlay();
	void InitializeSpaceHazards();
	void EnsureSublevelsAreLoaded();
	void TriggerWarp(int index);
	void EndWarp(int index);
	void DebugEndWarp();
	void NetEndWarp(int index);
	void UpdateSkybox();
	void CheckForShipRoot();
	void ServerWarpWarmUpComplete();
	void ServerWarpCooldownComplete();
	void NetWarpLoopStarted();
	void RecieveMatineeUpdated();
	void ExecuteUbergraph_DayCycleManager_Gen2(int EntryPoint);
	void UpdateSkyboxIndex__DelegateSignature(int CurrentIndex);
	void UpdateAreaBuffPlayerStatus__DelegateSignature(bool IsInCave, bool IsUnderwater);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
