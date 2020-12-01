// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StairSM_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StairSM_Stone.StairSM_Stone_C.UserConstructionScript
// ()

void AStairSM_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StairSM_Stone.StairSM_Stone_C.UserConstructionScript");

	AStairSM_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StairSM_Stone.StairSM_Stone_C.ExecuteUbergraph_StairSM_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStairSM_Stone_C::ExecuteUbergraph_StairSM_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StairSM_Stone.StairSM_Stone_C.ExecuteUbergraph_StairSM_Stone");

	AStairSM_Stone_C_ExecuteUbergraph_StairSM_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
