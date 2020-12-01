// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureBP_Gravestone_HW_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureBP_Gravestone_HW.StructureBP_Gravestone_HW_C.UserConstructionScript
// ()

void AStructureBP_Gravestone_HW_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Gravestone_HW.StructureBP_Gravestone_HW_C.UserConstructionScript");

	AStructureBP_Gravestone_HW_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureBP_Gravestone_HW.StructureBP_Gravestone_HW_C.ExecuteUbergraph_StructureBP_Gravestone_HW
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureBP_Gravestone_HW_C::ExecuteUbergraph_StructureBP_Gravestone_HW(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureBP_Gravestone_HW.StructureBP_Gravestone_HW_C.ExecuteUbergraph_StructureBP_Gravestone_HW");

	AStructureBP_Gravestone_HW_C_ExecuteUbergraph_StructureBP_Gravestone_HW_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
