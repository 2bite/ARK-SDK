// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Melee_Impacts_Desmodus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Melee_Impacts_Desmodus.Melee_Impacts_Desmodus_C.UserConstructionScript
// ()

void AMelee_Impacts_Desmodus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Melee_Impacts_Desmodus.Melee_Impacts_Desmodus_C.UserConstructionScript");

	AMelee_Impacts_Desmodus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Melee_Impacts_Desmodus.Melee_Impacts_Desmodus_C.ExecuteUbergraph_Melee_Impacts_Desmodus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMelee_Impacts_Desmodus_C::ExecuteUbergraph_Melee_Impacts_Desmodus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Melee_Impacts_Desmodus.Melee_Impacts_Desmodus_C.ExecuteUbergraph_Melee_Impacts_Desmodus");

	AMelee_Impacts_Desmodus_C_ExecuteUbergraph_Melee_Impacts_Desmodus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
