// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructurePlacerBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructurePlacerBlueprint.StructurePlacerBlueprint_C.UserConstructionScript
// ()

void AStructurePlacerBlueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructurePlacerBlueprint.StructurePlacerBlueprint_C.UserConstructionScript");

	AStructurePlacerBlueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructurePlacerBlueprint.StructurePlacerBlueprint_C.ExecuteUbergraph_StructurePlacerBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructurePlacerBlueprint_C::ExecuteUbergraph_StructurePlacerBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructurePlacerBlueprint.StructurePlacerBlueprint_C.ExecuteUbergraph_StructurePlacerBlueprint");

	AStructurePlacerBlueprint_C_ExecuteUbergraph_StructurePlacerBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
