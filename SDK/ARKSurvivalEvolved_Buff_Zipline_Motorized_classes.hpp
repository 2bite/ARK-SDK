#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x01FD (0x0EC9 - 0x0CCC)
class ABuff_Zipline_Motorized_C : public ABuff_Zipline_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0CCC(0x0004) MISSED OFFSET
	class UPrimalItem*                                 MotorItemSkin;                                            // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimalItem*                                 ParentItem;                                               // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GasConsumptionPerInterval;                                // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GasConsumptionInterval;                                   // 0x0CE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ConsumeGasOnNextInput;                                    // 0x0CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x0CE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0CEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0CEB(0x0001) MISSED OFFSET
	float                                              K2Node_CustomEvent_DeltaTime;                             // 0x0CEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0CF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0CF1(0x0007) MISSED OFFSET
	class UPrimalItem*                                 CallFunc_GetMotorAndParentItem_ParentItem;                // 0x0CF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem*                                 CallFunc_GetMotorAndParentItem_MyItemSkin;                // 0x0D00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCustomItemData                             CallFunc_GetCustomItemData_OutData;                       // 0x0D08(0x0078) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetCustomItemData_ReturnValue;                   // 0x0D80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0D81(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x0D84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0D88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x0D8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Array_Get_Item;                                  // 0x0D90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x0D94(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0D95(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0D98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0D9C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0D9D(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x0DA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0DA4(0x0004) MISSED OFFSET
	TArray<float>                                      K2Node_MakeArray_Array;                                   // 0x0DA8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FCustomItemData                             K2Node_MakeStruct_CustomItemData;                         // 0x0DB8(0x0078) (Transient, DuplicateTransient)
	class UPrimalItem*                                 CallFunc_GetMotorAndParentItem_ParentItem2;               // 0x0E30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem*                                 CallFunc_GetMotorAndParentItem_MyItemSkin2;               // 0x0E38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FCustomItemData                             CallFunc_GetCustomItemData_OutData2;                      // 0x0E40(0x0078) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetCustomItemData_ReturnValue2;                  // 0x0EB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0EB9(0x0003) MISSED OFFSET
	float                                              CallFunc_Array_Get_Item2;                                 // 0x0EBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetItemTemplateQuantity_ReturnValue;             // 0x0EC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x0EC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0EC5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0EC6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0EC7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0EC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Zipline_Motorized.Buff_Zipline_Motorized_C");
		return ptr;
	}


	void UpdateFX();
	struct FVector BPOverrideWeaponBob(struct FVector* InWeaponBob);
	void BuffTickClient(float* DeltaTime);
	void Try_Refill_Gas();
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
