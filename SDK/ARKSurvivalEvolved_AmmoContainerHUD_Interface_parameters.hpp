#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmmoContainerHUD_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C.GetAmmoContainerIcon
struct UAmmoContainerHUD_Interface_C_GetAmmoContainerIcon_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C.ProvidedAmmoQuantity
struct UAmmoContainerHUD_Interface_C_ProvidedAmmoQuantity_Params
{
	class APrimalStructureItemContainer*               TurretStructureItemContainer;                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AmmoItemTemplate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AnyAmmoContainersInRange;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
