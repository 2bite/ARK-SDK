#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragon_Character_BP_Boss_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dragon_Character_BP_Boss_Medium.Dragon_Character_BP_Boss_Medium_C
// 0x0009 (0x2458 - 0x244F)
class ADragon_Character_BP_Boss_Medium_C : public ADragon_Character_BP_Boss_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x244F(0x0001) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_DragonBoss_Medium_C* DinoCharacterStatus_BP_DragonBoss_Medium_C1;              // 0x2450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dragon_Character_BP_Boss_Medium.Dragon_Character_BP_Boss_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dragon_Character_BP_Boss_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
