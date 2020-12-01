// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_Wardrums_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureBP_Wardrums.StructureBP_Wardrums_C.UserConstructionScript
// ()

void AStructureBP_Wardrums_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Wardrums.StructureBP_Wardrums_C.UserConstructionScript");

	AStructureBP_Wardrums_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_Wardrums.StructureBP_Wardrums_C.ExecuteUbergraph_StructureBP_Wardrums
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureBP_Wardrums_C::ExecuteUbergraph_StructureBP_Wardrums(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Wardrums.StructureBP_Wardrums_C.ExecuteUbergraph_StructureBP_Wardrums");

	AStructureBP_Wardrums_C_ExecuteUbergraph_StructureBP_Wardrums_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
