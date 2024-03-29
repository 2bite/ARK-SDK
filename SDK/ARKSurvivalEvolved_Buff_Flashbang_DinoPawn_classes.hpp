#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Flashbang_DinoPawn_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C
// 0x0059 (0x09D1 - 0x0978)
class ABuff_Flashbang_DinoPawn_C : public ABuff_Base_C
{
public:
	float                                              MaxDurationOfStun;                                        // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDurationOfStun;                                        // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Buff_CharacterStunClass;                                  // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalDinoCharacter*                        DinoCharacter;                                            // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDragWeight;                                            // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDragWeight;                                            // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuffCooldown;                                             // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmountofChargeToAdd;                                      // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStun;                                                    // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bValidDotProduct;                                         // 0x09A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x09A2(0x0006) MISSED OFFSET
	class AShooterCharacter*                           ShooterCharacter;                                         // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x09B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x09B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasBuff_ReturnValue;                             // 0x09BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09BD(0x0003) MISSED OFFSET
	class AController*                                 CallFunc_GetCharacterController_ReturnValue;              // 0x09C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x09C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x09D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Flashbang_DinoPawn.Buff_Flashbang_DinoPawn_C");
		return ptr;
	}


	void IsDotProductValid();
	void BPPreSetupForInstigator(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void PlayStartledAnim();
	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void UserConstructionScript();
	void BPActivated(class AActor** ForInstigator);
	void ExecuteUbergraph_Buff_Flashbang_DinoPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
