// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NoFallDamage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_NoFallDamage.Buff_NoFallDamage_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NoFallDamage_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoFallDamage.Buff_NoFallDamage_C.BPDeactivated");

	ABuff_NoFallDamage_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NoFallDamage.Buff_NoFallDamage_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NoFallDamage_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoFallDamage.Buff_NoFallDamage_C.BPSetupForInstigator");

	ABuff_NoFallDamage_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NoFallDamage.Buff_NoFallDamage_C.UserConstructionScript
// ()

void ABuff_NoFallDamage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoFallDamage.Buff_NoFallDamage_C.UserConstructionScript");

	ABuff_NoFallDamage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NoFallDamage.Buff_NoFallDamage_C.ExecuteUbergraph_Buff_NoFallDamage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NoFallDamage_C::ExecuteUbergraph_Buff_NoFallDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoFallDamage.Buff_NoFallDamage_C.ExecuteUbergraph_Buff_NoFallDamage");

	ABuff_NoFallDamage_C_ExecuteUbergraph_Buff_NoFallDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
