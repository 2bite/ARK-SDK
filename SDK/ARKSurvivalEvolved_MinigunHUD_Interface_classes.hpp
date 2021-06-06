#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MinigunHUD_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MinigunHUD_Interface.MinigunHUD_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UMinigunHUD_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinigunHUD_Interface.MinigunHUD_Interface_C");
		return ptr;
	}


	void GetHudData(class UTexture2D** AmmoIcon, int* CurrentAmmoCount, int* AmmoPerClip, bool* IsInTurretMode, bool* HideAmmoCountHUDElement, class UClass** AmmoItemTemplate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
