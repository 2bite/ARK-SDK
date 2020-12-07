// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FullTekSuit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FullTekSuit.Buff_FullTekSuit_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_FullTekSuit_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FullTekSuit.Buff_FullTekSuit_C.BPPreventAddingOtherBuff");

	ABuff_FullTekSuit_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_FullTekSuit.Buff_FullTekSuit_C.UserConstructionScript
// ()

void ABuff_FullTekSuit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FullTekSuit.Buff_FullTekSuit_C.UserConstructionScript");

	ABuff_FullTekSuit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FullTekSuit.Buff_FullTekSuit_C.ExecuteUbergraph_Buff_FullTekSuit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FullTekSuit_C::ExecuteUbergraph_Buff_FullTekSuit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FullTekSuit.Buff_FullTekSuit_C.ExecuteUbergraph_Buff_FullTekSuit");

	ABuff_FullTekSuit_C_ExecuteUbergraph_Buff_FullTekSuit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
