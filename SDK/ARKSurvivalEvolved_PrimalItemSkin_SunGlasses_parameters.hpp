#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_SunGlasses_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.OrbitCameraChanged
struct UPrimalItemSkin_SunGlasses_C_OrbitCameraChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.EnteredThirdPerson
struct UPrimalItemSkin_SunGlasses_C_EnteredThirdPerson_Params
{
};

// Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.EnteredFirstPerson
struct UPrimalItemSkin_SunGlasses_C_EnteredFirstPerson_Params
{
};

// Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.CreateSunglassesComponent
struct UPrimalItemSkin_SunGlasses_C_CreateSunglassesComponent_Params
{
	class USkeletalMeshComponent*                      ParentComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Created;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.BPAnimNotifyCustomEvent
struct UPrimalItemSkin_SunGlasses_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_SunGlasses.PrimalItemSkin_SunGlasses_C.ExecuteUbergraph_PrimalItemSkin_SunGlasses
struct UPrimalItemSkin_SunGlasses_C_ExecuteUbergraph_PrimalItemSkin_SunGlasses_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
