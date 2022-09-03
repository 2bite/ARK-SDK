// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OnFire_Amarga_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_OnFire_Amarga_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.BPCustomAllowAddBuff");

	ABuff_OnFire_Amarga_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OnFire_Amarga_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.ReceiveTick");

	ABuff_OnFire_Amarga_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_OnFire_Amarga_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.BPPreventAddingOtherBuff");

	ABuff_OnFire_Amarga_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.UserConstructionScript
// ()

void ABuff_OnFire_Amarga_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.UserConstructionScript");

	ABuff_OnFire_Amarga_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.ExecuteUbergraph_Buff_OnFire_Amarga
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OnFire_Amarga_C::ExecuteUbergraph_Buff_OnFire_Amarga(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OnFire_Amarga.Buff_OnFire_Amarga_C.ExecuteUbergraph_Buff_OnFire_Amarga");

	ABuff_OnFire_Amarga_C_ExecuteUbergraph_Buff_OnFire_Amarga_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
