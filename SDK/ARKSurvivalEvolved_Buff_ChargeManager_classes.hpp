#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeManager_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeManager.Buff_ChargeManager_C
// 0x00D0 (0x0970 - 0x08A0)
class ABuff_ChargeManager_C : public ABuff_Base_C
{
public:
	float                                              chargeCheckRadius;                                        // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               useStrongestChargeSource;                                 // 0x08A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08A5(0x0003) MISSED OFFSET
	double                                             lastTimeReceivedCharge;                                   // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxChargeReceivedPerSecond;                               // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	double                                             lastTimeStartedReceivingCharge;                           // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              chargeUpdateCooldownAfterChargeReceived;                  // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lastChargeValue;                                          // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              receivedChargeMultiplier;                                 // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxCharge;                                                // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minCharge;                                                // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentChargeInTheEnvironment;                            // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastTimeChargeInEnvironment;                              // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      chargeEmitterClass;                                       // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      chargeMultipliersPerSource;                               // 0x08E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABuff_ChargeEmitter_C*>               currentChargeSources;                                     // 0x08F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               dontUpdateClient;                                         // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0909(0x0007) MISSED OFFSET
	TArray<float>                                      harvestMultipliersPerSource;                              // 0x0910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      chargeActor;                                              // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               interactsWithBatteriesOnTimer;                            // 0x0928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isInteractingWithBatteriesOnTimer;                        // 0x0929(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               consumeChargeWhenRechargingBattery;                       // 0x092A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x092B(0x0001) MISSED OFFSET
	float                                              batteryToCharacterChargeMultiplier;                       // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              characterToBatteryChargeMultiplier;                       // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               gainChargeWhenDepletingBattery;                           // 0x0934(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0935(0x0003) MISSED OFFSET
	int                                                batteriesToChargeInParallel;                              // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x093C(0x0004) MISSED OFFSET
	double                                             lastTimeTickedClient;                                     // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastTimeTickedServer;                                     // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentDeltaClient;                                       // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentDeltaServer;                                       // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_ChargeManagerType>                   chargeBuffType;                                           // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0959(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<E_ChargeManagerType>>           chargeSourceTypeForMultipliers;                           // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeManager.Buff_ChargeManager_C");
		return ptr;
	}


	void ManagerCustomEvent(class AActor* requestingActor, TEnumAsByte<E_ChargeManagerType> requiresManagerOfType);
	void ManagerIsBuffOfType(TEnumAsByte<E_ChargeManagerType> typeToCheck, bool* isOfType);
	void Should_Receive_Charge_FromEmitter(class ABuff_ChargeEmitter_C* Emitter, bool* shouldReceive);
	void GetChargeVariableExternalManager(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* ivalue);
	void Update_Tick_Delta_Time(float* deltaTimeServer, float* deltaTimeClient);
	void ForceEnableTimer(bool Enable);
	void On_Batteries_Charged_Client(float chargeAdded);
	void Batteries_Logic_Client(float DeltaTime);
	void Pre_Timer_Modify_Charge_Actions(bool* shouldSkipModify);
	void Get_Charge_Actor_Inventory_And_Items(class AActor* OwnerActor, TArray<class UPrimalItem*>* ownerItems, class UPrimalInventoryComponent** actorInventory);
	void Add_Charge_To_Batteries_Parallel(float amountToAddPerBattery, class AActor* inventoryOwner, bool takeChargeFromBuff, bool multicastCharge, float maxChargeToAdd, bool ForceUseAllCharge, float* chargeAddedToBattery, int* accessedBatteries);
	void GetChargePercent(float* OutPercent);
	void ShouldExecuteBatteriesLogic(bool* NewParam);
	void DestroyBuff();
	void AddChargeToBattery(class UPrimalItem_ChargeBattery_C* battery, bool takeChargeFromBuff, bool multicastCharge, float chargeToAdd, float* chargeAddedToBattery, float* chargeTakenFromBuff);
	void Batteries_Logic_Server(float DeltaTime);
	void Take_Charge_from_Batteries(float amountToTake, class AActor* inventoryOwner, bool addChargeToBuff, bool updateItem, bool multicastCharge, float* chargeTaken, int* accessedBatteries);
	void Add_Charge_to_Batteries(float amountToAdd, class AActor* inventoryOwner, bool takeChargeFromBuff, bool multicastCharge, float* chargeAddedToBattery, int* accessedBatteries);
	void OnBatteryItemChange();
	void Has_Relevant_Battery_in_Inventory(bool* shouldExecuteLogic);
	void Check_BatteriesAndUpdate();
	void ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int ivalue);
	void SetChargeVariable(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int ivalue);
	void Get_Charge_Variable(TEnumAsByte<E_ChargeVariableNames> VariableName, float* fValue, double* dValue, bool* bBValue, int* ivalue);
	void GetChargeMultiplierForSource(class ABuff_ChargeEmitter_C* buffSource, bool isHarvesting, float* Multiplier);
	void AddChargeSource(class ABuff_ChargeEmitter_C* Source);
	void ShouldEnableTimers(bool* tickServer, bool* TickClient);
	void InitializeManager(class AActor* Owner);
	void EnableTimersIfNeeded();
	void Should_Update_Charge_On_Timer(bool* shouldUpdateWithTimer);
	void isGainingCharge(bool* isGainingCharge);
	void IsGettingCharge(bool* IsGettingCharge);
	void CalculateChargeReceivedPerSecond(float* receivedCharge);
	void OnChargeEvent();
	void isFirstCharge(bool* isFirstCharge);
	void BuffTickClient(float* DeltaTime);
	void Modify_Charge(bool SetValue, float amount, bool multicast, bool triggerEvent, bool multicastEvent, float* chargeAdded);
	void Update_Charge_on_Timer(float DeltaTime);
	void Get_ChargeInEnvironment(bool getRawValue, float* receivedCharge);
	void BuffTickServer(float* DeltaTime);
	void OnReceivedCharge(float chargeAmount);
	void CanReceive_Charge(bool* canReceive);
	void UserConstructionScript();
	void OnIsReceiverChange();
	void ExecuteUbergraph_Buff_ChargeManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
