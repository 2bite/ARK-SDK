// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_plantY_Placement_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function plantY_Placement_Emitter.plantY_Placement_Emitter_C.UserConstructionScript
// ()

void AplantY_Placement_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function plantY_Placement_Emitter.plantY_Placement_Emitter_C.UserConstructionScript");

	AplantY_Placement_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function plantY_Placement_Emitter.plantY_Placement_Emitter_C.ExecuteUbergraph_plantY_Placement_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AplantY_Placement_Emitter_C::ExecuteUbergraph_plantY_Placement_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function plantY_Placement_Emitter.plantY_Placement_Emitter_C.ExecuteUbergraph_plantY_Placement_Emitter");

	AplantY_Placement_Emitter_C_ExecuteUbergraph_plantY_Placement_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
