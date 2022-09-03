#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct CanoeServerReceivedPassengerSavedInputs.CanoeServerReceivedPassengerSavedInputs
// 0x0014
struct FCanoeServerReceivedPassengerSavedInputs
{
	float                                              Axis_13_D6560244437B59C6FFA542AB1878A440;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	double                                             Timestamp_16_42521CEF4C6D168D5EDF3A98B4ED7BA2;            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PassengerIndex_9_3B570D2D4016B69EEEA75DBA2C542469;        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
