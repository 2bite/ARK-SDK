// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_FenceSupport_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_FenceSupport.Base_FenceSupport_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void ABase_FenceSupport_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FenceSupport.Base_FenceSupport_C.BPPlacedStructure");

	ABase_FenceSupport_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_FenceSupport.Base_FenceSupport_C.BPTreatAsFoundationForSnappedStructure
// ()
// Parameters:
// class APrimalStructure**       OtherStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FPlacementData          WithPlacementData              (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABase_FenceSupport_C::BPTreatAsFoundationForSnappedStructure(class APrimalStructure** OtherStructure, struct FPlacementData* WithPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FenceSupport.Base_FenceSupport_C.BPTreatAsFoundationForSnappedStructure");

	ABase_FenceSupport_C_BPTreatAsFoundationForSnappedStructure_Params params;
	params.OtherStructure = OtherStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithPlacementData != nullptr)
		*WithPlacementData = params.WithPlacementData;

	return params.ReturnValue;
}


// Function Base_FenceSupport.Base_FenceSupport_C.UserConstructionScript
// ()

void ABase_FenceSupport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FenceSupport.Base_FenceSupport_C.UserConstructionScript");

	ABase_FenceSupport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_FenceSupport.Base_FenceSupport_C.ExecuteUbergraph_Base_FenceSupport
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_FenceSupport_C::ExecuteUbergraph_Base_FenceSupport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_FenceSupport.Base_FenceSupport_C.ExecuteUbergraph_Base_FenceSupport");

	ABase_FenceSupport_C_ExecuteUbergraph_Base_FenceSupport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
