#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SquidInk_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_SquidInk.Buff_SquidInk_C
// 0x0068 (0x09E0 - 0x0978)
class ABuff_SquidInk_C : public ABuff_Base_C
{
public:
	float                                              durationPlayer;                                           // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              durationWildDino;                                         // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDamagePrimalCharacterStatusValueModifier   playerSpeedModifier;                                      // 0x0980(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDamagePrimalCharacterStatusValueModifier   wildDinoSpeedModifier;                                    // 0x09B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SquidInk.Buff_SquidInk_C");
		return ptr;
	}


	void BPPreSetupForInstigator(class AActor** ForInstigator);
	void BPDeactivated(class AActor** ForInstigator);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_SquidInk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
