#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ammonite_AIController_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ammonite_AIController.Ammonite_AIController_C.BPShouldNotifyNeighbor
struct AAmmonite_AIController_C_BPShouldNotifyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ammonite_AIController.Ammonite_AIController_C.UserConstructionScript
struct AAmmonite_AIController_C_UserConstructionScript_Params
{
};

// Function Ammonite_AIController.Ammonite_AIController_C.ExecuteUbergraph_Ammonite_AIController
struct AAmmonite_AIController_C_ExecuteUbergraph_Ammonite_AIController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
