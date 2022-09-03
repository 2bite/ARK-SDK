// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Floor_Base_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Floor_Base_SM.Floor_Base_SM_C.BPAllowSnapRotationForStructure
// ()
// Parameters:
// int*                           ThisSnapPointIndex             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ThisSnapPointName              (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure**       OtherStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherStructureSnapPointIndex   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OtherStructureSnapPointName    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFloor_Base_SM_C::BPAllowSnapRotationForStructure(int* ThisSnapPointIndex, struct FName* ThisSnapPointName, class APrimalStructure** OtherStructure, int* OtherStructureSnapPointIndex, struct FName* OtherStructureSnapPointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Base_SM.Floor_Base_SM_C.BPAllowSnapRotationForStructure");

	AFloor_Base_SM_C_BPAllowSnapRotationForStructure_Params params;
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


// Function Floor_Base_SM.Floor_Base_SM_C.UserConstructionScript
// ()

void AFloor_Base_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Base_SM.Floor_Base_SM_C.UserConstructionScript");

	AFloor_Base_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Floor_Base_SM.Floor_Base_SM_C.ExecuteUbergraph_Floor_Base_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFloor_Base_SM_C::ExecuteUbergraph_Floor_Base_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Base_SM.Floor_Base_SM_C.ExecuteUbergraph_Floor_Base_SM");

	AFloor_Base_SM_C_ExecuteUbergraph_Floor_Base_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
