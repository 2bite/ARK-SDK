#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RageEffect_RareFlower_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RageEffect_RareFlower.Buff_RageEffect_RareFlower_C
// 0x0004 (0x0988 - 0x0984)
class ABuff_RageEffect_RareFlower_C : public ABuff_RageEffect_C
{
public:
	float                                              MaxBuffTime;                                              // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RageEffect_RareFlower.Buff_RageEffect_RareFlower_C");
		return ptr;
	}


	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RageEffect_RareFlower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
