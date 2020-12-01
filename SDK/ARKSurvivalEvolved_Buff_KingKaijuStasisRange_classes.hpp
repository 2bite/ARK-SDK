#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_KingKaijuStasisRange_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_KingKaijuStasisRange.Buff_KingKaijuStasisRange_C
// 0x0164 (0x0A04 - 0x08A0)
class ABuff_KingKaijuStasisRange_C : public APrimalBuff
{
public:
	struct FHUDElement                                 KKHealthBar_HudEle;                                       // 0x08A0(0x00B0) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FHUDElement                                 KKHealthBarLabel_HudEle;                                  // 0x0950(0x00B0) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                              HUDColorAlpha;                                            // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_KingKaijuStasisRange.Buff_KingKaijuStasisRange_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	void BPActivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_KingKaijuStasisRange(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
