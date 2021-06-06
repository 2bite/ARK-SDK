#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsWithinAttackRangeAndGetBestAttack_SRV_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C
// 0x00F0 (0x0170 - 0x0080)
class UIsWithinAttackRangeAndGetBestAttack_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      IsWithinAttackRangeKey;                                   // 0x0080(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Last_Check_Attack_Range_Closest_Point_Key;                // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Use_Altenate_Move_Point;                                  // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BestAttackIndexKey;                                       // 0x00F8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      AttackIntervalKey;                                        // 0x0120(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x0148(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0150(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x0158(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0160(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	float                                              CallFunc_GetAttackInterval_ReturnValue;                   // 0x0164(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged;// 0x0168(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue;// 0x0169(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_GetCurrentAttackIndex_ReturnValue;               // 0x016A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ByteByte_ReturnValue;                   // 0x016B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Conv_ByteToInt_ReturnValue;                      // 0x016C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C");
		return ptr;
	}


	void UpdateBlackboardKeys(class APrimalDinoAIController* OwnerController);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
