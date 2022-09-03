// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tek_UnderwaterBase_Placement_Emitter2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tek_UnderwaterBase_Placement_Emitter2.Tek_UnderwaterBase_Placement_Emitter2_C.UserConstructionScript
// ()

void ATek_UnderwaterBase_Placement_Emitter2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_UnderwaterBase_Placement_Emitter2.Tek_UnderwaterBase_Placement_Emitter2_C.UserConstructionScript");

	ATek_UnderwaterBase_Placement_Emitter2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tek_UnderwaterBase_Placement_Emitter2.Tek_UnderwaterBase_Placement_Emitter2_C.ExecuteUbergraph_Tek_UnderwaterBase_Placement_Emitter2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATek_UnderwaterBase_Placement_Emitter2_C::ExecuteUbergraph_Tek_UnderwaterBase_Placement_Emitter2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_UnderwaterBase_Placement_Emitter2.Tek_UnderwaterBase_Placement_Emitter2_C.ExecuteUbergraph_Tek_UnderwaterBase_Placement_Emitter2");

	ATek_UnderwaterBase_Placement_Emitter2_C_ExecuteUbergraph_Tek_UnderwaterBase_Placement_Emitter2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
