// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_NPCZoneManagerBlueprint_Water_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NPCZoneManagerBlueprint_Water.NPCZoneManagerBlueprint_Water_C.UserConstructionScript
// ()

void ANPCZoneManagerBlueprint_Water_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCZoneManagerBlueprint_Water.NPCZoneManagerBlueprint_Water_C.UserConstructionScript");

	ANPCZoneManagerBlueprint_Water_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCZoneManagerBlueprint_Water.NPCZoneManagerBlueprint_Water_C.ExecuteUbergraph_NPCZoneManagerBlueprint_Water
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ANPCZoneManagerBlueprint_Water_C::ExecuteUbergraph_NPCZoneManagerBlueprint_Water(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCZoneManagerBlueprint_Water.NPCZoneManagerBlueprint_Water_C.ExecuteUbergraph_NPCZoneManagerBlueprint_Water");

	ANPCZoneManagerBlueprint_Water_C_ExecuteUbergraph_NPCZoneManagerBlueprint_Water_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
