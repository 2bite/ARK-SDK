#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tank_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tank_AIController_BP.Tank_AIController_BP_C
// 0x0157 (0x0A40 - 0x08E9)
class ATank_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	class AActor*                                      DamageCauser;                                             // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Event_Damage;                                      // 0x08F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	class UDamageType*                                 K2Node_Event_DamageType;                                  // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_Event_InstigatedBy;                                // 0x0908(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x0910(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_ObjectToString_ReturnValue;                 // 0x0918(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_ObjectToString_ReturnValue2;                // 0x0928(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x0938(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue2;                      // 0x0948(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue3;                      // 0x0958(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue4;                      // 0x0968(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0980(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	class APlayerPawnTest_C*                           K2Node_DynamicCast_AsPlayerPawnTest_C;                    // 0x0988(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0990(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0991(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Conv_ObjectToString_ReturnValue3;                // 0x0998(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_ObjectToString_ReturnValue4;                // 0x09A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue5;                      // 0x09B8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue6;                      // 0x09C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue7;                      // 0x09D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue8;                      // 0x09E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x09F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x09F9(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Conv_BoolToString_ReturnValue;                   // 0x0A00(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_BoolToString_ReturnValue2;                  // 0x0A10(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue9;                      // 0x0A20(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue10;                     // 0x0A30(0x0010) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tank_AIController_BP.Tank_AIController_BP_C");
		return ptr;
	}


	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void UserConstructionScript();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ExecuteUbergraph_Tank_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif