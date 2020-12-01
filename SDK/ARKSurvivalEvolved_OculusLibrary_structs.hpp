#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_Engine_classes.hpp"
#include "ARKSurvivalEvolved_CoreUObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OculusLibrary.OculusFunctionLibrary.HmdUserProfileField
// 0x0020
struct FHmdUserProfileField
{
	class FString                                      FieldName;                                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      FieldValue;                                               // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OculusLibrary.OculusFunctionLibrary.HmdUserProfile
// 0x0048
struct FHmdUserProfile
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      Gender;                                                   // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              PlayerHeight;                                             // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeHeight;                                                // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IPD;                                                      // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   NeckToEyeDistance;                                        // 0x002C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FHmdUserProfileField>                ExtraFields;                                              // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
