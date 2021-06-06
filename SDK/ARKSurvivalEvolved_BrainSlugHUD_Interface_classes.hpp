#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BrainSlugHUD_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BrainSlugHUD_Interface.BrainSlugHUD_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UBrainSlugHUD_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BrainSlugHUD_Interface.BrainSlugHUD_Interface_C");
		return ptr;
	}


	void GetHudData(class APrimalCharacter* TargetChar, bool* IsAllowedToControlTarget, class FString* TargetValidationString, class FString* InvalidTargetString_PreventHUD, struct FHUDElement* HUDElementTemplate, float* BrainJumpTargetCheckDistance);
	void Sync_Crosshair_Color(const struct FLinearColor& InColor, struct FLinearColor* outColor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
