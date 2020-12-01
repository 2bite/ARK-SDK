#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dimorph_Character_BP_Aggressive_DragonBoss_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dimorph_Character_BP_Aggressive_DragonBoss.Dimorph_Character_BP_Aggressive_DragonBoss_C
// 0x0000 (0x2098 - 0x2098)
class ADimorph_Character_BP_Aggressive_DragonBoss_C : public ADimorph_Character_BP_Aggressive_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dimorph_Character_BP_Aggressive_DragonBoss.Dimorph_Character_BP_Aggressive_DragonBoss_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dimorph_Character_BP_Aggressive_DragonBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
