// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ladder_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ladder_Tek.Ladder_Tek_C.UserConstructionScript
// ()

void ALadder_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ladder_Tek.Ladder_Tek_C.UserConstructionScript");

	ALadder_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ladder_Tek.Ladder_Tek_C.ExecuteUbergraph_Ladder_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALadder_Tek_C::ExecuteUbergraph_Ladder_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ladder_Tek.Ladder_Tek_C.ExecuteUbergraph_Ladder_Tek");

	ALadder_Tek_C_ExecuteUbergraph_Ladder_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
