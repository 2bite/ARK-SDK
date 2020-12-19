// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_NPCZoneManagerBlueprint_Cave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NPCZoneManagerBlueprint_Cave.NPCZoneManagerBlueprint_Cave_C.UserConstructionScript
// ()

void ANPCZoneManagerBlueprint_Cave_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCZoneManagerBlueprint_Cave.NPCZoneManagerBlueprint_Cave_C.UserConstructionScript");

	ANPCZoneManagerBlueprint_Cave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCZoneManagerBlueprint_Cave.NPCZoneManagerBlueprint_Cave_C.ExecuteUbergraph_NPCZoneManagerBlueprint_Cave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ANPCZoneManagerBlueprint_Cave_C::ExecuteUbergraph_NPCZoneManagerBlueprint_Cave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCZoneManagerBlueprint_Cave.NPCZoneManagerBlueprint_Cave_C.ExecuteUbergraph_NPCZoneManagerBlueprint_Cave");

	ANPCZoneManagerBlueprint_Cave_C_ExecuteUbergraph_NPCZoneManagerBlueprint_Cave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
