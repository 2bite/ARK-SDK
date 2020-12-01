// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureBaseBP.StructureBaseBP_C.UserConstructionScript
// ()

void AStructureBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBaseBP.StructureBaseBP_C.UserConstructionScript");

	AStructureBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBaseBP.StructureBaseBP_C.ExecuteUbergraph_StructureBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureBaseBP_C::ExecuteUbergraph_StructureBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBaseBP.StructureBaseBP_C.ExecuteUbergraph_StructureBaseBP");

	AStructureBaseBP_C_ExecuteUbergraph_StructureBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
