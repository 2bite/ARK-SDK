// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StairSM_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StairSM_Tek.StairSM_Tek_C.UserConstructionScript
// ()

void AStairSM_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StairSM_Tek.StairSM_Tek_C.UserConstructionScript");

	AStairSM_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StairSM_Tek.StairSM_Tek_C.ExecuteUbergraph_StairSM_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStairSM_Tek_C::ExecuteUbergraph_StairSM_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StairSM_Tek.StairSM_Tek_C.ExecuteUbergraph_StairSM_Tek");

	AStairSM_Tek_C_ExecuteUbergraph_StairSM_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
