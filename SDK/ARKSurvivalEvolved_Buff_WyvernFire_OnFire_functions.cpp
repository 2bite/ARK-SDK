// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WyvernFire_OnFire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WyvernFire_OnFire_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.ReceiveTick");

	ABuff_WyvernFire_OnFire_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_WyvernFire_OnFire_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.BPCustomAllowAddBuff");

	ABuff_WyvernFire_OnFire_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.UserConstructionScript
// ()

void ABuff_WyvernFire_OnFire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.UserConstructionScript");

	ABuff_WyvernFire_OnFire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.ExecuteUbergraph_Buff_WyvernFire_OnFire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WyvernFire_OnFire_C::ExecuteUbergraph_Buff_WyvernFire_OnFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C.ExecuteUbergraph_Buff_WyvernFire_OnFire");

	ABuff_WyvernFire_OnFire_C_ExecuteUbergraph_Buff_WyvernFire_OnFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
