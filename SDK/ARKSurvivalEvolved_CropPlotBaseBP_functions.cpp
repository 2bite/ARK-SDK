// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CropPlotBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CropPlotBaseBP.CropPlotBaseBP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACropPlotBaseBP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.BPServerHandleNetExecCommand");

	ACropPlotBaseBP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function CropPlotBaseBP.CropPlotBaseBP_C.CanAttachToExosuit
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACropPlotBaseBP_C::CanAttachToExosuit(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.CanAttachToExosuit");

	ACropPlotBaseBP_C_CanAttachToExosuit_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CropPlotBaseBP.CropPlotBaseBP_C.CanBeStoredByExosuit
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACropPlotBaseBP_C::CanBeStoredByExosuit(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.CanBeStoredByExosuit");

	ACropPlotBaseBP_C_CanBeStoredByExosuit_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CropPlotBaseBP.CropPlotBaseBP_C.UserConstructionScript
// ()

void ACropPlotBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.UserConstructionScript");

	ACropPlotBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CropPlotBaseBP.CropPlotBaseBP_C.ExecuteUbergraph_CropPlotBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACropPlotBaseBP_C::ExecuteUbergraph_CropPlotBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.ExecuteUbergraph_CropPlotBaseBP");

	ACropPlotBaseBP_C_ExecuteUbergraph_CropPlotBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
