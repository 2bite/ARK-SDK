// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_XenomorphAcid_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_XenomorphAcid.Buff_XenomorphAcid_C.UserConstructionScript
// ()

void ABuff_XenomorphAcid_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XenomorphAcid.Buff_XenomorphAcid_C.UserConstructionScript");

	ABuff_XenomorphAcid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_XenomorphAcid.Buff_XenomorphAcid_C.ExecuteUbergraph_Buff_XenomorphAcid
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_XenomorphAcid_C::ExecuteUbergraph_Buff_XenomorphAcid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XenomorphAcid.Buff_XenomorphAcid_C.ExecuteUbergraph_Buff_XenomorphAcid");

	ABuff_XenomorphAcid_C_ExecuteUbergraph_Buff_XenomorphAcid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
