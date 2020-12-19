// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BearTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BearTrap.BearTrap_C.UserConstructionScript
// ()

void ABearTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BearTrap.BearTrap_C.UserConstructionScript");

	ABearTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BearTrap.BearTrap_C.ExecuteUbergraph_BearTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABearTrap_C::ExecuteUbergraph_BearTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BearTrap.BearTrap_C.ExecuteUbergraph_BearTrap");

	ABearTrap_C_ExecuteUbergraph_BearTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
