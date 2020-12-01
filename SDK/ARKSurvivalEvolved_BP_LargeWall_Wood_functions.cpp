// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_LargeWall_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LargeWall_Wood.BP_LargeWall_Wood_C.UserConstructionScript
// ()

void ABP_LargeWall_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LargeWall_Wood.BP_LargeWall_Wood_C.UserConstructionScript");

	ABP_LargeWall_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LargeWall_Wood.BP_LargeWall_Wood_C.ExecuteUbergraph_BP_LargeWall_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeWall_Wood_C::ExecuteUbergraph_BP_LargeWall_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LargeWall_Wood.BP_LargeWall_Wood_C.ExecuteUbergraph_BP_LargeWall_Wood");

	ABP_LargeWall_Wood_C_ExecuteUbergraph_BP_LargeWall_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
