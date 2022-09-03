// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PostWhip_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PostWhip.Buff_PostWhip_C.UserConstructionScript
// ()

void ABuff_PostWhip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PostWhip.Buff_PostWhip_C.UserConstructionScript");

	ABuff_PostWhip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PostWhip.Buff_PostWhip_C.ExecuteUbergraph_Buff_PostWhip
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PostWhip_C::ExecuteUbergraph_Buff_PostWhip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PostWhip.Buff_PostWhip_C.ExecuteUbergraph_Buff_PostWhip");

	ABuff_PostWhip_C_ExecuteUbergraph_Buff_PostWhip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
