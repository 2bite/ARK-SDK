#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalodon_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Megalodon_Character_BP.Megalodon_Character_BP_C
// 0x0049 (0x21D1 - 0x2188)
class AMegalodon_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Mega_C*     DinoCharacterStatus_BP_Mega_C1;                           // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x2190(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2191(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x2192(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2194(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class APrimalBuff*>                         CallFunc_GetBuffs_TheBuffs;                               // 0x2198(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x21A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x21AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x21B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x21B1(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_Array_Get_Item;                                  // 0x21B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x21C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x21C1(0x0007) MISSED OFFSET
	class ABuff_DinoTekHelmet_Base_C*                  K2Node_DynamicCast_AsBuff_DinoTekHelmet_Base_C;           // 0x21C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x21D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Megalodon_Character_BP.Megalodon_Character_BP_C");
		return ptr;
	}


	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	bool BPHandleOnStopTargeting();
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	float BPModifyFOV(float* FOVIn);
	void UserConstructionScript();
	void InpActEvt_AltFire_K2Node_InputActionEvent_170();
	void InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_169();
	void ExecuteUbergraph_Megalodon_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
