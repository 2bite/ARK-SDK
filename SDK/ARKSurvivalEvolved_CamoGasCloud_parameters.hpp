#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CamoGasCloud_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CamoGasCloud.CamoGasCloud_C.BPExcludeAoEActor
struct ACamoGasCloud_C_BPExcludeAoEActor_Params
{
	class AActor**                                     ActorToConsider;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CamoGasCloud.CamoGasCloud_C.UserConstructionScript
struct ACamoGasCloud_C_UserConstructionScript_Params
{
};

// Function CamoGasCloud.CamoGasCloud_C.ExecuteUbergraph_CamoGasCloud
struct ACamoGasCloud_C_ExecuteUbergraph_CamoGasCloud_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
