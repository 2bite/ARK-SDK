// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GiantTurtle_Oxygen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_GiantTurtle_Oxygen.Buff_GiantTurtle_Oxygen_C.UserConstructionScript
// ()

void ABuff_GiantTurtle_Oxygen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GiantTurtle_Oxygen.Buff_GiantTurtle_Oxygen_C.UserConstructionScript");

	ABuff_GiantTurtle_Oxygen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GiantTurtle_Oxygen.Buff_GiantTurtle_Oxygen_C.ExecuteUbergraph_Buff_GiantTurtle_Oxygen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GiantTurtle_Oxygen_C::ExecuteUbergraph_Buff_GiantTurtle_Oxygen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GiantTurtle_Oxygen.Buff_GiantTurtle_Oxygen_C.ExecuteUbergraph_Buff_GiantTurtle_Oxygen");

	ABuff_GiantTurtle_Oxygen_C_ExecuteUbergraph_Buff_GiantTurtle_Oxygen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
