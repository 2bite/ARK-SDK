#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_Motorized_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Zipline_Motorized.Buff_Zipline_Motorized_C
// 0x01FD (0x0E99 - 0x0C9C)
class ABuff_Zipline_Motorized_C : public ABuff_Zipline_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C9C(0x0004) MISSED OFFSET
	class UPrimalItem*                                 MotorItemSkin;                                            // 0x0CA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimalItem*                                 ParentItem;                                               // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GasConsumptionPerInterval;                                // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GasConsumptionInterval;                                   // 0x0CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ConsumeGasOnNextInput;                                    // 0x0CB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x0CB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0CBA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0CBB(0x0001) MISSED OFFSET
	float                                              K2Node_CustomEvent_DeltaTime;                             // 0x0CBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0CC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0CC1(0x0007) MISSED OFFSET
	class UPrimalItem*                                 CallFunc_GetMotorAndParentItem_ParentItem;                // 0x0CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem*                                 CallFunc_GetMotorAndParentItem_MyItemSkin;                // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCustomItemData                             CallFunc_GetCustomItemData_OutData;                       // 0x0CD8(0x0078) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetCustomItemData_ReturnValue;                   // 0x0D50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0D51(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x0D54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0D58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x0D5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Array_Get_Item;                                  // 0x0D60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x0D64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0D65(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0D68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0D6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0D6D(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x0D70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0D74(0x0004) MISSED OFFSET
	TArray<float>                                      K2Node_MakeArray_Array;                                   // 0x0D78(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FCustomItemData                             K2Node_MakeStruct_CustomItemData;                         // 0x0D88(0x0078) (Transient, DuplicateTransient)
	class UPrimalItem*                                 CallFunc_GetMotorAndParentItem_ParentItem2;               // 0x0E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem*                                 CallFunc_GetMotorAndParentItem_MyItemSkin2;               // 0x0E08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCustomItemData                             CallFunc_GetCustomItemData_OutData2;                      // 0x0E10(0x0078) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetCustomItemData_ReturnValue2;                  // 0x0E88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0E89(0x0003) MISSED OFFSET
	float                                              CallFunc_Array_Get_Item2;                                 // 0x0E8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetItemTemplateQuantity_ReturnValue;             // 0x0E90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x0E94(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0E95(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0E96(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0E97(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0E98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Zipline_Motorized.Buff_Zipline_Motorized_C");
		return ptr;
	}


	void UpdateFX();
	struct FVector BPOverrideWeaponBob(struct FVector* InWeaponBob);
	void BuffTickClient(float* DeltaTime);
	void STATIC_Try_Refill_Gas();
	void STATIC_BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult);
	void GetMotorAndParentItem(class UObject* Actor, class UPrimalItem** ParentItem, class UPrimalItem** MyItemSkin);
	void TickMoveAlongZipline();
	void BPDeactivated(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ConsumeGasoline(float DeltaTime);
	void ExecuteUbergraph_Buff_Zipline_Motorized(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
