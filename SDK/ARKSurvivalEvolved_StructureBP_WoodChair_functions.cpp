// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_WoodChair_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureBP_WoodChair.StructureBP_WoodChair_C.UserConstructionScript
// ()

void AStructureBP_WoodChair_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_WoodChair.StructureBP_WoodChair_C.UserConstructionScript");

	AStructureBP_WoodChair_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_WoodChair.StructureBP_WoodChair_C.ExecuteUbergraph_StructureBP_WoodChair
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureBP_WoodChair_C::ExecuteUbergraph_StructureBP_WoodChair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_WoodChair.StructureBP_WoodChair_C.ExecuteUbergraph_StructureBP_WoodChair");

	AStructureBP_WoodChair_C_ExecuteUbergraph_StructureBP_WoodChair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
