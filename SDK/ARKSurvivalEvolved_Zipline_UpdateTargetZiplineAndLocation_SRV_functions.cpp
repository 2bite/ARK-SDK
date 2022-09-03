// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_UpdateTargetZiplineAndLocation_SRV_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_UpdateTargetZiplineAndLocation_SRV_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C.ReceiveActivation");

	UZipline_UpdateTargetZiplineAndLocation_SRV_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_UpdateTargetZiplineAndLocation_SRV_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C.ReceiveTick");

	UZipline_UpdateTargetZiplineAndLocation_SRV_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C.ExecuteUbergraph_Zipline_UpdateTargetZiplineAndLocation_SRV
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UZipline_UpdateTargetZiplineAndLocation_SRV_C::ExecuteUbergraph_Zipline_UpdateTargetZiplineAndLocation_SRV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_UpdateTargetZiplineAndLocation_SRV.Zipline_UpdateTargetZiplineAndLocation_SRV_C.ExecuteUbergraph_Zipline_UpdateTargetZiplineAndLocation_SRV");

	UZipline_UpdateTargetZiplineAndLocation_SRV_C_ExecuteUbergraph_Zipline_UpdateTargetZiplineAndLocation_SRV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
