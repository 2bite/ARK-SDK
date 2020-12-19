// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TrueSkyPlugin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TrueSkyPlugin.TrueSkySequenceActor.SetTime
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::SetTime(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetTime");

	ATrueSkySequenceActor_SetTime_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            lightColour                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinRadius                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRadius                      (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::SetPointLightSource(int ID, const struct FLinearColor& lightColour, float Intensity, const struct FVector& pos, float MinRadius, float MaxRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource");

	ATrueSkySequenceActor_SetPointLightSource_Params params;
	params.ID = ID;
	params.lightColour = lightColour;
	params.Intensity = Intensity;
	params.pos = pos;
	params.MinRadius = MinRadius;
	params.MaxRadius = MaxRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight
// ()
// Parameters:
// class APointLight*             Source                         (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::SetPointLight(class APointLight* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight");

	ATrueSkySequenceActor_SetPointLight_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt
// ()
// Parameters:
// int                            keyframeUid                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::SetKeyframeInt(int keyframeUid, const class FString& Name, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt");

	ATrueSkySequenceActor_SetKeyframeInt_Params params;
	params.keyframeUid = keyframeUid;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat
// ()
// Parameters:
// int                            keyframeUid                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::SetKeyframeFloat(int keyframeUid, const class FString& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat");

	ATrueSkySequenceActor_SetKeyframeFloat_Params params;
	params.keyframeUid = keyframeUid;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetInt
// ()
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::SetInt(const class FString& Name, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetInt");

	ATrueSkySequenceActor_SetInt_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat
// ()
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ATrueSkySequenceActor::SetFloat(const class FString& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat");

	ATrueSkySequenceActor_SetFloat_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ATrueSkySequenceActor::GetSunRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation");

	ATrueSkySequenceActor_GetSunRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ATrueSkySequenceActor::GetSunColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor");

	ATrueSkySequenceActor_GetSunColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::GetNextModifiableSkyKeyframe()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe");

	ATrueSkySequenceActor_GetNextModifiableSkyKeyframe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe
// ()
// Parameters:
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::GetNextModifiableCloudKeyframe(int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe");

	ATrueSkySequenceActor_GetNextModifiableCloudKeyframe_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt
// ()
// Parameters:
// int                            keyframeUid                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::GetKeyframeInt(int keyframeUid, const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt");

	ATrueSkySequenceActor_GetKeyframeInt_Params params;
	params.keyframeUid = keyframeUid;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat
// ()
// Parameters:
// int                            keyframeUid                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::GetKeyframeFloat(int keyframeUid, const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat");

	ATrueSkySequenceActor_GetKeyframeFloat_Params params;
	params.keyframeUid = keyframeUid;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetInt
// ()
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATrueSkySequenceActor::GetInt(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetInt");

	ATrueSkySequenceActor_GetInt_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat
// ()
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::GetFloat(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat");

	ATrueSkySequenceActor_GetFloat_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.ForceUpdate
// ()

void ATrueSkySequenceActor::ForceUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.ForceUpdate");

	ATrueSkySequenceActor_ForceUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest
// ()
// Parameters:
// int                            queryId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 pos                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::CloudPointTest(int queryId, const struct FVector& pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest");

	ATrueSkySequenceActor_CloudPointTest_Params params;
	params.queryId = queryId;
	params.pos = pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest
// ()
// Parameters:
// int                            queryId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartPos                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndPos                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrueSkySequenceActor::CloudLineTest(int queryId, const struct FVector& StartPos, const struct FVector& EndPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest");

	ATrueSkySequenceActor_CloudLineTest_Params params;
	params.queryId = queryId;
	params.StartPos = StartPos;
	params.EndPos = EndPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
