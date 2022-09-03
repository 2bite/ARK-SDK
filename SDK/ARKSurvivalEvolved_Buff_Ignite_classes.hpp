#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Ignite_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Ignite.Buff_Ignite_C
// 0x0060 (0x09D8 - 0x0978)
class ABuff_Ignite_C : public ABuff_Base_C
{
public:
	float                                              CurrentIgniteValue;                                       // 0x0978(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddIgniteThrottleTime;                                    // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldCauseFire;                                          // 0x0980(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	double                                             LastAddIgniteTime;                                        // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      FireBuff;                                                 // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ExtinguishSpeed;                                          // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeleeIncToAmount;                                         // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DOTDamage;                                                // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x09AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x09AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x09AE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x09AF(0x0001) MISSED OFFSET
	float                                              K2Node_CustomEvent_Time2;                                 // 0x09B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Amount;                                // 0x09B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Time;                                  // 0x09B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ExtendBuffTime_ReturnValue;                      // 0x09BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x09BD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x09BE(0x0002) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x09C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x09C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x09C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_FloatToVector_ReturnValue;                  // 0x09CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Ignite.Buff_Ignite_C");
		return ptr;
	}


	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void MeleeIncIgnite();
	void UpdateBuffDescription();
	struct FStatusValueModifierDescription GetBuffDescription();
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	float GetBuffPostprocessIntensity();
	void BuffTickClient(float* DeltaTime);
	void Initialize();
	void BuffTickServer(float* DeltaTime);
	void ApplyOnFireDebuff();
	void AddIgnite(float amount, float Time);
	void CheckDeactivateCondition();
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void MultiExtendBuffTime(float Time);
	void MultiAddIgnite(float amount, float Time);
	void ReceiveBeginPlay();
	void ApplyOnFire();
	void ChangeIgniteVFX();
	void ExecuteUbergraph_Buff_Ignite(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
