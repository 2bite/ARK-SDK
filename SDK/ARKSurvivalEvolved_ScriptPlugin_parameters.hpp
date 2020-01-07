#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ScriptPlugin_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ScriptPlugin.ScriptComponent.CallScriptFunction
struct UScriptComponent_CallScriptFunction_Params
{
	class FString                                      FunctionName;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScriptPlugin.ScriptContext.CallScriptFunction
struct UScriptContext_CallScriptFunction_Params
{
	class FString                                      FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.ScriptContextComponent.CallScriptFunction
struct UScriptContextComponent_CallScriptFunction_Params
{
	class FString                                      FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.ScriptTestActor.TestFunction
struct AScriptTestActor_TestFunction_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InFactor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMultiply;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
