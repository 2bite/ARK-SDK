// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekWyvern_BreathStun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.BPOverrideBuffToGiveOnDeactivation
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABuff_TekWyvern_BreathStun_C::BPOverrideBuffToGiveOnDeactivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.BPOverrideBuffToGiveOnDeactivation");

	ABuff_TekWyvern_BreathStun_C_BPOverrideBuffToGiveOnDeactivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekWyvern_BreathStun_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.BPCustomAllowAddBuff");

	ABuff_TekWyvern_BreathStun_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.UserConstructionScript
// ()

void ABuff_TekWyvern_BreathStun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.UserConstructionScript");

	ABuff_TekWyvern_BreathStun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.ExecuteUbergraph_Buff_TekWyvern_BreathStun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekWyvern_BreathStun_C::ExecuteUbergraph_Buff_TekWyvern_BreathStun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C.ExecuteUbergraph_Buff_TekWyvern_BreathStun");

	ABuff_TekWyvern_BreathStun_C_ExecuteUbergraph_Buff_TekWyvern_BreathStun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
