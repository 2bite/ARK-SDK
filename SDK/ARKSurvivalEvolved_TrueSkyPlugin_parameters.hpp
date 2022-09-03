#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TrueSkyPlugin_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TrueSkyPlugin.TrueSkySequenceActor.SetTime
struct ATrueSkySequenceActor_SetTime_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource
struct ATrueSkySequenceActor_SetPointLightSource_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                lightColour;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight
struct ATrueSkySequenceActor_SetPointLight_Params
{
	class APointLight*                                 Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt
struct ATrueSkySequenceActor_SetKeyframeInt_Params
{
	int                                                keyframeUid;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat
struct ATrueSkySequenceActor_SetKeyframeFloat_Params
{
	int                                                keyframeUid;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetInt
struct ATrueSkySequenceActor_SetInt_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat
struct ATrueSkySequenceActor_SetFloat_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation
struct ATrueSkySequenceActor_GetSunRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor
struct ATrueSkySequenceActor_GetSunColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe
struct ATrueSkySequenceActor_GetNextModifiableSkyKeyframe_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe
struct ATrueSkySequenceActor_GetNextModifiableCloudKeyframe_Params
{
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt
struct ATrueSkySequenceActor_GetKeyframeInt_Params
{
	int                                                keyframeUid;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat
struct ATrueSkySequenceActor_GetKeyframeFloat_Params
{
	int                                                keyframeUid;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetInt
struct ATrueSkySequenceActor_GetInt_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat
struct ATrueSkySequenceActor_GetFloat_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.ForceUpdate
struct ATrueSkySequenceActor_ForceUpdate_Params
{
};

// Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest
struct ATrueSkySequenceActor_CloudPointTest_Params
{
	int                                                queryId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest
struct ATrueSkySequenceActor_CloudLineTest_Params
{
	int                                                queryId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
