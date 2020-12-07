#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C
// 0x0175 (0x0225 - 0x00B0)
class UDinoAttackState_Spindles_MinigunBase_C : public UDinoAttackState_Spindles_Base_C
{
public:
	bool                                               IsMinigunFiring;                                          // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              MinigunRange;                                             // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinigunFireRadiusMax;                                     // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinigunRandomCircleOffsetAngleDeg;                        // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinigunRandomOffsetDeg;                                   // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinigunFireRadiusMin;                                     // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinigunImpulseCalculated;                                 // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinigunImpulse;                                           // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIMinigunDurationBase;                                    // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	double                                             AIMinigunStartTimeSeconds;                                // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIMinigunDurationCurrent;                                 // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 AIMinigunDurationIncreasePerLevel;                        // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageBase;                                               // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 MinigunDistanceToImpulseScalar;                           // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinigunImpulseFlying;                                     // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class UAnimMontage*                                LoopAnim;                                                 // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaDrainTargetFlyer;                                  // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageBaseFlyer;                                          // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TrailFX;                                                  // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageSum;                                                // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrintDPSToLog;                                            // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	double                                             LastTimeDidDamage;                                        // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeFiredSpine;                                       // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable;                                        // 0x013C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0140(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0144(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FText                                       CallFunc_Conv_FloatToText_ReturnValue;                    // 0x0148(0x0028) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x0170(0x0050) (Transient, DuplicateTransient)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x01C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x01C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x01D8(0x0028) (Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue;                   // 0x0200(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0210(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_Network_ReturnValue;                   // 0x0218(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x021C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_FFloor_ReturnValue;                              // 0x0220(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x0224(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C");
		return ptr;
	}


	void IsDebugMode(bool* ret);
	void GetDamageForSpine(class APrimalCharacter* Target, float* Damage);
	void STATIC_FireSpine();
	void Get_Spine_Start_and_End_Position(struct FVector* Start, struct FVector* End, struct FVector* VFXStart, struct FVector* VFXEnd);
	void GetAttackIndex(int* AttackIndex);
	bool BPShouldEndAttack();
	bool BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void OnEndEvent();
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void OnTickEvent(float* DeltaSeconds);
	void PrintDPS();
	void ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
