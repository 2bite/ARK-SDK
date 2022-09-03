// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureItemContainerBaseBP_VisualItems_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureItemContainerBaseBP_VisualItems.StructureItemContainerBaseBP_VisualItems_C.UserConstructionScript
// ()

void AStructureItemContainerBaseBP_VisualItems_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureItemContainerBaseBP_VisualItems.StructureItemContainerBaseBP_VisualItems_C.UserConstructionScript");

	AStructureItemContainerBaseBP_VisualItems_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureItemContainerBaseBP_VisualItems.StructureItemContainerBaseBP_VisualItems_C.ExecuteUbergraph_StructureItemContainerBaseBP_VisualItems
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureItemContainerBaseBP_VisualItems_C::ExecuteUbergraph_StructureItemContainerBaseBP_VisualItems(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureItemContainerBaseBP_VisualItems.StructureItemContainerBaseBP_VisualItems_C.ExecuteUbergraph_StructureItemContainerBaseBP_VisualItems");

	AStructureItemContainerBaseBP_VisualItems_C_ExecuteUbergraph_StructureItemContainerBaseBP_VisualItems_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
