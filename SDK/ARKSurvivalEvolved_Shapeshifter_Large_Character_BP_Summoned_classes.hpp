#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Shapeshifter_Large_Character_BP_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C
// 0x0000 (0x4F18 - 0x4F18)
class AShapeshifter_Large_Character_BP_Summoned_C : public AShapeshifter_Large_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shapeshifter_Large_Character_BP_Summoned.Shapeshifter_Large_Character_BP_Summoned_C");
		return ptr;
	}


	void Initialize();
	class FString BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor);
	void TrySet_Collision(bool* Enable);
	void UserConstructionScript();
	void ExecuteUbergraph_Shapeshifter_Large_Character_BP_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
