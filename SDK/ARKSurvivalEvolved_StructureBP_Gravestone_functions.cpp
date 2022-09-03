// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_Gravestone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureBP_Gravestone.StructureBP_Gravestone_C.UserConstructionScript
// ()

void AStructureBP_Gravestone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Gravestone.StructureBP_Gravestone_C.UserConstructionScript");

	AStructureBP_Gravestone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_Gravestone.StructureBP_Gravestone_C.ExecuteUbergraph_StructureBP_Gravestone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureBP_Gravestone_C::ExecuteUbergraph_StructureBP_Gravestone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Gravestone.StructureBP_Gravestone_C.ExecuteUbergraph_StructureBP_Gravestone");

	AStructureBP_Gravestone_C_ExecuteUbergraph_StructureBP_Gravestone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
