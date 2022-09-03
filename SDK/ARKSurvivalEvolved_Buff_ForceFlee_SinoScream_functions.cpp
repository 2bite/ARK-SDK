// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ForceFlee_SinoScream_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.Restore Flee State
// ()

void ABuff_ForceFlee_SinoScream_C::Restore_Flee_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.Restore Flee State");

	ABuff_ForceFlee_SinoScream_C_Restore_Flee_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.Set Flee State
// ()

void ABuff_ForceFlee_SinoScream_C::Set_Flee_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.Set Flee State");

	ABuff_ForceFlee_SinoScream_C_Set_Flee_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.UserConstructionScript
// ()

void ABuff_ForceFlee_SinoScream_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.UserConstructionScript");

	ABuff_ForceFlee_SinoScream_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.ExecuteUbergraph_Buff_ForceFlee_SinoScream
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ForceFlee_SinoScream_C::ExecuteUbergraph_Buff_ForceFlee_SinoScream(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C.ExecuteUbergraph_Buff_ForceFlee_SinoScream");

	ABuff_ForceFlee_SinoScream_C_ExecuteUbergraph_Buff_ForceFlee_SinoScream_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
