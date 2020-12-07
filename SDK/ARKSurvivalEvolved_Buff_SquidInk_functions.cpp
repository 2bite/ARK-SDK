// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SquidInk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SquidInk.Buff_SquidInk_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SquidInk_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SquidInk.Buff_SquidInk_C.BPPreSetupForInstigator");

	ABuff_SquidInk_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SquidInk.Buff_SquidInk_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SquidInk_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SquidInk.Buff_SquidInk_C.BPDeactivated");

	ABuff_SquidInk_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SquidInk.Buff_SquidInk_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_SquidInk_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SquidInk.Buff_SquidInk_C.BPCustomAllowAddBuff");

	ABuff_SquidInk_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_SquidInk.Buff_SquidInk_C.UserConstructionScript
// ()

void ABuff_SquidInk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SquidInk.Buff_SquidInk_C.UserConstructionScript");

	ABuff_SquidInk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SquidInk.Buff_SquidInk_C.ExecuteUbergraph_Buff_SquidInk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SquidInk_C::ExecuteUbergraph_Buff_SquidInk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SquidInk.Buff_SquidInk_C.ExecuteUbergraph_Buff_SquidInk");

	ABuff_SquidInk_C_ExecuteUbergraph_Buff_SquidInk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
