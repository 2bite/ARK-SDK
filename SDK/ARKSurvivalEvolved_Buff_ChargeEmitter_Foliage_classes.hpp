#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_Foliage_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C
// 0x0008 (0x0B80 - 0x0B78)
class ABuff_ChargeEmitter_Foliage_C : public ABuff_ChargeEmitter_C
{
public:
	float                                              chargeEmittedPerSecond;                                   // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              emitterRange;                                             // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter_Foliage.Buff_ChargeEmitter_Foliage_C");
		return ptr;
	}


	void GetActorsToIgnoreOnRaycast(class AActor** emitterActor, TArray<class AActor*>* ActorsToIgnore);
	void GetEmitterActor(class AActor** emitterActor);
	void Get_Charge_Variable(TEnumAsByte<E_ChargeVariableNames>* VariableName, float* fValue, double* dValue, bool* bBValue, int* ivalue);
	void CanEmitCharge(bool* canEmit);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_ChargeEmitter_Foliage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
