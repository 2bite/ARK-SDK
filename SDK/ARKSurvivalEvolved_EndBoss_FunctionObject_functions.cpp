// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_FunctionObject_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.Set Character Material Param
// ()
// Parameters:
// class AActor*                  TargetChar                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          newValue                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)

void UEndBoss_FunctionObject_C::Set_Character_Material_Param(class AActor* TargetChar, float newValue, const struct FName& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.Set Character Material Param");

	UEndBoss_FunctionObject_C_Set_Character_Material_Param_Params params;
	params.TargetChar = TargetChar;
	params.newValue = newValue;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.GetEndBossColor
// ()
// Parameters:
// class AActor*                  WorldContextActor              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEndBoss_FunctionObject_C::GetEndBossColor(class AActor* WorldContextActor, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.GetEndBossColor");

	UEndBoss_FunctionObject_C_GetEndBossColor_Params params;
	params.WorldContextActor = WorldContextActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.Get EndBoss Difficulty
// ()
// Parameters:
// class AActor*                  WorldContextActor              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBossDifficulty_Enum> difficulty                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEndBoss_FunctionObject_C::Get_EndBoss_Difficulty(class AActor* WorldContextActor, TEnumAsByte<EBossDifficulty_Enum>* difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.Get EndBoss Difficulty");

	UEndBoss_FunctionObject_C_Get_EndBoss_Difficulty_Params params;
	params.WorldContextActor = WorldContextActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (difficulty != nullptr)
		*difficulty = params.difficulty;
}


// Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.Decrement Character Material Param
// ()
// Parameters:
// class AActor*                  ActorTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DissolveParam                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideDeltaTime              (Parm, ZeroConstructor, IsPlainOldData)
// float                          LastMaterialValue              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEndBoss_FunctionObject_C::Decrement_Character_Material_Param(class AActor* ActorTarget, float Rate, const struct FName& DissolveParam, float OverrideDeltaTime, float* LastMaterialValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.Decrement Character Material Param");

	UEndBoss_FunctionObject_C_Decrement_Character_Material_Param_Params params;
	params.ActorTarget = ActorTarget;
	params.Rate = Rate;
	params.DissolveParam = DissolveParam;
	params.OverrideDeltaTime = OverrideDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastMaterialValue != nullptr)
		*LastMaterialValue = params.LastMaterialValue;
}


// Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.ExecuteUbergraph_EndBoss_FunctionObject
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEndBoss_FunctionObject_C::ExecuteUbergraph_EndBoss_FunctionObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_FunctionObject.EndBoss_FunctionObject_C.ExecuteUbergraph_EndBoss_FunctionObject");

	UEndBoss_FunctionObject_C_ExecuteUbergraph_EndBoss_FunctionObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
