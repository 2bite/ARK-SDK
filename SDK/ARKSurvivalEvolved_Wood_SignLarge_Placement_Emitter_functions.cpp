// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wood_SignLarge_Placement_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wood_SignLarge_Placement_Emitter.Wood_SignLarge_Placement_Emitter_C.UserConstructionScript
// ()

void AWood_SignLarge_Placement_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wood_SignLarge_Placement_Emitter.Wood_SignLarge_Placement_Emitter_C.UserConstructionScript");

	AWood_SignLarge_Placement_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wood_SignLarge_Placement_Emitter.Wood_SignLarge_Placement_Emitter_C.ExecuteUbergraph_Wood_SignLarge_Placement_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWood_SignLarge_Placement_Emitter_C::ExecuteUbergraph_Wood_SignLarge_Placement_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wood_SignLarge_Placement_Emitter.Wood_SignLarge_Placement_Emitter_C.ExecuteUbergraph_Wood_SignLarge_Placement_Emitter");

	AWood_SignLarge_Placement_Emitter_C_ExecuteUbergraph_Wood_SignLarge_Placement_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
