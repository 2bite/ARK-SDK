#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Pack_Chupa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C
// 0x000A (0x2122 - 0x2118)
class ADino_Character_BP_Pack_Chupa_C : public ADino_Character_BP_Pack_C
{
public:
	class APrimalBuff*                                 chargeManagerBuff;                                        // 0x2118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isDivingIn;                                               // 0x2120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isUnderground;                                            // 0x2121(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C");
		return ptr;
	}


	void OnRep_isUnderground();
	void OnChargeEvent();
	void UseCringeForTime(float cringeTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Dino_Character_BP_Pack_Chupa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
