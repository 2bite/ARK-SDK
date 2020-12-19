#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragon_Character_BP_Boss_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dragon_Character_BP_Boss_Easy.Dragon_Character_BP_Boss_Easy_C
// 0x0009 (0x2378 - 0x236F)
class ADragon_Character_BP_Boss_Easy_C : public ADragon_Character_BP_Boss_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x236F(0x0001) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_DragonBoss_Easy_C* DinoCharacterStatus_BP_DragonBoss_Easy_C1;                // 0x2370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dragon_Character_BP_Boss_Easy.Dragon_Character_BP_Boss_Easy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dragon_Character_BP_Boss_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
