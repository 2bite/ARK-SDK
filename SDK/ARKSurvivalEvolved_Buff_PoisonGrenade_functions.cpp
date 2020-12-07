// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonGrenade_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.BPPreSetupForInstigator");

	ABuff_PoisonGrenade_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonGrenade_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.BPDeactivated");

	ABuff_PoisonGrenade_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PoisonGrenade_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.BPCustomAllowAddBuff");

	ABuff_PoisonGrenade_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.UserConstructionScript
// ()

void ABuff_PoisonGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.UserConstructionScript");

	ABuff_PoisonGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.ExecuteUbergraph_Buff_PoisonGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonGrenade_C::ExecuteUbergraph_Buff_PoisonGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonGrenade.Buff_PoisonGrenade_C.ExecuteUbergraph_Buff_PoisonGrenade");

	ABuff_PoisonGrenade_C_ExecuteUbergraph_Buff_PoisonGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
