// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistol_StunResist_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekPistol_StunResist_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C.BPPreventAddingOtherBuff");

	ABuff_TekPistol_StunResist_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C.UserConstructionScript
// ()

void ABuff_TekPistol_StunResist_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C.UserConstructionScript");

	ABuff_TekPistol_StunResist_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C.ExecuteUbergraph_Buff_TekPistol_StunResist
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekPistol_StunResist_C::ExecuteUbergraph_Buff_TekPistol_StunResist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C.ExecuteUbergraph_Buff_TekPistol_StunResist");

	ABuff_TekPistol_StunResist_C_ExecuteUbergraph_Buff_TekPistol_StunResist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
