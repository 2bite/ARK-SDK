#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AmargaSpiked_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AmargaSpiked.Buff_AmargaSpiked_C
// 0x000B (0x0983 - 0x0978)
class ABuff_AmargaSpiked_C : public ABuff_Base_C
{
public:
	int                                                TemperatureCounter;                                       // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCounterForTempDamage;                                  // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyArmorDebuff;                                        // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x0981(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0982(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AmargaSpiked.Buff_AmargaSpiked_C");
		return ptr;
	}


	void ClearApplyArmorDebuff();
	void InitBuff();
	void ApplyArmorDebuff();
	void TempCheck();
	void UpdateTemperatureCounter(int amount);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_AmargaSpiked(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
