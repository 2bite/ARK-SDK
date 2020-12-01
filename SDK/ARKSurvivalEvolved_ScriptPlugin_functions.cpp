// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ScriptPlugin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScriptPlugin.ScriptComponent.CallScriptFunction
// ()
// Parameters:
// class FString                  FunctionName                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptComponent::CallScriptFunction(const class FString& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptComponent.CallScriptFunction");

	UScriptComponent_CallScriptFunction_Params params;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScriptPlugin.ScriptContext.CallScriptFunction
// ()
// Parameters:
// class FString                  FunctionName                   (Parm, ZeroConstructor)

void UScriptContext::CallScriptFunction(const class FString& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContext.CallScriptFunction");

	UScriptContext_CallScriptFunction_Params params;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScriptPlugin.ScriptContextComponent.CallScriptFunction
// ()
// Parameters:
// class FString                  FunctionName                   (Parm, ZeroConstructor)

void UScriptContextComponent::CallScriptFunction(const class FString& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptContextComponent.CallScriptFunction");

	UScriptContextComponent_CallScriptFunction_Params params;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScriptPlugin.ScriptTestActor.TestFunction
// ()
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InFactor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMultiply                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AScriptTestActor::TestFunction(float InValue, float InFactor, bool bMultiply)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScriptPlugin.ScriptTestActor.TestFunction");

	AScriptTestActor_TestFunction_Params params;
	params.InValue = InValue;
	params.InFactor = InFactor;
	params.bMultiply = bMultiply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
