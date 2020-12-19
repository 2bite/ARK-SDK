// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Foundation_Tri_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_Foundation_Tri.Base_Foundation_Tri_C.IsValidSnapPointTo
// ()
// Parameters:
// class APrimalStructure**       childStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MySnapPointToIndex             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABase_Foundation_Tri_C::IsValidSnapPointTo(class APrimalStructure** childStructure, int* MySnapPointToIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Foundation_Tri.Base_Foundation_Tri_C.IsValidSnapPointTo");

	ABase_Foundation_Tri_C_IsValidSnapPointTo_Params params;
	params.childStructure = childStructure;
	params.MySnapPointToIndex = MySnapPointToIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Base_Foundation_Tri.Base_Foundation_Tri_C.UserConstructionScript
// ()

void ABase_Foundation_Tri_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Foundation_Tri.Base_Foundation_Tri_C.UserConstructionScript");

	ABase_Foundation_Tri_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Foundation_Tri.Base_Foundation_Tri_C.ExecuteUbergraph_Base_Foundation_Tri
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Foundation_Tri_C::ExecuteUbergraph_Base_Foundation_Tri(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Foundation_Tri.Base_Foundation_Tri_C.ExecuteUbergraph_Base_Foundation_Tri");

	ABase_Foundation_Tri_C_ExecuteUbergraph_Base_Foundation_Tri_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
