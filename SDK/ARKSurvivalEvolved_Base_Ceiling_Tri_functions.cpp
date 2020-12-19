// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Ceiling_Tri_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_Ceiling_Tri.Base_Ceiling_Tri_C.UserConstructionScript
// ()

void ABase_Ceiling_Tri_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Ceiling_Tri.Base_Ceiling_Tri_C.UserConstructionScript");

	ABase_Ceiling_Tri_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Ceiling_Tri.Base_Ceiling_Tri_C.ExecuteUbergraph_Base_Ceiling_Tri
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Ceiling_Tri_C::ExecuteUbergraph_Base_Ceiling_Tri(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Ceiling_Tri.Base_Ceiling_Tri_C.ExecuteUbergraph_Base_Ceiling_Tri");

	ABase_Ceiling_Tri_C_ExecuteUbergraph_Base_Ceiling_Tri_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
