#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CorruptWave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_CorruptWave.Buff_CorruptWave_C
// 0x0018 (0x097C - 0x0964)
class ABuff_CorruptWave_C : public ABuff_PoisonousTrap_Base_C
{
public:
	float                                              PostProcessTimer;                                         // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostProcessIntensity;                                     // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnTime_1;                                               // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WobbleMagnitude_1;                                        // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizTurnAmount_1;                                        // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VertTurnAmount_1;                                         // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CorruptWave.Buff_CorruptWave_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_CorruptWave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
