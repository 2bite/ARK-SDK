#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_Strider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C
// 0x0018 (0x0B90 - 0x0B78)
class ABuff_ChargeEmitter_Strider_C : public ABuff_ChargeEmitter_C
{
public:
	float                                              chargeLossCooldownAfterHarvesting;                        // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B7C(0x0004) MISSED OFFSET
	TArray<class UTexture2D*>                          batteryIcons;                                             // 0x0B80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter_Strider.Buff_ChargeEmitter_Strider_C");
		return ptr;
	}


	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void Get_Current_Charge(float* Current_Charge);
	void ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames>* variableType, bool* bBValue, float* fValue, double* dValue, int* ivalue);
	void Modify_Charge(bool* SetValue, float* amount, bool* multicast, bool* triggerEvent, bool* multicastEvent, float* chargeAdded);
	void Pre_Timer_Modify_Charge_Actions(bool* shouldSkipModify);
	void Is_Harvest_Cooldown_Over(bool* isOver);
	void CanPlayerHarvest(class APlayerController** Controller, bool* toBattery, bool* canHarvest);
	void CanEmitCharge(bool* canEmit);
	void Take_Harvesting_Charge_From_Character(float* chargeHarvested, float* chargeTaken);
	void ShouldEnableTimers(bool* tickServer, bool* TickClient);
	void OnChargeHarvested(float* amountHarvested);
	void Is_EmitterAvailableForHarvesting(bool* available);
	void Should_Update_Charge_On_Timer(bool* shouldUpdateWithTimer);
	void CanReceive_Charge(bool* canReceive);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeEmitter_Strider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
