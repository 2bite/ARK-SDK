#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmmoContainerHUD_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UAmmoContainerHUD_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C");
		return ptr;
	}


	void GetAmmoContainerIcon(class UTexture2D** Icon);
	void ProvidedAmmoQuantity(class APrimalStructureItemContainer* TurretStructureItemContainer, class UClass* AmmoItemTemplate, int* Quantity, bool* AnyAmmoContainersInRange);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
