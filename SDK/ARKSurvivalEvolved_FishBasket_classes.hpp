#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FishBasket_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FishBasket.FishBasket_C
// 0x0078 (0x0B60 - 0x0AE8)
class AFishBasket_C : public AStructureBaseBP_C
{
public:
	float                                              TrapRange;                                                // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	double                                             NetOrigCreationTime;                                      // 0x0AF0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              WarmupTime;                                               // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0AFC(0x0004) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x0B00(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x0B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AFishBasketTrappedEmitter_C*                 CallFunc_FinishSpawningActor_ReturnValue;                 // 0x0B38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_SphereOverlapActorsSimple_ActorsToIgnore_RefProperty;// 0x0B40(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereOverlapActorsSimple_ActorsToIgnore2_RefProperty;// 0x0B50(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FishBasket.FishBasket_C");
		return ptr;
	}


	int BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData);
	void ReceiveBeginPlay();
	void TrapFish(class APrimalDinoCharacter* TrapFish, class APlayerController* ForPC);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void NetCapturedCreature();
	void ExecuteUbergraph_FishBasket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
