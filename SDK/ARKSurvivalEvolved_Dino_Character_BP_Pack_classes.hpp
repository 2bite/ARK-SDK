#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Pack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_Pack.Dino_Character_BP_Pack_C
// 0x0094 (0x231C - 0x2288)
class ADino_Character_BP_Pack_C : public ADino_Character_BP_C
{
public:
	TArray<class AActor*>                              DinoPack;                                                 // 0x2288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      ClosestPackDino;                                          // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPackWanderDistance;                                    // 0x22A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PackRadius;                                               // 0x22A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastUpdatedPackTime;                                      // 0x22A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PackSize;                                                 // 0x22B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPackLeader;                                            // 0x22B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCopycatRoar;                                             // 0x22B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsePackRoar;                                             // 0x22B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x22B7(0x0001) MISSED OFFSET
	int                                                RoarAttackIndex;                                          // 0x22B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PackOctreeTypeBitMask;                                    // 0x22BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterRoarToCausePackRoar;                             // 0x22C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdatePackDelay_PostUnstasis;                             // 0x22C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdatePackDelay_PostUnstasis_RandRange;                   // 0x22C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdatePackDelay_PostBeginPlay;                            // 0x22CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdatePackDelay_PostBeginPlay_RandRange;                  // 0x22D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x22D4(0x0004) MISSED OFFSET
	class UClass*                                      DinoPackLeaderBuffClass;                                  // 0x22D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADino_Character_BP_Pack_C*                   MyPackLeader;                                             // 0x22E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugPackDino;                                           // 0x22E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x22E9(0x0007) MISSED OFFSET
	double                                             TimePackJoiningWasPutOnCoolDown;                          // 0x22F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WanderCloseToLeader;                                      // 0x22F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x22F9(0x0003) MISSED OFFSET
	float                                              TimeToPreventJoiningAPack;                                // 0x22FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomID;                                                 // 0x2300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               dontJoinNewPackIfHasAffinity;                             // 0x2304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               dontAllowLeaderWithAffinity;                              // 0x2305(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x2306(0x0002) MISSED OFFSET
	double                                             LastTimeGatheredPack;                                     // 0x2308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                minPackSize;                                              // 0x2310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ReplicatedPackSize;                                       // 0x2314(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CallFunc_RandomInteger_ReturnValue;                       // 0x2318(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Pack.Dino_Character_BP_Pack_C");
		return ptr;
	}


	void PackMemberDied(class ADino_Character_BP_Pack_C* DeadDino);
	void BP_OnSetDeath();
	void Get_RadiusToJoinPack(bool belongsToOldPack, float* firstTimeRadius);
	void CanDinoBeAddedToPack(class APrimalDinoCharacter* NewParam, TArray<class AActor*>* oldPack, bool* canBeAdded);
	void Add_Dino_to_Pack(class AActor* ActorToAdd);
	void IsValidClassForPack(class AActor* joiningActor, bool* IsValid);
	void BPTimerServer();
	void Put_Join_Pack_On_Cooldown(float DurationOfPackPrevention);
	void Can_Join_Pack(bool* Can_Join);
	bool BPShouldForceFlee();
	void ClearPack();
	void InitPackDino(bool isBeginPlay);
	void PackRoar();
	void UpdatePack();
	void BPDoAttack(int* AttackIndex);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void IsPackLeader(bool* bIsLeader);
	void BPUnstasis();
	void GatherPack();
	void OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Dino_Character_BP_Pack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
