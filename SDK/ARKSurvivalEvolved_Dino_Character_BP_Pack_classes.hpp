#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0090 (0x2198 - 0x2108)
class ADino_Character_BP_Pack_C : public ADino_Character_BP_C
{
public:
	TArray<class AActor*>                              DinoPack;                                                 // 0x2108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      ClosestPackDino;                                          // 0x2118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPackWanderDistance;                                    // 0x2120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PackRadius;                                               // 0x2124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastUpdatedPackTime;                                      // 0x2128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PackSize;                                                 // 0x2130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPackLeader;                                            // 0x2134(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCopycatRoar;                                             // 0x2135(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsePackRoar;                                             // 0x2136(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x2137(0x0001) MISSED OFFSET
	int                                                RoarAttackIndex;                                          // 0x2138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PackOctreeTypeBitMask;                                    // 0x213C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterRoarToCausePackRoar;                             // 0x2140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdatePackDelay_PostUnstasis;                             // 0x2144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdatePackDelay_PostUnstasis_RandRange;                   // 0x2148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdatePackDelay_PostBeginPlay;                            // 0x214C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdatePackDelay_PostBeginPlay_RandRange;                  // 0x2150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2154(0x0004) MISSED OFFSET
	class UClass*                                      DinoPackLeaderBuffClass;                                  // 0x2158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADino_Character_BP_Pack_C*                   MyPackLeader;                                             // 0x2160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugPackDino;                                           // 0x2168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2169(0x0007) MISSED OFFSET
	double                                             TimePackJoiningWasPutOnCoolDown;                          // 0x2170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WanderCloseToLeader;                                      // 0x2178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2179(0x0003) MISSED OFFSET
	float                                              TimeToPreventJoiningAPack;                                // 0x217C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomID;                                                 // 0x2180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               dontJoinNewPackIfHasAffinity;                             // 0x2184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               dontAllowLeaderWithAffinity;                              // 0x2185(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x2186(0x0002) MISSED OFFSET
	double                                             LastTimeGatheredPack;                                     // 0x2188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                minPackSize;                                              // 0x2190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CallFunc_RandomInteger_ReturnValue;                       // 0x2194(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Pack.Dino_Character_BP_Pack_C");
		return ptr;
	}


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
