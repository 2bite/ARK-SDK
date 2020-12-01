#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragon_Character_BP_Boss_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dragon_Character_BP_Boss_Hard.Dragon_Character_BP_Boss_Hard_C
// 0x0009 (0x22F8 - 0x22EF)
class ADragon_Character_BP_Boss_Hard_C : public ADragon_Character_BP_Boss_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x22EF(0x0001) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_DragonBoss_Hard_C* DinoCharacterStatus_BP_DragonBoss_Hard_C1;                // 0x22F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dragon_Character_BP_Boss_Hard.Dragon_Character_BP_Boss_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dragon_Character_BP_Boss_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
