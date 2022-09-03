// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Poop_Dinopithecus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.BPOnPreventedFiringDisabledWeapon
// ()
// Parameters:
// class AShooterWeapon**         weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreventingTag                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Poop_Dinopithecus_C::BPOnPreventedFiringDisabledWeapon(class AShooterWeapon** weapon, struct FName* PreventingTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.BPOnPreventedFiringDisabledWeapon");

	ABuff_Poop_Dinopithecus_C_BPOnPreventedFiringDisabledWeapon_Params params;
	params.weapon = weapon;
	params.PreventingTag = PreventingTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.BPPreventTekArmorBuffs
// ()
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> ABuff_Poop_Dinopithecus_C::BPPreventTekArmorBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.BPPreventTekArmorBuffs");

	ABuff_Poop_Dinopithecus_C_BPPreventTekArmorBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.UserConstructionScript
// ()

void ABuff_Poop_Dinopithecus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.UserConstructionScript");

	ABuff_Poop_Dinopithecus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.ExecuteUbergraph_Buff_Poop_Dinopithecus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Poop_Dinopithecus_C::ExecuteUbergraph_Buff_Poop_Dinopithecus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C.ExecuteUbergraph_Buff_Poop_Dinopithecus");

	ABuff_Poop_Dinopithecus_C_ExecuteUbergraph_Buff_Poop_Dinopithecus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
