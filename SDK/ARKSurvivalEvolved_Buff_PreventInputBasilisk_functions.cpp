// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventInputBasilisk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventInputBasilisk_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.BPDeactivated");

	ABuff_PreventInputBasilisk_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventInputBasilisk_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.BPSetupForInstigator");

	ABuff_PreventInputBasilisk_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PreventInputBasilisk_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.BPPreventFirstPerson");

	ABuff_PreventInputBasilisk_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.UserConstructionScript
// ()

void ABuff_PreventInputBasilisk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.UserConstructionScript");

	ABuff_PreventInputBasilisk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.ExecuteUbergraph_Buff_PreventInputBasilisk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventInputBasilisk_C::ExecuteUbergraph_Buff_PreventInputBasilisk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.ExecuteUbergraph_Buff_PreventInputBasilisk");

	ABuff_PreventInputBasilisk_C_ExecuteUbergraph_Buff_PreventInputBasilisk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
