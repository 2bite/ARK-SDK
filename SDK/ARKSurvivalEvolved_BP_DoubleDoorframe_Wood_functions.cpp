// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_DoubleDoorframe_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DoubleDoorframe_Wood.BP_DoubleDoorframe_Wood_C.UserConstructionScript
// ()

void ABP_DoubleDoorframe_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoubleDoorframe_Wood.BP_DoubleDoorframe_Wood_C.UserConstructionScript");

	ABP_DoubleDoorframe_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DoubleDoorframe_Wood.BP_DoubleDoorframe_Wood_C.ExecuteUbergraph_BP_DoubleDoorframe_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DoubleDoorframe_Wood_C::ExecuteUbergraph_BP_DoubleDoorframe_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoubleDoorframe_Wood.BP_DoubleDoorframe_Wood_C.ExecuteUbergraph_BP_DoubleDoorframe_Wood");

	ABP_DoubleDoorframe_Wood_C_ExecuteUbergraph_BP_DoubleDoorframe_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
