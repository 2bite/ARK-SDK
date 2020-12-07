// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AberrationBury_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AberrationBury.Buff_AberrationBury_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_AberrationBury_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationBury.Buff_AberrationBury_C.BPPreventFirstPerson");

	ABuff_AberrationBury_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_AberrationBury.Buff_AberrationBury_C.PreventActorTargeting
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_AberrationBury_C::PreventActorTargeting(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationBury.Buff_AberrationBury_C.PreventActorTargeting");

	ABuff_AberrationBury_C_PreventActorTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_AberrationBury.Buff_AberrationBury_C.UserConstructionScript
// ()

void ABuff_AberrationBury_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationBury.Buff_AberrationBury_C.UserConstructionScript");

	ABuff_AberrationBury_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AberrationBury.Buff_AberrationBury_C.ExecuteUbergraph_Buff_AberrationBury
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AberrationBury_C::ExecuteUbergraph_Buff_AberrationBury(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AberrationBury.Buff_AberrationBury_C.ExecuteUbergraph_Buff_AberrationBury");

	ABuff_AberrationBury_C_ExecuteUbergraph_Buff_AberrationBury_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
