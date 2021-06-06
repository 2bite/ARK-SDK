#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Element_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPServerHandleItemNetExecCommand
struct UPrimalItemResource_Element_C_BPServerHandleItemNetExecCommand_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
};

// Function PrimalItemResource_Element.PrimalItemResource_Element_C.FindShapeshifter
struct UPrimalItemResource_Element_C_FindShapeshifter_Params
{
	class APrimalDinoCharacter*                        Shapeshifter;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RetMounted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPPreUseItem
struct UPrimalItemResource_Element_C_BPPreUseItem_Params
{
};

// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPCanUse
struct UPrimalItemResource_Element_C_BPCanUse_Params
{
	bool*                                              bIgnoreCooldown;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPSupportUseOntoItem
struct UPrimalItemResource_Element_C_BPSupportUseOntoItem_Params
{
	class UPrimalItem**                                DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPUsedOntoItem
struct UPrimalItemResource_Element_C_BPUsedOntoItem_Params
{
	class UPrimalItem**                                DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AdditionalData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemResource_Element.PrimalItemResource_Element_C.ExecuteUbergraph_PrimalItemResource_Element
struct UPrimalItemResource_Element_C_ExecuteUbergraph_PrimalItemResource_Element_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
