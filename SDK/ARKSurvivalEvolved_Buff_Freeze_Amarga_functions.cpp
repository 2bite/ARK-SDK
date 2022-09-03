// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Freeze_Amarga_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Freeze_Amarga_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BPDeactivated");

	ABuff_Freeze_Amarga_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Freeze_Amarga_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BPPreventAddingOtherBuff");

	ABuff_Freeze_Amarga_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.MeleeIncFreeze
// ()

void ABuff_Freeze_Amarga_C::MeleeIncFreeze()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.MeleeIncFreeze");

	ABuff_Freeze_Amarga_C_MeleeIncFreeze_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Freeze_Amarga_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BuffTickServer");

	ABuff_Freeze_Amarga_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.UpdateBuffDescription
// (NetReliable, Native, Event, Static, MulticastDelegate, Protected, NetServer, NetClient, BlueprintEvent)

void ABuff_Freeze_Amarga_C::STATIC_UpdateBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.UpdateBuffDescription");

	ABuff_Freeze_Amarga_C_UpdateBuffDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Freeze_Amarga_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BuffTickClient");

	ABuff_Freeze_Amarga_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.UserConstructionScript
// ()

void ABuff_Freeze_Amarga_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.UserConstructionScript");

	ABuff_Freeze_Amarga_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.ExecuteUbergraph_Buff_Freeze_Amarga
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Freeze_Amarga_C::ExecuteUbergraph_Buff_Freeze_Amarga(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.ExecuteUbergraph_Buff_Freeze_Amarga");

	ABuff_Freeze_Amarga_C_ExecuteUbergraph_Buff_Freeze_Amarga_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
