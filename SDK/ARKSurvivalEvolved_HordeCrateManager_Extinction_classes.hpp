#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HordeCrateManager_Extinction_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HordeCrateManager_Extinction.HordeCrateManager_Extinction_C
// 0x0180 (0x0628 - 0x04A8)
class AHordeCrateManager_Extinction_C : public AHordeCrateManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentDifficultyIndex;                                   // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class AHordeSpawnNetwork_C*                        VarHordeNetwork;                                          // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASupplyCrateBaseBP_C*                        VarCrate;                                                 // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCrateDeploymentEnabled;                                  // 0x04C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNodeDeploymentEnabled;                                   // 0x04CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHordeTypeEnum>                        DeploymentType;                                           // 0x04CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	class ASupplyCrate_Base_Horde_C*                   CurrentCrate;                                             // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      DifficultyElementScale;                                   // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxNumOfEventsActive;                                     // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EHordeTypeEnum>>                AvailDeploymentTypes;                                     // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SpawnNetworkCooldown;                                     // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	TArray<float>                                      DifficultyWeights;                                        // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<double>                                     CrateDifficultyTime;                                      // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<double>                                     ElementDifficultyTime;                                    // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxTimeBetweenDifficulties;                               // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugConsoleOutput;                                      // 0x053C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulateEvents;                                          // 0x053D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x053E(0x0002) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0540(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue2;                 // 0x0544(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x0548(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0558(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x0560(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue2;                      // 0x0570(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_FFloor_ReturnValue;                              // 0x0580(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0584(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x0585(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0586(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0587(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ASupplyCrate_Base_Horde_C*                   CallFunc_DeployCrate_ACrate;                              // 0x0588(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0590(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0591(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0592(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x0593(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0594(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0595(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreValidNetworksForType_bIsAvailable;            // 0x0596(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0597(0x0001) MISSED OFFSET
	class FString                                      CallFunc_SelectString_ReturnValue;                        // 0x0598(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_AreValidNetworksForType_bIsAvailable2;           // 0x05A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	class FString                                      CallFunc_SelectString_ReturnValue2;                       // 0x05B0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_RandomFloatInRange_ReturnValue3;                 // 0x05C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EHordeTypeEnum>                        CallFunc_Array_Add_NewItem_RefProperty;                   // 0x05C4(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x05C5(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x05C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EHordeTypeEnum>                        CallFunc_Array_Add_NewItem2_RefProperty;                  // 0x05CC(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x05CD(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Add_ReturnValue2;                          // 0x05D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x05D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EHordeTypeEnum>                        CallFunc_Array_Find_ItemToFind_RefProperty;               // 0x05D5(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x05D6(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Find_ReturnValue;                          // 0x05D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EHordeTypeEnum>                        CallFunc_Array_Find_ItemToFind2_RefProperty;              // 0x05DC(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x05DD(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Find_ReturnValue2;                         // 0x05E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x05E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x05E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x05E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x05E7(0x0001) MISSED OFFSET
	int                                                CallFunc_Get_Difficulty_Index_ReturnDifficulty;           // 0x05E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x05EC(0x0004) MISSED OFFSET
	class AHordeSpawnNetwork_C*                        CallFunc_Find_Random_Spawn_Network_RetHordeNetwork;       // 0x05F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Find_Random_Spawn_Network_bIsStassised;          // 0x05F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x05F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanStartDeployment_bCanStart;                    // 0x05FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x05FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x05FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x05FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x05FE(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Add_NewItem3_RefProperty;                  // 0x0600(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	int                                                CallFunc_Array_Add_NewItem4_RefProperty;                  // 0x0604(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	int                                                CallFunc_Array_Add_NewItem5_RefProperty;                  // 0x0608(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	int                                                CallFunc_Array_Find_ItemToFind3_RefProperty;              // 0x060C(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	int                                                CallFunc_Array_Find_ItemToFind4_RefProperty;              // 0x0610(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	int                                                CallFunc_Array_Find_ItemToFind5_RefProperty;              // 0x0614(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceMultiForObjects_ActorsToIgnore_RefProperty;// 0x0618(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HordeCrateManager_Extinction.HordeCrateManager_Extinction_C");
		return ptr;
	}


	void ResetSpawnPriority();
	void Get_Difficulty_Index(int* ReturnDifficulty);
	void AreValidNetworksForType(TEnumAsByte<EHordeTypeEnum> HordeType, bool* bIsAvailable);
	void IsDifficultyCompatible(int TestDifficulty, int ChosenDifficulty, bool* bIsCompatible);
	void BPForceStartHorde(class AActor** SpawnNetwork, class AShooterPlayerController** PC, class UClass** ActorClass, int* DifficultyIndex);
	void GetActiveEvent(class AHordeSpawnNetwork_C* Network);
	void STATIC_EndActiveEvent(class AActor* TheCrate);
	void STATIC_CreateActiveEvent();
	void DeployCrate(TEnumAsByte<EHordeTypeEnum> HordeEventType, class ASupplyCrate_Base_Horde_C** ACrate);
	void AreValidNetworksForDifficulty(int InDiffLevel, bool* bAreValid);
	void Get_Avail_Networks_Of_Difficulty(int InDifficulty, TArray<class AHordeSpawnNetwork_C*>* NetworksPreferred, TArray<class AHordeSpawnNetwork_C*>* NetworksNotPreferred);
	void STATIC_Find_Random_Spawn_Network(class AHordeSpawnNetwork_C** RetHordeNetwork, bool* bIsStassised);
	void STATIC_GetActiveEvents(int DifficultyLevel, bool* bAnyActiveEvents, TArray<struct FHordeCrateEvent>* VarEvents);
	void STATIC_CanStartDeployment(bool* bCanStart);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CheckCrateDeployment();
	void StartCrateCheckTimer();
	void StartHordeNodeTimer();
	void ExecuteUbergraph_HordeCrateManager_Extinction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
