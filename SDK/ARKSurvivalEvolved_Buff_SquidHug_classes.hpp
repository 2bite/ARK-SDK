#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SquidHug_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_SquidHug.Buff_SquidHug_C
// 0x0068 (0x0908 - 0x08A0)
class ABuff_SquidHug_C : public ABuff_Base_C
{
public:
	float                                              durationPlayer;                                           // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              durationWildDino;                                         // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDamagePrimalCharacterStatusValueModifier   playerSpeedModifier;                                      // 0x08A8(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDamagePrimalCharacterStatusValueModifier   wildDinoSpeedModifier;                                    // 0x08D8(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SquidHug.Buff_SquidHug_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_SquidHug(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif