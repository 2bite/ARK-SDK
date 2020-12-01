// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AntiRad_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AntiRad.Buff_AntiRad_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_AntiRad_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AntiRad.Buff_AntiRad_C.BPPreventAddingOtherBuff");

	ABuff_AntiRad_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_AntiRad.Buff_AntiRad_C.UserConstructionScript
// ()

void ABuff_AntiRad_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AntiRad.Buff_AntiRad_C.UserConstructionScript");

	ABuff_AntiRad_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AntiRad.Buff_AntiRad_C.ExecuteUbergraph_Buff_AntiRad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AntiRad_C::ExecuteUbergraph_Buff_AntiRad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AntiRad.Buff_AntiRad_C.ExecuteUbergraph_Buff_AntiRad");

	ABuff_AntiRad_C_ExecuteUbergraph_Buff_AntiRad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
