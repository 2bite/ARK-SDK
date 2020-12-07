#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KingKaiju_AIController_BP.KingKaiju_AIController_BP_C
// 0x00FF (0x0A18 - 0x0919)
class AKingKaiju_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0919(0x0007) MISSED OFFSET
	TArray<class APrimalCharacter*>                    AllTargets;                                               // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              TargetScanRadius;                                         // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	double                                             LastTimeSwatAttack;                                       // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cooldown_SwatAttack;                                      // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0944(0x0004) MISSED OFFSET
	TArray<class APrimalCharacter*>                    FlyerSwatTargets;                                         // 0x0948(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              FlyerSwatDistance;                                        // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	TArray<class APrimalCharacter*>                    FrontTargets;                                             // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APrimalCharacter*>                    BackTargets;                                              // 0x0970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              Cooldown_TailAttack;                                      // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0984(0x0004) MISSED OFFSET
	double                                             LastTimeTailAttack;                                       // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FoundKaijuNearby;                                         // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0991(0x0007) MISSED OFFSET
	class APrimalCharacter*                            DesertKaijuChar;                                          // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            ForestKaijuChar;                                          // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            IceKaijuChar;                                             // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Cooldown_Fireball;                                        // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	double                                             LastTimeFireball;                                         // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalCharacter*>                    KaijuTargets;                                             // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              Cooldown_ChargeSwipe;                                     // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	double                                             LastTimeChargeSwipe;                                      // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cooldown_SummonMeteors;                                   // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	double                                             LastTimeSummonMeteors;                                    // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            MegaMekChar;                                              // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalCharacter*>                    FlyerTargets;                                             // 0x09F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APrimalCharacter*>                    PlayerTargets;                                            // 0x0A08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KingKaiju_AIController_BP.KingKaiju_AIController_BP_C");
		return ptr;
	}


	void AnyKaijuIsInFrontNearby(class APrimalDinoCharacter* Dino, bool* Return);
	void ShouldAttackCharacter(class APrimalCharacter* Character, bool* Result);
	void BPSetupFindTarget();
	void UserConstructionScript();
	void ExecuteUbergraph_KingKaiju_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
