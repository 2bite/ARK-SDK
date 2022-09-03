#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Freeze_Amarga_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Freeze_Amarga.Buff_Freeze_Amarga_C
// 0x0009 (0x0ADC - 0x0AD3)
class ABuff_Freeze_Amarga_C : public ABuff_Freeze_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0AD3(0x0001) MISSED OFFSET
	float                                              MeleeIncToAmount;                                         // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DOTDamage;                                                // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Freeze_Amarga.Buff_Freeze_Amarga_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void MeleeIncFreeze();
	void BuffTickServer(float* DeltaTime);
	void STATIC_UpdateBuffDescription();
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Freeze_Amarga(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
