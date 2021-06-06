#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionModule_zSubmodule_CompanionReaction_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C
// 0x00BC (0x0164 - 0x00A8)
class UMissionModule_zSubmodule_CompanionReaction_Base_C : public UMissionModule_Base_C
{
public:
	int                                                ValidCreatureKillCount;                                   // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction;                                        // 0x00B0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ForcePlayNow;                                             // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	class UMaterialInterface*                          Dialog_Icon_Override;                                     // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CallFunc_HandleMissionModuleBegin_ReturnValue;            // 0x0160(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionModule_zSubmodule_CompanionReaction_Base.MissionModule_zSubmodule_CompanionReaction_Base_C");
		return ptr;
	}


	int HandleMissionModuleBegin();
	void TriggerMissionModuleBegin();
	void ExecuteUbergraph_MissionModule_zSubmodule_CompanionReaction_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
