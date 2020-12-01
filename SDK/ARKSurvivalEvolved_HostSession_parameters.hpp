#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HostSession_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HostSession.HostSession_C.Tick
struct UHostSession_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HostSession.HostSession_C.BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature
struct UHostSession_C_BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HostSession.HostSession_C.ExecuteUbergraph_HostSession
struct UHostSession_C_ExecuteUbergraph_HostSession_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
