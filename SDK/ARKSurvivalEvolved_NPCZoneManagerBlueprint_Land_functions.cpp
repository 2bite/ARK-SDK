// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_NPCZoneManagerBlueprint_Land_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NPCZoneManagerBlueprint_Land.NPCZoneManagerBlueprint_Land_C.UserConstructionScript
// ()

void ANPCZoneManagerBlueprint_Land_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCZoneManagerBlueprint_Land.NPCZoneManagerBlueprint_Land_C.UserConstructionScript");

	ANPCZoneManagerBlueprint_Land_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCZoneManagerBlueprint_Land.NPCZoneManagerBlueprint_Land_C.ExecuteUbergraph_NPCZoneManagerBlueprint_Land
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ANPCZoneManagerBlueprint_Land_C::ExecuteUbergraph_NPCZoneManagerBlueprint_Land(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCZoneManagerBlueprint_Land.NPCZoneManagerBlueprint_Land_C.ExecuteUbergraph_NPCZoneManagerBlueprint_Land");

	ANPCZoneManagerBlueprint_Land_C_ExecuteUbergraph_NPCZoneManagerBlueprint_Land_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
