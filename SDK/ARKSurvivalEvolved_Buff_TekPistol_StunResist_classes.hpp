#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistol_StunResist_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C
// 0x0004 (0x0964 - 0x0960)
class ABuff_TekPistol_StunResist_C : public ABuff_Base_C
{
public:
	int                                                StackCount;                                               // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekPistol_StunResist(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
