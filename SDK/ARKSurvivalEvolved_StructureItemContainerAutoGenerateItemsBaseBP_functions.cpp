// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureItemContainerAutoGenerateItemsBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureItemContainerAutoGenerateItemsBaseBP.StructureItemContainerAutoGenerateItemsBaseBP_C.UserConstructionScript
// ()

void AStructureItemContainerAutoGenerateItemsBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureItemContainerAutoGenerateItemsBaseBP.StructureItemContainerAutoGenerateItemsBaseBP_C.UserConstructionScript");

	AStructureItemContainerAutoGenerateItemsBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureItemContainerAutoGenerateItemsBaseBP.StructureItemContainerAutoGenerateItemsBaseBP_C.ExecuteUbergraph_StructureItemContainerAutoGenerateItemsBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureItemContainerAutoGenerateItemsBaseBP_C::ExecuteUbergraph_StructureItemContainerAutoGenerateItemsBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureItemContainerAutoGenerateItemsBaseBP.StructureItemContainerAutoGenerateItemsBaseBP_C.ExecuteUbergraph_StructureItemContainerAutoGenerateItemsBaseBP");

	AStructureItemContainerAutoGenerateItemsBaseBP_C_ExecuteUbergraph_StructureItemContainerAutoGenerateItemsBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
