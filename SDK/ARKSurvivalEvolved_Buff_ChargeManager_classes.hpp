#pragma once

// ARKSurvivalEvolved (320.18) SDK

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
// 0x00D0 (0x0A20 - 0x0950)
class ABuff_ChargeManager_C : public ABuff_Base_C
{
public:
	float                                              chargeCheckRadius;                                        // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               useStrongestChargeSource;                                 // 0x0954(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0955(0x0003) MISSED OFFSET
	double                                             lastTimeReceivedCharge;                                   // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxChargeReceivedPerSecond;                               // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	double                                             lastTimeStartedReceivingCharge;                           // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              chargeUpdateCooldownAfterChargeReceived;                  // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lastChargeValue;                                          // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              receivedChargeMultiplier;                                 // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxCharge;                                                // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minCharge;                                                // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentChargeInTheEnvironment;                            // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastTimeChargeInEnvironment;                              // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      chargeEmitterClass;                                       // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      chargeMultipliersPerSource;                               // 0x0998(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABuff_ChargeEmitter_C*>               currentChargeSources;                                     // 0x09A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               dontUpdateClient;                                         // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x09B9(0x0007) MISSED OFFSET
	TArray<float>                                      harvestMultipliersPerSource;                              // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      chargeActor;                                              // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               interactsWithBatteriesOnTimer;                            // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isInteractingWithBatteriesOnTimer;                        // 0x09D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               consumeChargeWhenRechargingBattery;                       // 0x09DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x09DB(0x0001) MISSED OFFSET
	float                                              batteryToCharacterChargeMultiplier;                       // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              characterToBatteryChargeMultiplier;                       // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               gainChargeWhenDepletingBattery;                           // 0x09E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09E5(0x0003) MISSED OFFSET
	int                                                batteriesToChargeInParallel;                              // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x09EC(0x0004) MISSED OFFSET
	double                                             lastTimeTickedClient;                                     // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastTimeTickedServer;                                     // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentDeltaClient;                                       // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentDeltaServer;                                       // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_ChargeManagerType>                   chargeBuffType;                                           // 0x0A08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0A09(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<E_ChargeManagerType>>           chargeSourceTypeForMultipliers;                           // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

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
	void Add_Charge_To_Batteries_Parallel(float amountToAddPerBattery, class AActor* inventoryOwner, bool takeChargeFromBuff, bool MulticastCharge, float maxChargeToAdd, bool ForceUseAllCharge, float* chargeAddedToBattery, int* accessedBatteries);
	void GetChargePercent(float* OutPercent);
	void ShouldExecuteBatteriesLogic(bool* NewParam);
	void DestroyBuff();
	void AddChargeToBattery(class UPrimalItem_ChargeBattery_C* battery, bool takeChargeFromBuff, bool MulticastCharge, float chargeToAdd, float* chargeAddedToBattery, float* chargeTakenFromBuff);
	void Batteries_Logic_Server(float DeltaTime);
	void Take_Charge_from_Batteries(float AmountToTake, class AActor* inventoryOwner, bool addChargeToBuff, bool updateItem, bool MulticastCharge, float* chargeTaken, int* accessedBatteries);
	void Add_Charge_to_Batteries(float amountToAdd, class AActor* inventoryOwner, bool takeChargeFromBuff, bool MulticastCharge, float* chargeAddedToBattery, int* accessedBatteries);
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
	void IsGainingCharge(bool* IsGainingCharge);
	void IsGettingCharge(bool* IsGettingCharge);
	void CalculateChargeReceivedPerSecond(float* receivedCharge);
	void OnChargeEvent();
	void IsFirstCharge(bool* IsFirstCharge);
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
