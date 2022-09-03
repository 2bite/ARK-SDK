// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NoFallDamageOnStrider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.BPOnInstigatorMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NoFallDamageOnStrider_C::BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.BPOnInstigatorMovementModeChangedNotify");

	ABuff_NoFallDamageOnStrider_C_BPOnInstigatorMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_NoFallDamageOnStrider_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.BPCustomAllowAddBuff");

	ABuff_NoFallDamageOnStrider_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.UserConstructionScript
// ()

void ABuff_NoFallDamageOnStrider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.UserConstructionScript");

	ABuff_NoFallDamageOnStrider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.ExecuteUbergraph_Buff_NoFallDamageOnStrider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NoFallDamageOnStrider_C::ExecuteUbergraph_Buff_NoFallDamageOnStrider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C.ExecuteUbergraph_Buff_NoFallDamageOnStrider");

	ABuff_NoFallDamageOnStrider_C_ExecuteUbergraph_Buff_NoFallDamageOnStrider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
