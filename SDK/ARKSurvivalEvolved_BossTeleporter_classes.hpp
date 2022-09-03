#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossTeleporter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BossTeleporter.BossTeleporter_C
// 0x00F0 (0x0A68 - 0x0978)
class ABossTeleporter_C : public APrimalBuff
{
public:
	class UAudioComponent*                             BeamSound;                                                // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BossArenaClass;                                           // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTeleportDragWeight;                                    // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxDinoTeleports;                                         // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportRadius;                                           // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	class UClass*                                      OverrideBossClass;                                        // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinimumPlayerLevelToTeleport;                             // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayerTeleports;                                       // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              PreventTeleportingDinoClasses;                            // 0x09A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       TeleportText;                                             // 0x09B8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SP_TeleportText;                                          // 0x09E0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AllowFlyers;                                              // 0x0A08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0A09(0x0007) MISSED OFFSET
	TArray<class UClass*>                              ForceAllowTeleportingDinoClasses;                         // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PreventDinosWithSaddleStructures;                         // 0x0A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A21(0x0003) MISSED OFFSET
	struct FVector                                     BackupTPLocation;                                         // 0x0A24(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BackupTPRotation;                                         // 0x0A30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BackupLevelToCheckLoaded;                                 // 0x0A3C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNotActuallyBossTeleporter;                              // 0x0A44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0A45(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0A46(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0A48(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0A54(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0A55(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x0A56(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0A57(0x0001) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereOverlapActorsSimple_ActorsToIgnore_RefProperty;// 0x0A58(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BossTeleporter.BossTeleporter_C");
		return ptr;
	}


	void ManageArenaDisableBuffsForCharacter(class APrimalCharacter* forCharacter);
	void BackupCallArenaDidTeleportOnLevelLoaded();
	void Do_TeleportSound();
	void STATIC_BuffTickClient(float* DeltaTime);
	void DoTeleport();
	void UserConstructionScript();
	void NetDoTeleport();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BossTeleporter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
