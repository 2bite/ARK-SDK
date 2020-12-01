#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Jugbug_Character_BaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C
// 0x0048 (0x20D0 - 0x2088)
class AJugbug_Character_BaseBP_C : public AInsect_Character_Base_C
{
public:
	class UDinoCharacterStatusComponent_BP_JugBug_C*   DinoCharacterStatus_BP_JugBug_C1;                         // 0x2088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             LivingAudio;                                              // 0x2090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResourceAmount;                                           // 0x2098(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<EJugbugType>                           JugbugType;                                               // 0x209C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x209D(0x0003) MISSED OFFSET
	float                                              MaxResourceAmount;                                        // 0x20A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResourceAmountFillTime;                                   // 0x20A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x20A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxItemsToGive;                                           // 0x20AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PrimalItemToGive;                                         // 0x20B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastUpdateTime;                                           // 0x20B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxJugbugWaterGiveAmount;                                 // 0x20C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x20C4(0x0004) MISSED OFFSET
	double                                             LastGiveResourcesTime;                                    // 0x20C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Jugbug_Character_BaseBP.Jugbug_Character_BaseBP_C");
		return ptr;
	}


	void BPTimerNonDedicated();
	void BPTimerServer();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void AddResource(float amount, float* NewResourceAmount, float* AddedResourceAmount);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void RefreshResourceAmount();
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void UserConstructionScript();
	void ExecuteUbergraph_Jugbug_Character_BaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
