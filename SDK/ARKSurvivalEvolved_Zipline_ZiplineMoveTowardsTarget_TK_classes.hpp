#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_ZiplineMoveTowardsTarget_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C
// 0x00A8 (0x0120 - 0x0078)
class UZipline_ZiplineMoveTowardsTarget_TK_C : public UBTTask_BlueprintBase
{
public:
	float                                              AcceptanceRange;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      RangeKey;                                                 // 0x0080(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      LocationOverride;                                         // 0x00A8(0x0028) (Edit, BlueprintVisible)
	bool                                               UseLocationOverride;                                      // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRangeOverride;                                         // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00D2(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00D8(0x0028) (Edit, BlueprintVisible)
	double                                             LastBlockedTime;                                          // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UActorComponent*                             ZiplineComponent;                                         // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABuff_Zipline_DinoBase_C*                    Buff;                                                     // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0118(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ZiplineMotorState>                   K2Node_Select_ReturnValue;                                // 0x0119(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x011A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x011B(0x0001) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x011C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Zipline_ZiplineMoveTowardsTarget_TK.Zipline_ZiplineMoveTowardsTarget_TK_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveAbort(class AActor** OwnerActor);
	void ReceiveExecute(class AActor** OwnerActor);
	void TryToUnblock();
	void ExecuteUbergraph_Zipline_ZiplineMoveTowardsTarget_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
