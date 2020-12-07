#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_KingKaiju_BasicMelee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_KingKaiju_BasicMelee.DinoAttackState_KingKaiju_BasicMelee_C
// 0x00A0 (0x0130 - 0x0090)
class UDinoAttackState_KingKaiju_BasicMelee_C : public UPrimalAIStateDinoMeleeState
{
public:
	class UPrimalAIState*                              K2Node_Event_InParentState;                               // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKingKaiju_AIController_BP_C*                K2Node_DynamicCast_AsKingKaiju_AIController_BP_C;         // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x00A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_GetCurrentAttackIndex_ReturnValue;               // 0x00B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	class AKingKaiju_AIController_BP_C*                K2Node_DynamicCast_AsKingKaiju_AIController_BP_C2;        // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x00C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	int                                                CallFunc_Conv_ByteToInt_ReturnValue;                      // 0x00CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue;                   // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x00D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class AKingKaiju_Character_BP_C*                   K2Node_DynamicCast_AsKingKaiju_Character_BP_C;            // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x00E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x0100(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x0110(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKingKaiju_AIController_BP_C*                K2Node_DynamicCast_AsKingKaiju_AIController_BP_C3;        // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0120(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue;                       // 0x0128(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_KingKaiju_BasicMelee.DinoAttackState_KingKaiju_BasicMelee_C");
		return ptr;
	}


	void OnEndEvent();
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void ExecuteUbergraph_DinoAttackState_KingKaiju_BasicMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
