// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Emitter_Master_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Emitter_Master.BP_Emitter_Master_C.UserConstructionScript
// ()

void ABP_Emitter_Master_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Emitter_Master.BP_Emitter_Master_C.UserConstructionScript");

	ABP_Emitter_Master_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Emitter_Master.BP_Emitter_Master_C.ExecuteUbergraph_BP_Emitter_Master
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Emitter_Master_C::ExecuteUbergraph_BP_Emitter_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Emitter_Master.BP_Emitter_Master_C.ExecuteUbergraph_BP_Emitter_Master");

	ABP_Emitter_Master_C_ExecuteUbergraph_BP_Emitter_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
