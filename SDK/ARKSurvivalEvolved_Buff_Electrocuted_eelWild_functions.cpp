// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Electrocuted_eelWild_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Electrocuted_eelWild.Buff_Electrocuted_eelWild_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Electrocuted_eelWild_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_eelWild.Buff_Electrocuted_eelWild_C.BPPreSetupForInstigator");

	ABuff_Electrocuted_eelWild_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Electrocuted_eelWild.Buff_Electrocuted_eelWild_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Electrocuted_eelWild_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_eelWild.Buff_Electrocuted_eelWild_C.BPSetupForInstigator");

	ABuff_Electrocuted_eelWild_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Electrocuted_eelWild.Buff_Electrocuted_eelWild_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Electrocuted_eelWild_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_eelWild.Buff_Electrocuted_eelWild_C.BPDeactivated");

	ABuff_Electrocuted_eelWild_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Electrocuted_eelWild.Buff_Electrocuted_eelWild_C.UserConstructionScript
// ()

void ABuff_Electrocuted_eelWild_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_eelWild.Buff_Electrocuted_eelWild_C.UserConstructionScript");

	ABuff_Electrocuted_eelWild_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Electrocuted_eelWild.Buff_Electrocuted_eelWild_C.ExecuteUbergraph_Buff_Electrocuted_eelWild
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Electrocuted_eelWild_C::ExecuteUbergraph_Buff_Electrocuted_eelWild(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_eelWild.Buff_Electrocuted_eelWild_C.ExecuteUbergraph_Buff_Electrocuted_eelWild");

	ABuff_Electrocuted_eelWild_C_ExecuteUbergraph_Buff_Electrocuted_eelWild_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
