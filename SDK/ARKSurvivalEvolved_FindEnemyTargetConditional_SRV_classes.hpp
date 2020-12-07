#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FindEnemyTargetConditional_SRV_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FindEnemyTargetConditional_SRV.FindEnemyTargetConditional_SRV_C
// 0x01AC (0x022C - 0x0080)
class UFindEnemyTargetConditional_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      IsPrioritizedKey;                                         // 0x0080(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CrateObjectKey;                                           // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      IsRoutingKey;                                             // 0x00F8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PrioritizedForCrateKey;                                   // 0x0120(0x0028) (Edit, BlueprintVisible)
	bool                                               CallFunc_GetBlackboardValueAsBool_ReturnValue;            // 0x0148(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x0150(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0158(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x0160(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0168(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetBlackboardValueAsBool_ReturnValue2;           // 0x0169(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x016A(0x0006) MISSED OFFSET
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue;                   // 0x0170(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0178(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x017C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue2;                  // 0x0188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0190(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0198(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0199(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x019A(0x0006) MISSED OFFSET
	TScriptInterface<class UKingKaiju_Character_Interface_C> K2Node_DynamicCast_AsKingKaiju_Character_Interface_C;     // 0x01A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x01B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_FindTarget_ReturnValue;                          // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class APrimalCharacter*>                    CallFunc_GetKaijuEnemyList_EnemyList;                     // 0x01C0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x01D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SortActorsByDistance_ReturnValue;                // 0x01D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x01E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x01F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x01F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x01F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x01FA(0x0006) MISSED OFFSET
	class UObject*                                     CallFunc_GetBlackboardValueAsObject_ReturnValue;          // 0x0200(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x0208(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_DynamicCast_AsActor;                               // 0x0210(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0218(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_GetBlackboardValueAsObject_ReturnValue2;         // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x0228(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetBlackboardValueAsBool_ReturnValue3;           // 0x0229(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x022A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x022B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FindEnemyTargetConditional_SRV.FindEnemyTargetConditional_SRV_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_FindEnemyTargetConditional_SRV(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
