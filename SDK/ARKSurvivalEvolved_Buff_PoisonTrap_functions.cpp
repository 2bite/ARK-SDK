// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PoisonTrap.Buff_PoisonTrap_C.UserConstructionScript
// ()

void ABuff_PoisonTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonTrap.Buff_PoisonTrap_C.UserConstructionScript");

	ABuff_PoisonTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonTrap.Buff_PoisonTrap_C.ExecuteUbergraph_Buff_PoisonTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonTrap_C::ExecuteUbergraph_Buff_PoisonTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonTrap.Buff_PoisonTrap_C.ExecuteUbergraph_Buff_PoisonTrap");

	ABuff_PoisonTrap_C_ExecuteUbergraph_Buff_PoisonTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
