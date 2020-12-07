#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Haircuttable_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_Haircuttable.Dino_Character_BP_Haircuttable_C
// 0x0000 (0x2188 - 0x2188)
class ADino_Character_BP_Haircuttable_C : public ADino_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Haircuttable.Dino_Character_BP_Haircuttable_C");
		return ptr;
	}


	void DoHaircut(class AShooterCharacter* FromPlayer);
	void UserConstructionScript();
	void ExecuteUbergraph_Dino_Character_BP_Haircuttable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
