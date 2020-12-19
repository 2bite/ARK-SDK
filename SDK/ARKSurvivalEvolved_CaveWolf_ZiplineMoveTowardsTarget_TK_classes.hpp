#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_ZiplineMoveTowardsTarget_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C
// 0x009F (0x0117 - 0x0078)
class UCaveWolf_ZiplineMoveTowardsTarget_TK_C : public UBTTask_BlueprintBase
{
public:
	float                                              AcceptanceRange;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      RangeKey;                                                 // 0x0080(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      LocationOverride;                                         // 0x00A8(0x0028) (Edit, BlueprintVisible)
	bool                                               UseLocationOverride;                                      // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseRangeOverride;                                         // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00D2(0x0006) MISSED OFFSET
	class ABuff_Zipline_CaveWolf_C*                    ZiplineBuff;                                              // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00E0(0x0028) (Edit, BlueprintVisible)
	double                                             LastBlockedTime;                                          // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0110(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0114(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ZiplineMotorState>                   K2Node_Select_ReturnValue;                                // 0x0115(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x0116(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_ZiplineMoveTowardsTarget_TK.CaveWolf_ZiplineMoveTowardsTarget_TK_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveAbort(class AActor** OwnerActor);
	void ReceiveExecute(class AActor** OwnerActor);
	void TryToUnblock();
	void ExecuteUbergraph_CaveWolf_ZiplineMoveTowardsTarget_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
