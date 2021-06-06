#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RestingDino_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RestingDino.Buff_RestingDino_C
// 0x000C (0x096C - 0x0960)
class ABuff_RestingDino_C : public ABuff_Base_Stew_C
{
public:
	float                                              percentHealthPerSecond;                                   // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              torpidityPerSecond;                                       // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              healthRecoveryThreshold;                                  // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RestingDino.Buff_RestingDino_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	bool BPPreventCharacterStatusValueModifiers(class APrimalCharacter** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RestingDino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
