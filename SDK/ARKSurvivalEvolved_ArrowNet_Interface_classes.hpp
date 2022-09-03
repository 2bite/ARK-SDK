#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArrowNet_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArrowNet_Interface.ArrowNet_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UArrowNet_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArrowNet_Interface.ArrowNet_Interface_C");
		return ptr;
	}


	void Remote_Set_Crosshair_Size(float InSize, float* OutSize);
	void Remote_Set_Crosshair_Color(const struct FLinearColor& InColor, struct FLinearColor* outColor);
	void GetHudData(class UClass** ProjectileClass, struct FVector* SocketLocation, struct FVector* FireDirection, float* AimedTargetCheckRadius, bool* isFPV);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
