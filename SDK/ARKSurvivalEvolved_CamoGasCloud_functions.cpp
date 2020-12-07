// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CamoGasCloud_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CamoGasCloud.CamoGasCloud_C.BPExcludeAoEActor
// ()
// Parameters:
// class AActor**                 ActorToConsider                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACamoGasCloud_C::BPExcludeAoEActor(class AActor** ActorToConsider)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamoGasCloud.CamoGasCloud_C.BPExcludeAoEActor");

	ACamoGasCloud_C_BPExcludeAoEActor_Params params;
	params.ActorToConsider = ActorToConsider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CamoGasCloud.CamoGasCloud_C.UserConstructionScript
// ()

void ACamoGasCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamoGasCloud.CamoGasCloud_C.UserConstructionScript");

	ACamoGasCloud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamoGasCloud.CamoGasCloud_C.ExecuteUbergraph_CamoGasCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACamoGasCloud_C::ExecuteUbergraph_CamoGasCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamoGasCloud.CamoGasCloud_C.ExecuteUbergraph_CamoGasCloud");

	ACamoGasCloud_C_ExecuteUbergraph_CamoGasCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
