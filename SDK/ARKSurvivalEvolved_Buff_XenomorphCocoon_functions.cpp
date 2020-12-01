// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_XenomorphCocoon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_XenomorphCocoon.Buff_XenomorphCocoon_C.BPPreventflight
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_XenomorphCocoon_C::BPPreventflight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XenomorphCocoon.Buff_XenomorphCocoon_C.BPPreventflight");

	ABuff_XenomorphCocoon_C_BPPreventflight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_XenomorphCocoon.Buff_XenomorphCocoon_C.UserConstructionScript
// ()

void ABuff_XenomorphCocoon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XenomorphCocoon.Buff_XenomorphCocoon_C.UserConstructionScript");

	ABuff_XenomorphCocoon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_XenomorphCocoon.Buff_XenomorphCocoon_C.ReceiveBeginPlay
// ()

void ABuff_XenomorphCocoon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XenomorphCocoon.Buff_XenomorphCocoon_C.ReceiveBeginPlay");

	ABuff_XenomorphCocoon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_XenomorphCocoon.Buff_XenomorphCocoon_C.ExecuteUbergraph_Buff_XenomorphCocoon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_XenomorphCocoon_C::ExecuteUbergraph_Buff_XenomorphCocoon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XenomorphCocoon.Buff_XenomorphCocoon_C.ExecuteUbergraph_Buff_XenomorphCocoon");

	ABuff_XenomorphCocoon_C_ExecuteUbergraph_Buff_XenomorphCocoon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
