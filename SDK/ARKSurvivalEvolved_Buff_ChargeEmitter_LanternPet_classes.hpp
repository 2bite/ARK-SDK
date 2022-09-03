#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_LanternPet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C
// 0x0011 (0x0BA1 - 0x0B90)
class ABuff_ChargeEmitter_LanternPet_C : public ABuff_ChargeEmitter_C
{
public:
	class UAudioComponent*                             ChargeOffSound;                                           // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ChargeOnSound;                                            // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WasMaxChargeLastTick;                                     // 0x0BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter_LanternPet.Buff_ChargeEmitter_LanternPet_C");
		return ptr;
	}


	void ShouldEnableTimers(bool* tickServer, bool* TickClient);
	void ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames>* variableType, bool* bBValue, float* fValue, double* dValue, int* iValue);
	void ReceiveDestroyed();
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeEmitter_LanternPet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
