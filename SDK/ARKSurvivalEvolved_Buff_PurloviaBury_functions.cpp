// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PurloviaBury_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PurloviaBury.Buff_PurloviaBury_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PurloviaBury_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PurloviaBury.Buff_PurloviaBury_C.BPPreventAddingOtherBuff");

	ABuff_PurloviaBury_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PurloviaBury.Buff_PurloviaBury_C.PreventActorTargeting
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PurloviaBury_C::PreventActorTargeting(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PurloviaBury.Buff_PurloviaBury_C.PreventActorTargeting");

	ABuff_PurloviaBury_C_PreventActorTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PurloviaBury.Buff_PurloviaBury_C.UserConstructionScript
// ()

void ABuff_PurloviaBury_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PurloviaBury.Buff_PurloviaBury_C.UserConstructionScript");

	ABuff_PurloviaBury_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PurloviaBury.Buff_PurloviaBury_C.ExecuteUbergraph_Buff_PurloviaBury
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PurloviaBury_C::ExecuteUbergraph_Buff_PurloviaBury(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PurloviaBury.Buff_PurloviaBury_C.ExecuteUbergraph_Buff_PurloviaBury");

	ABuff_PurloviaBury_C_ExecuteUbergraph_Buff_PurloviaBury_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
