// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.GetDamageClass
// ()
// Parameters:
// class UClass*                  DamageClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_Base_C::GetDamageClass(class UClass** DamageClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.GetDamageClass");

	UDinoAttackState_Spindles_Base_C_GetDamageClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageClass != nullptr)
		*DamageClass = params.DamageClass;
}


// Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.IsMinigunMode
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_Base_C::IsMinigunMode(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.IsMinigunMode");

	UDinoAttackState_Spindles_Base_C_IsMinigunMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.IsAIControlled
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_Base_C::IsAIControlled(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.IsAIControlled");

	UDinoAttackState_Spindles_Base_C_IsAIControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.ExecuteUbergraph_DinoAttackState_Spindles_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_Base_C::ExecuteUbergraph_DinoAttackState_Spindles_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_Base.DinoAttackState_Spindles_Base_C.ExecuteUbergraph_DinoAttackState_Spindles_Base");

	UDinoAttackState_Spindles_Base_C_ExecuteUbergraph_DinoAttackState_Spindles_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
