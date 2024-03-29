#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasVein_Base_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GasVein_Base_BP.GasVein_Base_BP_C
// 0x01C0 (0x0CC8 - 0x0B08)
class AGasVein_Base_BP_C : public AWaterPipe_Base_Straight_C
{
public:
	class UAudioComponent*                             Idle_SFX;                                                 // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PS_PoisonGas;                                             // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BuffToApply;                                              // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTimerSet;                                                // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B21(0x0003) MISSED OFFSET
	float                                              MinTimeBetweenBursts;                                     // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeBetweenBursts;                                     // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BurstTimeLength;                                          // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurstOverlapRadius;                                       // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	double                                             LastBurstTime;                                            // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinDroppedGasQuantity;                                    // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxDroppedGasQuantity;                                    // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0B48(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x0B50(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0B80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B81(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x0B84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x0B90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x0B9C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x0BA8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0BB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0BB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLoadingSaveGame_ReturnValue;                   // 0x0BBC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0BBD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0BBE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0BBF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0BC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0BC4(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue2;                       // 0x0BD0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x0C00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0C08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AGasVeinExplosionEmitter_C*                  CallFunc_FinishSpawningActor_ReturnValue;                 // 0x0C10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0C18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x0C20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0C21(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0C24(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x0C30(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0C40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0C44(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x0C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0C50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0C51(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0C60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0C61(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x0C68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0C70(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x0C7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue2;          // 0x0C88(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x0C98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue;                     // 0x0C9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0CA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0CA1(0x0003) MISSED OFFSET
	float                                              CallFunc_Conv_IntToFloat_ReturnValue2;                    // 0x0CA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue2;                 // 0x0CA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue3;                 // 0x0CAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x0CB0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_FFloor_ReturnValue;                              // 0x0CBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADroppedItem*                                CallFunc_StaticDropNewItem_ReturnValue;                   // 0x0CC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GasVein_Base_BP.GasVein_Base_BP_C");
		return ptr;
	}


	void BPUnstasis();
	void BPHandleStructureEnabled(bool* bEnabled);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DoBurst();
	void NetBurst();
	void CheckBurst();
	void ExecuteUbergraph_GasVein_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
