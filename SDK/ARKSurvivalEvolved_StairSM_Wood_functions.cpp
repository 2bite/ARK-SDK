// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StairSM_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StairSM_Wood.StairSM_Wood_C.UserConstructionScript
// ()

void AStairSM_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StairSM_Wood.StairSM_Wood_C.UserConstructionScript");

	AStairSM_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StairSM_Wood.StairSM_Wood_C.ExecuteUbergraph_StairSM_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStairSM_Wood_C::ExecuteUbergraph_StairSM_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StairSM_Wood.StairSM_Wood_C.ExecuteUbergraph_StairSM_Wood");

	AStairSM_Wood_C_ExecuteUbergraph_StairSM_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
