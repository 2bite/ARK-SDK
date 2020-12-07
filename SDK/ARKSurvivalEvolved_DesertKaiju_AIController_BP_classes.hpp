#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesertKaiju_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DesertKaiju_AIController_BP.DesertKaiju_AIController_BP_C
// 0x008B (0x09A4 - 0x0919)
class ADesertKaiju_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0919(0x0007) MISSED OFFSET
	class ADesertKaiju_Character_BP_C*                 MyDesertKaiju;                                            // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FindTargetRadius;                                         // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              AllTargets;                                               // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsInAggroList;                                            // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0941(0x0003) MISSED OFFSET
	struct FVector                                     TargetScanCenter;                                         // 0x0944(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeHasTarget;                                        // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              PlayerActors;                                             // 0x0958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x0968(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0978(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0979(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue2;                    // 0x097C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAttackInterval_ReturnValue;                   // 0x0984(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAttackRotationRangeDegrees_ReturnValue;       // 0x0988(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x098C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x098D(0x0003) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue;                       // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RunBehaviorTree_ReturnValue;                     // 0x0998(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0999(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue3;                    // 0x099C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DesertKaiju_AIController_BP.DesertKaiju_AIController_BP_C");
		return ptr;
	}


	void BPSetupFindTarget();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DesertKaiju_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
