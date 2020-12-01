#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bee_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bee_Character_BP.Bee_Character_BP_C
// 0x0030 (0x20B8 - 0x2088)
class ABee_Character_BP_C : public AInsect_Character_Base_C
{
public:
	class UDinoCharacterStatusComponent_BP_Bee_C*      DinoCharacterStatus_BP_Bee_C1;                            // 0x2088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             LivingAudio;                                              // 0x2090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToDieWithNoTarget;                                    // 0x2098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x209C(0x0004) MISSED OFFSET
	double                                             LastTimeHadValidTarget;                                   // 0x20A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFirstServerTick;                                        // 0x20A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x20A9(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x20B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bee_Character_BP.Bee_Character_BP_C");
		return ptr;
	}


	bool BPCanCryo(class AShooterPlayerController** ForPC);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void BPTimerServer();
	void UpdateTimeSinceHadAValidTarget(bool* KilledSelf);
	void BPUnstasis();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Bee_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif