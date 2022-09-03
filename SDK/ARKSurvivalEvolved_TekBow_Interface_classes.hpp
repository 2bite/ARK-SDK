#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBow_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekBow_Interface.TekBow_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UTekBow_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekBow_Interface.TekBow_Interface_C");
		return ptr;
	}


	void GetAmmoMultiuseEntries(TArray<struct FMultiUseEntry>* AmmoWheelEntries);
	void GetHudData(class FString* AmmoName, class UTexture2D** AmmoIcon, int* CurrentAmmoCount, int* CurrentAmmoCost, int* AmmoPerClip, int* AmmoTypeIndex, struct FLinearColor* CurrentAmmoTypeColor, bool* IsAccessoryActive);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
