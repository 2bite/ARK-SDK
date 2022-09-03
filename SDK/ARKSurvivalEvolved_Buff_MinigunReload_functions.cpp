// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MinigunReload_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MinigunReload.Buff_MinigunReload_C.UserConstructionScript
// ()

void ABuff_MinigunReload_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunReload.Buff_MinigunReload_C.UserConstructionScript");

	ABuff_MinigunReload_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MinigunReload.Buff_MinigunReload_C.ExecuteUbergraph_Buff_MinigunReload
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MinigunReload_C::ExecuteUbergraph_Buff_MinigunReload(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunReload.Buff_MinigunReload_C.ExecuteUbergraph_Buff_MinigunReload");

	ABuff_MinigunReload_C_ExecuteUbergraph_Buff_MinigunReload_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
