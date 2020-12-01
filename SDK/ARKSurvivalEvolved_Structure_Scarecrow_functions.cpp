// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_Scarecrow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_Scarecrow.Structure_Scarecrow_C.UserConstructionScript
// ()

void AStructure_Scarecrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_Scarecrow.Structure_Scarecrow_C.UserConstructionScript");

	AStructure_Scarecrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_Scarecrow.Structure_Scarecrow_C.ExecuteUbergraph_Structure_Scarecrow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_Scarecrow_C::ExecuteUbergraph_Structure_Scarecrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_Scarecrow.Structure_Scarecrow_C.ExecuteUbergraph_Structure_Scarecrow");

	AStructure_Scarecrow_C_ExecuteUbergraph_Structure_Scarecrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
