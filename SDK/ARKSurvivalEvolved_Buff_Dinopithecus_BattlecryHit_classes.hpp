#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Dinopithecus_BattlecryHit_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C
// 0x0004 (0x097C - 0x0978)
class ABuff_Dinopithecus_BattlecryHit_C : public ABuff_Base_C
{
public:
	float                                              ChanceToApplyBuffPerBite;                                 // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C");
		return ptr;
	}


	void BPActivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Dinopithecus_BattlecryHit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
