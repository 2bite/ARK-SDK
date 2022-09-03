// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RageEffect_RareFlower_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RageEffect_RareFlower.Buff_RageEffect_RareFlower_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RageEffect_RareFlower_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RageEffect_RareFlower.Buff_RageEffect_RareFlower_C.BPCustomAllowAddBuff");

	ABuff_RageEffect_RareFlower_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RageEffect_RareFlower.Buff_RageEffect_RareFlower_C.UserConstructionScript
// ()

void ABuff_RageEffect_RareFlower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RageEffect_RareFlower.Buff_RageEffect_RareFlower_C.UserConstructionScript");

	ABuff_RageEffect_RareFlower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RageEffect_RareFlower.Buff_RageEffect_RareFlower_C.ExecuteUbergraph_Buff_RageEffect_RareFlower
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RageEffect_RareFlower_C::ExecuteUbergraph_Buff_RageEffect_RareFlower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RageEffect_RareFlower.Buff_RageEffect_RareFlower_C.ExecuteUbergraph_Buff_RageEffect_RareFlower");

	ABuff_RageEffect_RareFlower_C_ExecuteUbergraph_Buff_RageEffect_RareFlower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
