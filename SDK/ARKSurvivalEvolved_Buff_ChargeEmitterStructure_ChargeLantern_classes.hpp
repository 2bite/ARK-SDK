#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterStructure_ChargeLantern_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C
// 0x0000 (0x0B70 - 0x0B70)
class ABuff_ChargeEmitterStructure_ChargeLantern_C : public ABuff_ChargeEmitterStructure_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitterStructure_ChargeLantern.Buff_ChargeEmitterStructure_ChargeLantern_C");
		return ptr;
	}


	void STATIC_GetDistanceAndAngleCheckOrigin(class AActor** emitterActor, struct FVector* distanceAngleOrigin);
	void BuffTickClient(float* DeltaTime);
	void TakeChargeConsumedByReceivers(float* chargeToTake);
	void WillReceiverAffectChargeConsumption(class ABuff_ChargeManager_C** Receiver, bool* canProcess);
	void Is_Valid_Receiver_for_Charge_Consumption(class ABuff_ChargeManager_C** Receiver, bool* IsValid);
	void OnChargeConsumedByReceiversChanged(float* newCharge);
	void ShouldProcessChargeConsumedByReceivers(bool* shouldProcess);
	void Can_Process_New_Receiver_For_Charge_Consumption(bool* canProcess);
	void GetEmitterForwardVector(struct FVector* ForwardVector);
	void STATIC_GetEmitterLineTraceOrigin(class AActor** emitterActor, struct FVector* lineTraceOrigin);
	void Modify_Charge(bool* SetValue, float* amount, bool* multicast, bool* triggerEvent, bool* multicastEvent, float* chargeAdded);
	void EmitterUpdateChargeOnTimer(float* DeltaTime);
	void ShouldEnableTimers(bool* tickServer, bool* TickClient);
	void ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames>* variableType, bool* bBValue, float* fValue, double* dValue, int* ivalue);
	void InitializeEmitter();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeEmitterStructure_ChargeLantern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
