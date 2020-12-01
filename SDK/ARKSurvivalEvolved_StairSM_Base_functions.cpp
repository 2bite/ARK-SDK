// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StairSM_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StairSM_Base.StairSM_Base_C.UserConstructionScript
// ()

void AStairSM_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StairSM_Base.StairSM_Base_C.UserConstructionScript");

	AStairSM_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StairSM_Base.StairSM_Base_C.ExecuteUbergraph_StairSM_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStairSM_Base_C::ExecuteUbergraph_StairSM_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StairSM_Base.StairSM_Base_C.ExecuteUbergraph_StairSM_Base");

	AStairSM_Base_C_ExecuteUbergraph_StairSM_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
