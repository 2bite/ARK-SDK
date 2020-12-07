#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsBlockedByStructure_DK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IsBlockedByStructure_DK.IsBlockedByStructure_DK_C
// 0x0201 (0x0291 - 0x0090)
class UIsBlockedByStructure_DK_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      NavigationTargetObjectKey;                                // 0x0090(0x0028) (Edit, BlueprintVisible)
	bool                                               BlockedByStructure;                                       // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BlockedStructureKey;                                      // 0x00C0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BlockadeLocKey;                                           // 0x00E8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BlockadeActor;                                            // 0x0110(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PrioritizedKey;                                           // 0x0138(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      FinishedRoutingKey;                                       // 0x0160(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0188(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      bSetMoveToKey;                                            // 0x01B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CrateObjectKey;                                           // 0x01D8(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x0200(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0210(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue;                   // 0x0218(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue;                          // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_DynamicCast_AsActor;                               // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0230(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0231(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue;              // 0x0232(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue2;             // 0x0233(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	class FString                                      CallFunc_GetDisplayName_ReturnValue;                      // 0x0238(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0248(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x0250(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AInstancedFoliageActor*                      K2Node_DynamicCast_AsInstancedFoliageActor;               // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0268(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalStructure_ReturnValue;                   // 0x0269(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x026A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x026B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	class UObject*                                     CallFunc_GetBlackboardValueAsObject_ReturnValue;          // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_GetBlackboardValueAsObject_ReturnValue2;         // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_DynamicCast_AsActor2;                              // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0288(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0289(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x028A(0x0002) MISSED OFFSET
	float                                              CallFunc_GetHorizontalDistanceTo_ReturnValue;             // 0x028C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x0290(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsBlockedByStructure_DK.IsBlockedByStructure_DK_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_IsBlockedByStructure_DK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
