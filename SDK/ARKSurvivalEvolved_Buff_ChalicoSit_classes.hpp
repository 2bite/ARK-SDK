#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChalicoSit_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChalicoSit.Buff_ChalicoSit_C
// 0x0008 (0x0980 - 0x0978)
class ABuff_ChalicoSit_C : public ABuff_Base_Stew_C
{
public:
	float                                              percentHealthPerSecond;                                   // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              healthRecoveryThreshold;                                  // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChalicoSit.Buff_ChalicoSit_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	bool BPPreventCharacterStatusValueModifiers(class APrimalCharacter** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChalicoSit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
