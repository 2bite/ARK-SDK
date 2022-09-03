// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TrikeStun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TrikeStun.Buff_TrikeStun_C.UserConstructionScript
// ()

void ABuff_TrikeStun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrikeStun.Buff_TrikeStun_C.UserConstructionScript");

	ABuff_TrikeStun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TrikeStun.Buff_TrikeStun_C.ExecuteUbergraph_Buff_TrikeStun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TrikeStun_C::ExecuteUbergraph_Buff_TrikeStun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TrikeStun.Buff_TrikeStun_C.ExecuteUbergraph_Buff_TrikeStun");

	ABuff_TrikeStun_C_ExecuteUbergraph_Buff_TrikeStun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
