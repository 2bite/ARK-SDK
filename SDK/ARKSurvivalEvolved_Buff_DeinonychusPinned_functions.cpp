// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DeinonychusPinned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DeinonychusPinned.Buff_DeinonychusPinned_C.BPInstigatorSleeped
// ()
// Parameters:
// bool*                          bIsSleeped                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DeinonychusPinned_C::BPInstigatorSleeped(bool* bIsSleeped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DeinonychusPinned.Buff_DeinonychusPinned_C.BPInstigatorSleeped");

	ABuff_DeinonychusPinned_C_BPInstigatorSleeped_Params params;
	params.bIsSleeped = bIsSleeped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DeinonychusPinned.Buff_DeinonychusPinned_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_DeinonychusPinned_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DeinonychusPinned.Buff_DeinonychusPinned_C.BPPreventFirstPerson");

	ABuff_DeinonychusPinned_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_DeinonychusPinned.Buff_DeinonychusPinned_C.UserConstructionScript
// ()

void ABuff_DeinonychusPinned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DeinonychusPinned.Buff_DeinonychusPinned_C.UserConstructionScript");

	ABuff_DeinonychusPinned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DeinonychusPinned.Buff_DeinonychusPinned_C.ExecuteUbergraph_Buff_DeinonychusPinned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DeinonychusPinned_C::ExecuteUbergraph_Buff_DeinonychusPinned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DeinonychusPinned.Buff_DeinonychusPinned_C.ExecuteUbergraph_Buff_DeinonychusPinned");

	ABuff_DeinonychusPinned_C_ExecuteUbergraph_Buff_DeinonychusPinned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
