#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dimorph_Character_BP_Aggressive_DragonBoss_Med_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dimorph_Character_BP_Aggressive_DragonBoss_Med.Dimorph_Character_BP_Aggressive_DragonBoss_Med_C
// 0x0008 (0x2280 - 0x2278)
class ADimorph_Character_BP_Aggressive_DragonBoss_Med_C : public ADimorph_Character_BP_Aggressive_C
{
public:
	class UDinoCharacterStatusComponent_BP_Dimorph_Aggressive_Med_C* DinoCharacterStatus_BP_Dimorph_Aggressive_Med_C1;         // 0x2278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dimorph_Character_BP_Aggressive_DragonBoss_Med.Dimorph_Character_BP_Aggressive_DragonBoss_Med_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dimorph_Character_BP_Aggressive_DragonBoss_Med(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
