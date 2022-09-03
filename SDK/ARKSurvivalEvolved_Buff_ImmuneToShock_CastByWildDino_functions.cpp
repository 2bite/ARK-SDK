// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImmuneToShock_CastByWildDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ImmuneToShock_CastByWildDino.Buff_ImmuneToShock_CastByWildDino_C.UserConstructionScript
// ()

void ABuff_ImmuneToShock_CastByWildDino_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToShock_CastByWildDino.Buff_ImmuneToShock_CastByWildDino_C.UserConstructionScript");

	ABuff_ImmuneToShock_CastByWildDino_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImmuneToShock_CastByWildDino.Buff_ImmuneToShock_CastByWildDino_C.ExecuteUbergraph_Buff_ImmuneToShock_CastByWildDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ImmuneToShock_CastByWildDino_C::ExecuteUbergraph_Buff_ImmuneToShock_CastByWildDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToShock_CastByWildDino.Buff_ImmuneToShock_CastByWildDino_C.ExecuteUbergraph_Buff_ImmuneToShock_CastByWildDino");

	ABuff_ImmuneToShock_CastByWildDino_C_ExecuteUbergraph_Buff_ImmuneToShock_CastByWildDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
