// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ceiling_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ceiling_Base.Ceiling_Base_C.BPAllowSnapRotationForStructure
// ()
// Parameters:
// int*                           ThisSnapPointIndex             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ThisSnapPointName              (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure**       OtherStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherStructureSnapPointIndex   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OtherStructureSnapPointName    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACeiling_Base_C::BPAllowSnapRotationForStructure(int* ThisSnapPointIndex, struct FName* ThisSnapPointName, class APrimalStructure** OtherStructure, int* OtherStructureSnapPointIndex, struct FName* OtherStructureSnapPointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Base.Ceiling_Base_C.BPAllowSnapRotationForStructure");

	ACeiling_Base_C_BPAllowSnapRotationForStructure_Params params;
	params.ThisSnapPointIndex = ThisSnapPointIndex;
	params.ThisSnapPointName = ThisSnapPointName;
	params.OtherStructure = OtherStructure;
	params.OtherStructureSnapPointIndex = OtherStructureSnapPointIndex;
	params.OtherStructureSnapPointName = OtherStructureSnapPointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ceiling_Base.Ceiling_Base_C.UserConstructionScript
// ()

void ACeiling_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Base.Ceiling_Base_C.UserConstructionScript");

	ACeiling_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ceiling_Base.Ceiling_Base_C.ExecuteUbergraph_Ceiling_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACeiling_Base_C::ExecuteUbergraph_Ceiling_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Base.Ceiling_Base_C.ExecuteUbergraph_Ceiling_Base");

	ACeiling_Base_C_ExecuteUbergraph_Ceiling_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
