#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ScriptPlugin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ScriptPlugin.ScriptBlueprintGeneratedClass
// 0x0030 (0x0208 - 0x01D8)
class UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	TArray<unsigned char>                              ByteCode;                                                 // 0x01D8(0x0010) (ZeroConstructor)
	class FString                                      SourceCode;                                               // 0x01E8(0x0010) (ZeroConstructor)
	TArray<class UProperty*>                           ScriptProperties;                                         // 0x01F8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptBlueprintGeneratedClass");
		return ptr;
	}

};


// Class ScriptPlugin.ScriptBlueprint
// 0x0040 (0x0100 - 0x00C0)
class UScriptBlueprint : public UBlueprint
{
public:
	class FString                                      SourceFilePath;                                           // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	class FString                                      SourceFileTimestamp;                                      // 0x00D0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<unsigned char>                              ByteCode;                                                 // 0x00E0(0x0010) (ZeroConstructor)
	class FString                                      SourceCode;                                               // 0x00F0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptBlueprint");
		return ptr;
	}

};


// Class ScriptPlugin.ScriptComponent
// 0x0008 (0x00E0 - 0x00D8)
class UScriptComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptComponent");
		return ptr;
	}


	bool CallScriptFunction(const class FString& FunctionName);
};


// Class ScriptPlugin.ScriptContext
// 0x0008 (0x0030 - 0x0028)
class UScriptContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptContext");
		return ptr;
	}


	void CallScriptFunction(const class FString& FunctionName);
};


// Class ScriptPlugin.ScriptContextComponent
// 0x0008 (0x00E0 - 0x00D8)
class UScriptContextComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptContextComponent");
		return ptr;
	}


	void CallScriptFunction(const class FString& FunctionName);
};


// Class ScriptPlugin.ScriptTestActor
// 0x0018 (0x0480 - 0x0468)
class AScriptTestActor : public AActor
{
public:
	class FString                                      TestString;                                               // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TestValue;                                                // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TestBool;                                                 // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x047D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptTestActor");
		return ptr;
	}


	float TestFunction(float InValue, float InFactor, bool bMultiply);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
