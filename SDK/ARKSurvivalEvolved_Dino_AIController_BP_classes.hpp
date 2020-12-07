#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_AIController_BP.Dino_AIController_BP_C
// 0x0069 (0x0919 - 0x08B0)
class ADino_AIController_BP_C : public APrimalDinoAIController
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      NavKey;                                                   // 0x08B8(0x0028) (Edit, BlueprintVisible)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x08E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue2;                    // 0x08E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x08F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x08F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08F9(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue3;                    // 0x08FC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAttackInterval_ReturnValue;                   // 0x0904(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAttackRotationRangeDegrees_ReturnValue;       // 0x0908(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x090C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x090D(0x0003) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue;                       // 0x0910(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RunBehaviorTree_ReturnValue;                     // 0x0918(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_AIController_BP.Dino_AIController_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Dino_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
