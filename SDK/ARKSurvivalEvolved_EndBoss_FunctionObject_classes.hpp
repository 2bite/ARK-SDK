#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_FunctionObject_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndBoss_FunctionObject.EndBoss_FunctionObject_C
// 0x0000 (0x0028 - 0x0028)
class UEndBoss_FunctionObject_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndBoss_FunctionObject.EndBoss_FunctionObject_C");
		return ptr;
	}


	void Set_Character_Material_Param(class AActor* TargetChar, float NewValue, const struct FName& ParameterName);
	void GetEndBossColor(class AActor* WorldContextActor, struct FLinearColor* Color);
	void Get_EndBoss_Difficulty(class AActor* WorldContextActor, TEnumAsByte<EBossDifficulty_Enum>* difficulty);
	void Decrement_Character_Material_Param(class AActor* ActorTarget, float Rate, const struct FName& DissolveParam, float OverrideDeltaTime, float* LastMaterialValue);
	void ExecuteUbergraph_EndBoss_FunctionObject(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
