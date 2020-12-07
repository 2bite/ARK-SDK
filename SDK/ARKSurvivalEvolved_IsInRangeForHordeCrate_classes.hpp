#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsInRangeForHordeCrate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IsInRangeForHordeCrate.IsInRangeForHordeCrate_C
// 0x0105 (0x017D - 0x0078)
class UIsInRangeForHordeCrate_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      inVec;                                                    // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CrateObj;                                                 // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CrateWanderRadius;                                        // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      FinishedRoutingKey;                                       // 0x00F0(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetBlackboardValueAsBool_ReturnValue;            // 0x0120(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_GetBlackboardValueAsObject_ReturnValue;          // 0x0128(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0130(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_DynamicCast_AsActor;                               // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0140(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0144(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetBlackboardValueAsVector_ReturnValue;          // 0x0150(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x015C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetBlackboardValueAsFloat_ReturnValue;           // 0x0168(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x016C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x0174(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x0178(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x017C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsInRangeForHordeCrate.IsInRangeForHordeCrate_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_IsInRangeForHordeCrate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
