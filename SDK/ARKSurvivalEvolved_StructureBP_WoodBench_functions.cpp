// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_WoodBench_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureBP_WoodBench.StructureBP_WoodBench_C.UserConstructionScript
// ()

void AStructureBP_WoodBench_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_WoodBench.StructureBP_WoodBench_C.UserConstructionScript");

	AStructureBP_WoodBench_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_WoodBench.StructureBP_WoodBench_C.ExecuteUbergraph_StructureBP_WoodBench
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureBP_WoodBench_C::ExecuteUbergraph_StructureBP_WoodBench(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_WoodBench.StructureBP_WoodBench_C.ExecuteUbergraph_StructureBP_WoodBench");

	AStructureBP_WoodBench_C_ExecuteUbergraph_StructureBP_WoodBench_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
