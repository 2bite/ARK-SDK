// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PoisonTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PoisonTrap.PoisonTrap_C.UserConstructionScript
// ()

void APoisonTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTrap.PoisonTrap_C.UserConstructionScript");

	APoisonTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonTrap.PoisonTrap_C.ExecuteUbergraph_PoisonTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APoisonTrap_C::ExecuteUbergraph_PoisonTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTrap.PoisonTrap_C.ExecuteUbergraph_PoisonTrap");

	APoisonTrap_C_ExecuteUbergraph_PoisonTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
