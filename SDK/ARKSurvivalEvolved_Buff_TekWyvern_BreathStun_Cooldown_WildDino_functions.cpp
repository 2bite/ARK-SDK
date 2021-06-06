// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekWyvern_BreathStun_Cooldown_WildDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekWyvern_BreathStun_Cooldown_WildDino.Buff_TekWyvern_BreathStun_Cooldown_WildDino_C.UserConstructionScript
// ()

void ABuff_TekWyvern_BreathStun_Cooldown_WildDino_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvern_BreathStun_Cooldown_WildDino.Buff_TekWyvern_BreathStun_Cooldown_WildDino_C.UserConstructionScript");

	ABuff_TekWyvern_BreathStun_Cooldown_WildDino_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekWyvern_BreathStun_Cooldown_WildDino.Buff_TekWyvern_BreathStun_Cooldown_WildDino_C.ExecuteUbergraph_Buff_TekWyvern_BreathStun_Cooldown_WildDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekWyvern_BreathStun_Cooldown_WildDino_C::ExecuteUbergraph_Buff_TekWyvern_BreathStun_Cooldown_WildDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekWyvern_BreathStun_Cooldown_WildDino.Buff_TekWyvern_BreathStun_Cooldown_WildDino_C.ExecuteUbergraph_Buff_TekWyvern_BreathStun_Cooldown_WildDino");

	ABuff_TekWyvern_BreathStun_Cooldown_WildDino_C_ExecuteUbergraph_Buff_TekWyvern_BreathStun_Cooldown_WildDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
