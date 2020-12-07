// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PhoenixAsh_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PhoenixAsh.Buff_PhoenixAsh_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PhoenixAsh_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PhoenixAsh.Buff_PhoenixAsh_C.BPPreventAddingOtherBuff");

	ABuff_PhoenixAsh_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PhoenixAsh.Buff_PhoenixAsh_C.PreventActorTargeting
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PhoenixAsh_C::PreventActorTargeting(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PhoenixAsh.Buff_PhoenixAsh_C.PreventActorTargeting");

	ABuff_PhoenixAsh_C_PreventActorTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PhoenixAsh.Buff_PhoenixAsh_C.UserConstructionScript
// ()

void ABuff_PhoenixAsh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PhoenixAsh.Buff_PhoenixAsh_C.UserConstructionScript");

	ABuff_PhoenixAsh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PhoenixAsh.Buff_PhoenixAsh_C.ExecuteUbergraph_Buff_PhoenixAsh
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PhoenixAsh_C::ExecuteUbergraph_Buff_PhoenixAsh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PhoenixAsh.Buff_PhoenixAsh_C.ExecuteUbergraph_Buff_PhoenixAsh");

	ABuff_PhoenixAsh_C_ExecuteUbergraph_Buff_PhoenixAsh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
