#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_IceKaijuFindBestMeleeAttack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C
// 0x0171 (0x01E9 - 0x0078)
class UTask_IceKaijuFindBestMeleeAttack_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      BBKey_TargetQuadIndex;                                    // 0x0078(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      MyDino;                                                   // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AIceKaiju_AIController_BP_C*                 MyDinoController;                                         // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalDinoCharacter*                        MyPrimalDino;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      AttackIndex;                                              // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              GroundSmashCDTime;                                        // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AIceKaiju_Character_BP_C*                    MyIceKaiju;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      BBKey_Target;                                             // 0x00C8(0x0028) (Edit, BlueprintVisible)
	int                                                QuadIndex;                                                // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKey_CanIceBreath;                                       // 0x00F8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBKey_ShouldTurnForAttack;                                // 0x0120(0x0028) (Edit, BlueprintVisible)
	bool                                               FoundDirectionalPawAttack;                                // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0150(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AIceKaiju_Character_BP_C*                    CallFunc_CanGroundSmash_MyIceKaiju;                       // 0x0158(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanGroundSmash_ReturnValue;                      // 0x0160(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	class AIceKaiju_Character_BP_C*                    CallFunc_CanAngryAttack_MyIceKaiju;                       // 0x0168(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAngryAttack_ReturnValue;                      // 0x0170(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x0178(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetBlackboardValueAsActor_ReturnValue;           // 0x0180(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x0188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0190(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0198(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x0199(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetBlackboardValueAsBool_ReturnValue;            // 0x019A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x019B(0x0005) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue4;               // 0x01A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter2;                // 0x01A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x01B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AIceKaiju_AIController_BP_C*                 K2Node_DynamicCast_AsIceKaiju_AIController_BP_C;          // 0x01C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x01C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue;                   // 0x01D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AIceKaiju_Character_BP_C*                    K2Node_DynamicCast_AsIceKaiju_Character_BP_C;             // 0x01D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x01E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CheckIfTargetIsCloseToPaws_FoundPawAttack;       // 0x01E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x01E2(0x0002) MISSED OFFSET
	int                                                CallFunc_CheckIfTargetIsCloseToPaws_QuadIndex;            // 0x01E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CheckIfTargetIsCloseToPaws_UseIceBreath;         // 0x01E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C");
		return ptr;
	}


	void CheckIfTargetIsCloseToPaws(bool* FoundPawAttack, int* QuadIndex, bool* UseIceBreath);
	void SetTargetQuadrant();
	bool CanAngryAttack(class AIceKaiju_Character_BP_C** MyIceKaiju);
	bool CanIceBreath(class AIceKaiju_Character_BP_C** MyIceKaiju);
	bool CanGroundSmash(class AIceKaiju_Character_BP_C** MyIceKaiju);
	void STATIC_CanUseGroundSmash(bool* IsOnCooldown);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
