#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DeinonychusPinned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DeinonychusPinned.Buff_DeinonychusPinned_C
// 0x000C (0x0A30 - 0x0A24)
class ABuff_DeinonychusPinned_C : public ABuff_Pinned_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A24(0x0004) MISSED OFFSET
	class UClass*                                      DebuffClass_1;                                            // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DeinonychusPinned.Buff_DeinonychusPinned_C");
		return ptr;
	}


	void BPInstigatorSleeped(bool* bIsSleeped);
	bool BPPreventFirstPerson();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DeinonychusPinned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
