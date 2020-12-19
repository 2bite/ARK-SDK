// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DireWolfPackLeader_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DireWolfPackLeader.Buff_DireWolfPackLeader_C.UserConstructionScript
// ()

void ABuff_DireWolfPackLeader_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DireWolfPackLeader.Buff_DireWolfPackLeader_C.UserConstructionScript");

	ABuff_DireWolfPackLeader_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DireWolfPackLeader.Buff_DireWolfPackLeader_C.ExecuteUbergraph_Buff_DireWolfPackLeader
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DireWolfPackLeader_C::ExecuteUbergraph_Buff_DireWolfPackLeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DireWolfPackLeader.Buff_DireWolfPackLeader_C.ExecuteUbergraph_Buff_DireWolfPackLeader");

	ABuff_DireWolfPackLeader_C_ExecuteUbergraph_Buff_DireWolfPackLeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
