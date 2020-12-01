// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Roof_Tri_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_Roof_Tri.Base_Roof_Tri_C.IsValidSnapPointTo
// ()
// Parameters:
// class APrimalStructure**       childStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MySnapPointToIndex             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABase_Roof_Tri_C::IsValidSnapPointTo(class APrimalStructure** childStructure, int* MySnapPointToIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Roof_Tri.Base_Roof_Tri_C.IsValidSnapPointTo");

	ABase_Roof_Tri_C_IsValidSnapPointTo_Params params;
	params.childStructure = childStructure;
	params.MySnapPointToIndex = MySnapPointToIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Base_Roof_Tri.Base_Roof_Tri_C.BPOverrideSnappedToTransform
// ()
// Parameters:
// class APrimalStructure**       childStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ChildSnapFromIndex             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ChildSnapFromName              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                UnsnappedPlacementPos          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               UnsnappedPlacementRot          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                SnappedPlacementPos            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               SnappedPlacementRot            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SnapToIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SnapToName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            bForceInvalidateSnap           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABase_Roof_Tri_C::BPOverrideSnappedToTransform(class APrimalStructure** childStructure, int* ChildSnapFromIndex, struct FName* ChildSnapFromName, struct FVector* UnsnappedPlacementPos, struct FRotator* UnsnappedPlacementRot, struct FVector* SnappedPlacementPos, struct FRotator* SnappedPlacementRot, int* SnapToIndex, struct FName* SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int* bForceInvalidateSnap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Roof_Tri.Base_Roof_Tri_C.BPOverrideSnappedToTransform");

	ABase_Roof_Tri_C_BPOverrideSnappedToTransform_Params params;
	params.childStructure = childStructure;
	params.ChildSnapFromIndex = ChildSnapFromIndex;
	params.ChildSnapFromName = ChildSnapFromName;
	params.UnsnappedPlacementPos = UnsnappedPlacementPos;
	params.UnsnappedPlacementRot = UnsnappedPlacementRot;
	params.SnappedPlacementPos = SnappedPlacementPos;
	params.SnappedPlacementRot = SnappedPlacementRot;
	params.SnapToIndex = SnapToIndex;
	params.SnapToName = SnapToName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
	if (bForceInvalidateSnap != nullptr)
		*bForceInvalidateSnap = params.bForceInvalidateSnap;

	return params.ReturnValue;
}


// Function Base_Roof_Tri.Base_Roof_Tri_C.UserConstructionScript
// ()

void ABase_Roof_Tri_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Roof_Tri.Base_Roof_Tri_C.UserConstructionScript");

	ABase_Roof_Tri_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Roof_Tri.Base_Roof_Tri_C.ExecuteUbergraph_Base_Roof_Tri
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Roof_Tri_C::ExecuteUbergraph_Base_Roof_Tri(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Roof_Tri.Base_Roof_Tri_C.ExecuteUbergraph_Base_Roof_Tri");

	ABase_Roof_Tri_C_ExecuteUbergraph_Base_Roof_Tri_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
