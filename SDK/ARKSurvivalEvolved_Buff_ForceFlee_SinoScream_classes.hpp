#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ForceFlee_SinoScream_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C
// 0x0011 (0x09B1 - 0x09A0)
class ABuff_ForceFlee_SinoScream_C : public ABuff_ForceFlee_Base_C
{
public:
	TArray<struct FName>                               TagsToForceRunBT;                                         // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bHasForceSetBT;                                           // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C");
		return ptr;
	}


	void Restore_Flee_State();
	void Set_Flee_State();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ForceFlee_SinoScream(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
